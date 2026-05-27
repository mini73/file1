//#define _CRT_SECURE_NO_WARNINGS
//#include   <stdio.h>
//#include   <stdlib.h>
//#include   <string.h>
//
///* 상수 정의 */
//#define  m    1024			// 모듈러 n의 비트 수
//#define  mp   512			// 비밀 소수 p의 비트 수
//#define  mq   512			// 비밀 소수 q의 비트 수
//#define  HASH 256           // 해쉬 함수 길이
//#define  LEN_PS 74			// 패딩 스트링의 크기(128-3-51(A+T))
//#define  HASH_LEN 51        // Alg ID + 해쉬 = 19 + 32 
//#define  SHA_LEN 32         // SHA-256의 출력 길이
//#define  DHEX 32
//#define  OCT  8
//#define  Char_NUM 8 
//#define  mb   m/DHEX
//#define  hmb  mb/2
//#define  mpb  mp/DHEX
//#define  mqb  mq/DHEX
//#define  rdx  0x100000000 
//
///* 타입 정의 */
//typedef unsigned long int ULINT;
//typedef unsigned __int64 INT64;
//typedef unsigned __int32 INT32;
//
///* 함수 선언 */
//void RSA_Signature();		// RSA 서명 함수
//void RSA_Verification();	// RSA 서명 검증 함수
//int  get_from_file(FILE* fptr, short* a, short mn);				// 파일로부터 데이터를 읽어 이진형태로 저장하는 함수
//void put_to_file(FILE* fptr, short* a, short mn);				// 이진 데이터를 바이트 형태로 변환하여 파일에 저장하는 함수
//void put_to_message(unsigned char* msg, short* a, short mn);	// 이진 데이터를 바이트 형태로 변환하여 메시지 버퍼에 저장하는 함수
//void CONV_O_to_B(INT64* A, short* B, short mn);				// octet를 binary로 변환하는 함수
//void CONV_B_to_O(short* A, INT64* B, short mn);				// binary를 octet으로 변환하는 함수
//void CONV_R_to_B(INT64* A, short* B, short mn);				// Radix를 binary로 변환하는 함수
//void CONV_B_to_R(short* A, INT64* B, short mn);				// binary를 Radix로 변환하는 함수
//void rand_g(short* out, short n);								// 랜덤 수를 생성하여 이진 형태로 저장하는 함수
//void Modular(INT64* X, INT64* N, short mn);					// 모듈러 연산을 수행하는 함수
//void Conv_mma(INT64* A, INT64* B, INT64* C, INT64* N, short mn);				// 고전적인 모듈러 감소 연산을 수행하는 함수
//void LeftTORight_Pow(INT64* A, INT64* E, INT64* C, INT64* N, short mn);		// Left to Right 멱승을 수행하는 함수
//
///* 전역 변수 */
//INT32  LAND = 0xFFFFFFFF;
//
//// 공개키 파라미터
//INT64 N[mb];		// 모듈러 n (= p * q)
//INT64 E[mb];		// 공개키 e
//INT64 D[mb];		// 비밀키 d
//
//// 서명과 검증에 사용되는 버퍼(이진(binary) 형태)
//short  s[m];				// 서명 값
//short  h[HASH_LEN * 8];		// 해쉬 값(서명)
//short  v_h[m];				// 해쉬 값(검증)
//short  ps[LEN_PS * 8];		// 패딩 스트링
//
//// 서명과 검증에 사용되는 버퍼(Radix와 octet 형태)
//INT64 S[mb];				// 서명 값(서명)
//INT64 V_S[mb];				// 서명 값(검증)
//INT64 H[mb];				// 해쉬 값(Radix)
//INT64 HDATA[HASH_LEN];		// 해쉬 값(octet - 서명)
//INT64 SB[mb * 4];			// 서명 블록(8 bit - 서명)
//INT64 SB1[mb];				// 서명 블록(32 bit)
//INT64 V_SB[mb * 4];			// 서명 블록(8 bit - 검증)
//INT64 V_HDATA[HASH_LEN];	// 해쉬 값(octet - 검증)		
//INT64 O_PS[LEN_PS * 8];		// 패딩 스트링(octet)
//
//// SHA-256을 나타내는 식별 값
//unsigned char sha256_num[19] = { 0x30, 0x31, 0x30, 0x0d, 0x06, 0x09, 0x60, 0x86,
//						 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01, 0x05, 0x00, 0x04, 0x20 };
//
//
//// rsa.std.c 파일을 포함한다.
//#include   "rsa_std.c"
//
//#include   "SHA-256.c"
//
//void main(int argc, char* argv[])
//{
//	int select;
//
//	// 서명과 서명 검증 선택
//	printf("* 1. RSA 서명	2. RSA 서명 검증\n");
//	printf("- 선택하시오 : ");
//	scanf("%d", &select);
//
//	// 선택한 항목 실행
//	if (select == 1)
//		RSA_Signature();
//	else if (select == 2)
//		RSA_Verification();
//	else
//		printf("* 잘못 입력 하셨습니다!\n");
//}
//
//// RSA 서명
//void RSA_Signature()
//{
//	int i, j, cnt;
//	BYTE hash_text[HASH_LEN] = { 0, };
//	char file_name[32] = { 0, }, s_file_name[32] = { 0, };
//	FILE* fptr;
//
//	// 서명에 사용할 비밀키 파일을 연다
//	if ((fptr = fopen("secret_key.txt", "rb")) == NULL)
//	{
//		printf("file open failed!!\n");
//		exit(1);
//	}
//
//	// 파일로부터 비밀키 d와 모듈러 n을 저장한다
//	for (i = mb - 1; i >= 0; i--)  fscanf(fptr, "%I64x ", &N[i]);
//	for (i = mb - 1; i >= 0; i--)  fscanf(fptr, "%I64x ", &D[i]);
//
//	fclose(fptr);
//
//	// 서명할 파일명 입력
//	printf("* 서명할 파일명을 입력하시오 : ");
//	scanf("%s", file_name);
//
//	// 파일 열기
//	if ((fptr = fopen(file_name, "rb")) == NULL)
//	{
//		printf("File open failed!\n");
//		exit(1);
//	}
//
//	SHA256(fptr, hash_text);	// SHA_256 해쉬 
//
//	fclose(fptr);
//
//	// SHA-256 식별 값을 해쉬 값에 이어서 추가한다
//	for (i = 0; i < 19; i++)                         // SHA-256 식별자 : 19 바이트
//		hash_text[i + 32] = sha256_num[19 - i - 1];  // SHA-256 길이 : 32 바이트
//
//	// 해쉬 데이터를 이진 값으로 변환한다
//	cnt = HASH_LEN * 8 - 1;
//	for (i = 0; i < HASH_LEN; i++) {
//		for (j = 0; j < 8; j++) {
//			h[cnt] = (hash_text[i] >> j) & 0x01;
//			cnt--;
//		}
//	}
//
//	CONV_B_to_O(h, HDATA, HASH_LEN);	// 이진 데이터를 옥텟으로 변환
//
//	/* EMSA-PKCS #1-v1.5 패딩 */
//	// [00|01|PS|00|T] (T = 해쉬 알고리즘 식별 값 + 해쉬 값)
//	for (i = 0; i < mb * 4; i++)
//		SB[i] = 0xFF;
//
//	SB[mb * 4 - 1] = 0x00;
//	SB[mb * 4 - 2] = 0x01;
//	SB[HASH_LEN] = 0x00;
//
//	for (i = HASH_LEN - 1; i >= 0; i--)
//		SB[i] = HDATA[i];
//
//	for (i = mb * 4 - 1; i > 0; i = i - 4)
//		SB1[i / 4] = (SB[i] << (DHEX - OCT)) + (SB[i - 1] << (OCT + OCT)) + (SB[i - 2] << OCT) + SB[i - 3];
//	/* 패딩 과정 종료 */
//
//	/*** c = h(m)^d mod n (m-bit) ***/
//	LeftTORight_Pow(SB1, D, S, N, mb);		// 최종 메시지에 서명을 한다
//
//	CONV_R_to_B(S, s, mb);		// Radix를 이진 데이터로 변환
//
//	// 서명을 저장할 파일 이름 설정 (예 : MONEY.txt -> MONEY.sgn)
//	for (i = 0;; i++)
//	{
//		if (file_name[i] == '.')
//		{
//			s_file_name[i] = '\0';
//			strcat(s_file_name, ".sgn");
//			break;
//		}
//
//		s_file_name[i] = file_name[i];
//	}
//
//	// 서명 데이터를 저장할 파일 열기
//	if ((fptr = fopen(s_file_name, "wb")) == NULL)
//	{
//		printf("File open failed!\n");
//		exit(1);
//	}
//
//	put_to_file(fptr, s, m / Char_NUM);	// 서명 데이터를 파일로 저장
//
//	printf("\n* The Signature is completed.\n\n");
//	fclose(fptr);
//}
//
//void RSA_Verification()
//{
//	int i;
//	BYTE v_text[HASH_LEN] = { 0, };
//	BYTE hash_text[HASH_LEN] = { 0, };
//	char file_name[32] = { 0, }, s_file_name[32] = { 0, };
//	FILE* fptr;
//
//	// 서명자의 공개키 파일 열기
//	if ((fptr = fopen("public_key.txt", "rb")) == NULL)
//	{
//		printf("file open failed!!\n");
//		exit(1);
//	}
//
//	// 파일로부터 공개키 e와 모듈러 n을 저장한다
//	for (i = mb - 1; i >= 0; i--)  fscanf(fptr, "%I64x ", &N[i]);
//	for (i = mb - 1; i >= 0; i--)  fscanf(fptr, "%I64x ", &E[i]);
//
//	fclose(fptr);
//
//	// 검증할 파일명 입력
//	printf("* 검증할 파일명을 입력하시오 : ");
//	scanf("%s", file_name);
//
//	// 파일 열기
//	if ((fptr = fopen(file_name, "rb")) == NULL)
//	{
//		printf("File open failed!\n");
//		exit(1);
//	}
//
//	SHA256(fptr, hash_text);	// SHA_256 해쉬 
//
//	fclose(fptr);
//
//	// 서명 파일명 입력
//	printf("* 서명 파일명을 입력하시오(.sgn) : ");
//	scanf("%s", file_name);
//
//	// 서명 파일 열기
//	if ((fptr = fopen(file_name, "rb")) == NULL)
//	{
//		printf("File open failed!\n");
//		exit(1);
//	}
//
//	get_from_file(fptr, s, m / Char_NUM);		// 파일로부터 서명 데이터를 읽어온다
//
//	CONV_B_to_R(s, V_S, mb);	// 이진 데이터를 Radix로 변환
//
//	LeftTORight_Pow(V_S, E, H, N, mb);		// 서명 검증
//
//	// 데이터 변환 ( Radix -> Binary -> Octet)
//	CONV_R_to_B(H, v_h, mb);
//	CONV_B_to_O(v_h, V_SB, mb * 4);
//
//	// 패딩 부분을 제외하고 해쉬 데이터만 추출한다
//	for (i = HASH_LEN - 1; i >= 0; i--)
//		V_HDATA[i] = V_SB[i];
//
//	// SHA-256 식별 값을 제외하고 해쉬 값만 비교하여
//	// 검증의 성공 여부를 확인한다
//	for (i = 0; i < SHA_LEN; i++)
//	{
//		if (V_HDATA[i] != hash_text[i])
//		{
//			printf("The Verification is failed!\n");
//			return;
//		}
//	}
//
//	printf("\n* The Verification is completed!\n");
//	fclose(fptr);
//}
//
//// 파일로부터 데이터를 읽어와 이진 형태로 저장
//int get_from_file(FILE* fptr, short* a, short mn)
//{
//	int i, j;
//	short flag = 1, cnt = 0, mm;
//	unsigned int b[m / Char_NUM] = { 0, };
//
//	mm = mn * Char_NUM;
//
//	for (i = 0; i < mm; i++)
//		a[i] = 0;
//
//	// 파일에서 한 바이트씩 읽는다
//	for (i = 0; i < mn; i++)
//	{
//		if (fscanf(fptr, "%02x", &b[i]) == EOF)
//		{
//			if (i == 0)
//			{
//				flag = -1;
//				return(flag);
//			}
//
//			flag = 0;
//
//			for (; i < mn; i++)
//				b[i] = '\0';
//
//			break;
//		}
//	}
//
//	cnt = 0;
//	// 바이트 단위의 데이터를 이진 형태로 변환
//	for (i = mn - 1; i >= 0; i--)
//	{
//		for (j = 0; j < Char_NUM; j++)
//		{
//			a[cnt++] = (b[i] >> j) & 0x01;
//		}
//	}
//
//	return(flag);
//}
//
//// 이진 형태의 데이터를 바이트 단위로 변환하여 파일로 저장
//void put_to_file(FILE* fptr, short* a, short mn)
//{
//	int i, j;
//	short cnt = 0, mm;
//	unsigned int b[m / Char_NUM] = { 0, };
//	unsigned char mask[Char_NUM] = { 0x01,0x02,0x04,0x08,
//									0x10,0x20,0x40,0x80 };
//
//	mm = mn * Char_NUM;
//	cnt = 0;
//	// 이진 형태의 데이터를 바이트 형태로 변환한다
//	for (i = mn - 1; i >= 0; i--) {
//		b[i] = 0x00;
//		for (j = 0; j < Char_NUM; j++) {
//			b[i] = b[i] + a[cnt++] * mask[j];
//		}
//	}
//	// 변환한 데이터를 메시지 버퍼에 저장한다
//	for (i = 0; i < mn; i++)
//		fprintf(fptr, "%02x", b[i]);
//}
//
//// 이진 형태의 데이터를 바이트 단위로 변환하여 저장
//void put_to_message(unsigned char* msg, short* a, short mn)
//{
//	register i, j;
//	short cnt = 0, mm;
//	unsigned char b[m / Char_NUM] = { 0, };
//	unsigned char mask[Char_NUM] = { 0x01,0x02,0x04,0x08,
//									0x10,0x20,0x40,0x80 };
//
//	mm = mn * Char_NUM;
//	cnt = 0;
//	// 이진 형태의 데이터를 바이트 형태로 변환한다
//	for (i = mn - 1; i >= 0; i--) {
//		b[i] = 0x00;
//		for (j = 0; j < Char_NUM; j++) {
//			b[i] = b[i] + a[cnt++] * mask[j];
//		}
//	}
//	// 변환한 데이터를 메시지 버퍼에 저장한다
//	for (i = mn - 1; i >= 0; i--)
//		msg[i] = b[i];
//}

#include<stdio.h>
int main() {
	int aa[100], bb[100];
	int i;

	for (i = 0;i < 100;i++)
	{
		aa[i] = i * 2;
	}
	for (i = 0;i < 100;i++)
	{
		bb[i] = aa[99-i];
	}
		
	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
}

#include<stdio.h>
int main() {
	int aa[] = { 10,20,30,40,50 };
	int count;

	count = sizeof(aa)/ sizeof(int);

	printf("배열 aa[]의 요소의 개수는 %d 입니다\n", count);
}

#include<stdio.h>
int main() {
	char ss[8] = "Basic-C";
	int i;

	ss[5] = '#';
	for (i = 0;i < 8;i++)
	{
		printf("ss[%d] ==>%c\n", i, ss[i]);
	}
	printf("문자열 배열 ss ==> %s \n", ss);
}