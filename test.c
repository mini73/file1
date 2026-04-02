//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0, j = 0, Key_Size = 0, str_size = 0, select = 1;
//	char str[50] = {0,}, key[16]={0,};
//
//	printf("안호문 또는 평문을 입력: ");
//	gets(str);
//
//	printf("안호는 1번, 복호는 2번 선택: ");
//	scanf("%d", &select);
//
//	while (getchar() != '\n');
//	printf("키값 입력(소문자만) :");
//	gets(key);
//
//	str_size = strlen(str);
//	Key_Size = strlen(key);
//
//	for (i = 0; i < str_size; i++) {
//		j = i % Key_Size;
//
//		if (select == 1) {
//
//			if ((str[i] >= 'a') && (str[i] <= 'z')) 
//			{
//				str[i] -= 'a';  key[j] -='a';
//				
//				if ((str[i] + key[j]) < 0)
//					str[i] += 26;
//
//				str[i] = (str[i] + key[j]) % 26;
//				str[i] += 'a'; key[j] += 'a';
//			}
//
//			if ((str[i] >= 'A') && (str[i] <= 'Z')) 
//			{
//				str[i] -= 'A'; key[j] -= 'a';
//
//				if ((str[i] + key[j]) < 0)
//					str[i] += 26;
//
//				str[i] = (str[i] + key[j]) % 26;
//				str[i] += 'A'; key[j] += 'a';
//
//			}
//
//		}
//		if (select == 2) {
//
//			if ((str[i] >= 'a') && (str[i] <= 'z'))
//			{
//				str[i] -= 'a';  key[j] -= 'a';
//
//				if ((str[i] - key[j]) < 0)
//					str[i] += 26;
//
//				str[i] = (str[i] - key[j]) % 26;
//				str[i] += 'a'; key[j] += 'a';
//			}
//
//			if ((str[i] >= 'A') && (str[i] <= 'Z'))
//			{
//				str[i] -= 'A'; key[j] -= 'a';
//
//				if ((str[i] - key[j]) < 0)
//					str[i] += 26;
//
//				str[i] = (str[i] - key[j]) % 26;
//				str[i] += 'A'; key[j] += 'a';
//			}
//		}
//	}
//	printf("\n암호화 또는 복호된 결과 출력:");
//	puts(str);
//}
#define _crt_secure_no_warnings
#include<stdio.h>
#define block_size 6

void main()
{
	int i, j, size, block_num;
	int key[64] = { 3, 5, 1, 6, 4, 2};
	char p_text[64], c_text[64], d_text[64];

	printf("* 평문 입력 : ");
	scanf("%s", p_text);

	size = strlen(p_text);

	if (size % block_size > 0)
	{
		block_num = strlen(p_text) / block_size + 1;

		for (i = strlen(p_text); i < block_num * block_size; i++)
		{
			p_text[i] = 'x';
		}
	}
	else
		block_num = strlen(p_text) / block_size;

	for (i = 0; i < block_num; i++)
		for (j = 0; j < block_size; j++)
			c_text[i * block_size + j] = p_text[(key[j] - 1) + i * block_size];

	printf("*암호문: ");
	for (i = 0; i < block_num*; i++)
}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#define BLOCK_SIZE 6
//
//void main()
//{
//	int i, j, size, block_num;
//	int key[64] = { 3, 5, 1, 6, 4, 2 };
//	int dekey[64] = { 3,6,1,5,2,4 };
//	char p_text[64], c_text[64], d_text[64];
//
//	printf("* 평문 입력 : ");
//	scanf("%s", p_text);
//
//	size = strlen(p_text);
//
//	/*if (size % BLOCK_SIZE > 0)
//	{
//		block_num = strlen(p_text) / BLOCK_SIZE + 1;
//
//		for (i = strlen(p_text); i < block_num * BLOCK_SIZE; i++)
//		{
//			p_text[i] = 'x';
//		}
//	}
//	else
//		block_num = strlen(p_text) / BLOCK_SIZE;
//
//	for (i = 0; i < block_num;)
//}*/
//	for (i = 0; i < BLOCK_SIZE; i++)
//	{
//		c_text[i] = p_text[(key[i]) - 1];
//	}
//	printf("*암호문: ");
//	for (i = 0; i < BLOCK_SIZE; i++) {
//		printf("%c", c_text[i]);
//	}
//	printf("\n");
//
//
//	for (i = 0; i < BLOCK_SIZE; i++) {
//		d_text[i] = c_text[(dekey[i]) - 1];
//		d_text[(dekey[i]) - 1] = d_text[i];
//
//	}
//}