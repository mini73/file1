//#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////#include <string.h>
////
////int main()
////{
////	char ss[7] = "XYZ";
////
////	strcat(ss, "ABC");
////	printf("이어진 문자열 ss의 내용 ==>%s \n", ss);
////	 
////}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ss[] = "XYZ";
//    char tt[] = "xyz";
//    int r;
//
//    r = strcmp(ss, tt);
//
//    printf("두 문자열의 비교결과 ==> %d \n", r);
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값: ch==>%c\n", ch);
//	printf("ch의 주소(address): &ch==>%d\n", &ch);
//	printf("p가 가지고 있는 값: p==>%d\n", p);
//	printf("p가 가리키는 곳의 실제값: *p==>%c\n", *p);
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch;
//
//	q = p;
//
//	*q = 'z';
//
//
//	printf("ch가 가지고 있는 값: ch==>%c\n\n", ch);
//}

//#include<stdio.h>
//
//int main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] ==>%s\n", &s[3]);
//	printf("p+3 ==>%s\n\n", p + 3);
//	printf("s[3] ==>%c\n", s[3]);
//	printf("*(p+3) ==>%c\n", *(p + 3));
//}

#include <stdio.h>
#include<string.h>

int main()
{
	struct bibim {
		int a;
		float b;
		char c;
		char d[5];
	};

	struct bibim b1;

	b1.a = 10;
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy(b1.d, "ABCD");
}

#include<stdio.h>

int main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;

	printf(" 이름: ");
	scanf("%s", s.name,9);

	printf(" 국어점수: ");
	scanf("%d", &s.kor);

	printf(" 영어점수: ");
	scanf("%d", &s.eng);

	s.avg = (s.kor + s.eng) / 2.0f;

	printf("학생 이름 ==>  %s\n", s.name);
	printf("국어점수 ==>  %d\n", s.kor);
	printf("영어점수 ==>  %d\n", s.eng);
	printf("평균점수 ==>  %5.1f\n", s.avg);
}

#include<stdio.h>

int main()
{
	enum week {sun,mon,tue,wed, thu, fri, sat};

	enum week ww;

	ww = sat;

	if(ww==sun)
		printf("오늘은 일요일입니다.\n\n",ww);
	else
		printf("오늘은 일요일이 아닙니다.\n\n",ww);
}