//#include <stdio.h>
//
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d\n", keyboard);
//	printf("마우스: %d\n", mouse);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    double pi;
//	pi = 3.14;
//	int r = 5;
//	double area = 0;
//	area = r * r * pi;
//	double cir = 0;
//	cir = 2 * r * pi;
//	printf("원의 넓이는 %lf,원의 둘레는 %lf입니다\n", area, cir);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int us = 3;
//	int ls = 5;
//	int h = 7;
//	int area = 0;
//	area = (us + ls)* h / 2;
//	printf("사다리꼴의 넓이는 %d이다\n", area);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf_s("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf_s("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi, area;
//	pi = 3.14;
//	area = 0;
//	int length;
//	length = 0;
//	int r;
//	printf("원의 반지름을 입력 : ");
//	scanf("%d", &r);
//	printf("원의 넓이는 %lf, 원의 길이는 %d입니다.", r * r * pi, r + r);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double W1, W2, H;
//	double area = 0;
//	printf("밑변의 길이,윗변의 길이, 높이를 입력하시오: ");
//	scanf("%lf %lf %lf", &W1, &W2, &H);
//	printf("사다리꼴의 넓이는 %.2lf입니다", (W1 + W2) * H / 2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main() 
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2;         printf("%2d\n", number);
//	number--;            printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("숫자 2개 입력: ");
//	scanf("%d %d", &a, &b);
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1 % 4);
//	printf("%d = number2%%3\n", number2 % 3);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int number1;
//	scanf("%d", &number1);
//	int number2 = number1 % 50;
//	printf("답은 %d입니다", number2);
//	return 0;
//
//}
//#include<stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int jel;
//	printf("젤리가격을 입력해주세요.(원)");
//	scanf("%d", &jel);
//
//	/*int coin500 = jel ;
//	jel = jel % 500;
//	int coin100 = 100 / jel;
//	jel = jel % 100;
//	int coin50 = 50 / jel;
//	jel = jel % 50;
//	int coin10 = 10 / jel;
//	jel = jel % 10;
//	printf("오백원 %1d개, ", coin500);
//	printf("백원 %1d개, ", coin100);
//	printf("오십원 %1d개, ", coin50);
//	printf("십원 %1d개, ", coin10);*/
//
//	int change = 1000 - jel;
//
//	int coin500 = change / 500;
//	change %= 500; //반복되는 구간은 축약식으로 써주면 좋다
//	int coin100 = change / 100;
//	change = change % 100;
//	int coin50 = change / 50;
//	change = change % 50;
//	int coin10 = change / 10;
//	
//	printf("오백원 %d개, ", coin500);
//	printf("백원 %d개, ", coin100);
//	printf("오십원 %d개, ", coin50);
//	printf("십원 %d개, ", coin10);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//
//	return 0;
// }
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	int afterInt = rand() % 10 + 50;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 :%d\n", nextInt);//0~9
//	printf("그다음숫자 :%d", afterInt);//50~59
//
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; //1000~10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;//0~1500
//	int coin100 = rand() % 5000;//0~4999
//	coin100 = coin100 / 100 * 100;//0~4900
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple 15이면 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17)//apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)// apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{//else if는 if가 틀렸을때만 실행된다
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하시오: ");
//	scanf("%d", &y_age);
//	if (y_age >= 0) {
//		printf("전체 관람가 ");
//	}
//	if (y_age >= 12) {
//		printf("12세 관람가 ");
//	}
//	if (y_age >= 15) {
//		printf("15세 관람가 ");
//	}
//	printf("이용가능");


	//if (y_age < 12)
	//{
	//	printf("전체 관람가 이용가능");
	//}
	//else if (y_age < 15) 
	//{
	//	printf("전체 관람가, 12세 관람가 이용가능");
	//}
	//else if (y_age > 15)
	//{
	//	printf("전체 관람가, 12세 관람가, 15세 관람가 이용가능");
	//}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char initial;
//	printf("영문자 하나를 입력하시오: ");
//	scanf("%c", &initial);
//
//	if ((initial >= 'A') && (initial <= 0x5a))
//	{
//		printf("대문자");
//	}
//	else if ((initial >= 0x61)&&(initial <= 0x7a))
//	{
//		printf("소문자");
//	}
//	else
//	{
//		printf("영문자가 아닙니다");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) 
//	{
//		printf("숫자1이 숫자 2보다 큽니다.\n");
//	}
//	else
//	{
		//if (number < answer) /* number <= answer인 경우 else 실행 */
//		{
//			printf("숫자2가 숫자 1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int apple = 15;
//	if (!apple)//apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else//if가 틀리면 (apple이 아니면)실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	printf("숫자를 입력하시오: ");
//	scanf("%d", &i);
//
//	if (!i)
//	{
//		printf("0입니다");
//	}
//	else if (i > 0)
//	{
//		printf("양수입니다");
//	}
//	else 
//	{
//		printf("음수입니다");
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int num;
//	scanf("%d", &num);
//
//	if (num >= 10 && num <= 99)
//	{
//		printf("input은 두자리 숫자입니다");
//	}
//	else
//	{
//		printf("input은 두자리 숫자가 아닙니다");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 c등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다\n");
//	}
//	if (number % 2 == 0)
//	{   //2로 나눈 나며지가 0 이면 짝수
//		printf("number는 짝수입니다\n");
//	}
//	else
//	{   //2로 나눈 나머지가 1이면 홀수
//		printf("number는 홀수입니다\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char arrow;
//
//	scanf("%c", &arrow);
//	
//	if (arrow == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (arrow == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (arrow == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.");
//	}
//	else if (arrow == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다. ");
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다. ");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다. ");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("커멘드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동\n");
//	printf(">, d 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'<':
//	case'a':
//		//case를 여러개 써서 같은 코드 실행 가능
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 테스터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 테스터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("0~9사이의 숫자를 입력하시오: ");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("짝\n");
//		break;
//	default:
//		printf("");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("커멘드를 입력하세요:");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n");   break;
//	case 2: printf("two\n");   break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int time, sec, hour, min;
//
//	printf("## 계산할 초는 ?");
//	scanf("%d", &time);
//
//	min = time / 60;
//	
//    hour = min / 60;
//
//	min = min % 60;
//	
//	sec = time % 60;
//
//	
//	
//	printf("시간은 ==> %d시간\n", hour);
//	printf("분은   ==> %d 분\n", min);
//	printf("초는   ==> %d 초\n", sec);
//	//sec = sec % 60;
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//
//	printf("수식을 띄어쓰기로 입력: ");
//	scanf("%d %c %d", &input1, &oper, &input2);
//	//printf("%d %c %d = %d입니다\n", input1,oper, input2, input1 + input2);
//	switch (oper) {
//	case '+':
//		printf("%d + %d = %d입니다\n", input1, input2, input1 + input2);
//			break;
//	case '-':
//		printf("%d - %d = %d입니다\n", input1, input2, input1 - input2);
//		break;
//	case '*':
//		printf("%d * %d = %d입니다\n", input1, input2, input1 * input2);
//		break;
//	case '/':
//		printf("%d / %d = %d입니다\n", input1, input2, input1 / input2);
//		break;
//	case '%':
//		printf("%d %% %d = %d입니다\n", input1, input2, input1 % input2);
//		break;
//	default:
//		printf("잘못 입력\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int month;
//	printf("달 입력:");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1: printf("1 > January\n");
//		break;
//	case 2: printf("2 > February\n");
//		break;
//	case 3: printf("3 > march\n");
//		break;
//	case 4: printf("4 > April\n");
//		break;
//	case 5: printf("5 > May\n");
//		break;
//	case 6: printf("6 > June\n");
//		break;
//	case 7: printf("7 > July\n");
//		break;
//	case 8: printf("8 > August\n");
//		break;
//	case 9: printf("9 > September\n");
//		break;
//	case 10: printf("10 > October\n");
//		break;
//	case 11: printf("11 > November\n");
//		break;
//	case 12: printf("12 > December\n");
//		break;
//	default: printf("잘못입력했습니다\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n");
//		break;
//	case 'X': printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",
//			number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n",
//			number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1://brace추가
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두개를 입력하세요\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
// return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arrow;
//	scanf("%c", &arrow);
//	switch (arrow) 
//	{
//	case'w': {
//		printf("위 방향키를 입력하셨습니다.");
//		break;
//	}
//	case 'a': {
//		printf("좌 방향키를 입력하셨습니다.");
//		break;
//	}
//	case 'd': {
//		printf("우 방향키를 입력하셨습니다.");
//		break;
//	}
//	case 's': {
//		printf("아래 방향키를 입력하셨습니다.");
//		break;
//	}
//	}
//	return 0;
//
//}
#include<stdio.h>
int main() {
	int appetizer, mainDish, dessert;
	printf("에피타이저 1.캐비어 2.샐러드 3.푸아그라\n");
	scanf("%d", &appetizer);
	printf("메인디쉬 1.스테이크 2.생선요리 3.양갈비\n");
	scanf("%d", &mainDish);
	printf("디저트 1.케익 2.아이스크림 3.초콜릿무스\n");
	scanf("%d", &dessert);

	switch (appetizer) {
	case 1: {
		printf("주문한 음식은 캐비어, ");
		break;
	}
	case 2: {
		printf("주문한 음식은 샐러드, ");
		break;
	}
	case 3: {
		printf("주문하 음식은 푸아그라, ");
		break;
	}
	}
	switch (mainDish) {
	case 1: {
		printf("스테이크, ");
		break;
	}
	case 2: {
		printf("생선요리, ");
		break;
		  }
	case 3: {
		printf("양갈비, ");
		break;
	}
	}
	switch (dessert) {
	case 1: {
		printf("케익입니다");
		break;
	}
	case 2: {
		printf("아이스크림입니다");
		break;
	}
	case 3: {
		printf("초콜릿무스입니다");
		break;
	}
	}
	return 0;
}