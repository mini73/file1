//#include<stdio.h>
//int main() {
//	while (0) //0 == false
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	while (1) {
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93)  break;
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은동안 반복\n");
//		count++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count = 3;
//
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int c = 6;
//
//	while (c > 0) {
//		printf(" c");
//		c--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = -10;
//
//	while (num <= 0)
//	{
//
//		printf(" %d", num);
//		num++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int num = 0;
//
//	while (num <= 100) {
//		//if (num % 5 == 0) {
//			printf(" %d", num);
//		//}
//		num+=5;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count = 3;
//	while (count)
//	{
//		if (count == 1) {
//		break;
//	     }
//	printf("현재 count: %d\n", count);
//	printf("count가 0이 아니면 반복\n");
//	count--;
//    }
// return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= +'Z')
//		{
//			printf("대문자를 입력하셨습니다\n");
//		}
//		else { continue; }
//	}
//	return 0; 
//}
//#include<stdio.h>
//int main() {
//	int number, total = 0;
//	while (1) {
//		printf("양수를 입력해주세요(0입력시 종료):");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		//number가 0이면 반복문 탈출
//		else if (number < 0) { continue; }
//		//number가 음수이면 다시 입력받음
//		total += number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int number = 1;
//	int multi = 1;
//	while (1) {
//
//		multi *= number;
//		if (multi >= 50000)
//		{
//			printf("%d", number);
//			break;
//		}
//		number++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char alpha = 'A';
//	while (alpha <= 'Z') {
//		//if (alpha == 'F')
//		//{
//		//	alpha++;
//		//}
//		if (alpha != 'F')
//			printf("%c", alpha);
//		alpha++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int sum = 0;
//	int input;
//	int player = 0;
//	printf("숫자1~3중 하나를 입력하시오.\n");
//	while (1) {
//		//if (player == 0) {
//		//	printf("%c : ",'A' + 0);
//		//}
//		//else {
//		//	printf("%c : ",'A' + 1);
//		//}
//		
//		printf("%c :", 'A' + player);
//		
//
//		scanf("%d", &input);
//		if (input > 3 || input < 1) {
//			printf("다시 입력하시오 \n");
//			continue;
//		}
//		sum += input;
//		if (sum >= 31) {
//	
//			break;
//		}
//		printf("=> %d\n", sum);
//		player = !player;
//		//if (player == 0) {
//		//	player = !player;
//		//}
//		//else {
//		//	player = !player;
//		//}
//
//	}
//	printf("플레이어 %c가 이겼습니다", 'A' + !player);
//	//if (player == 0) {
//	//	printf("플레이어 b가 이겼습니다");
//	//}
//	//else {
//	//	printf("플레이어 A가 이겼습니다");
//	//}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//		int temperature = 20;
//		do
//		{
//			printf("현재 온도: %d도\n", temperature);
//			temperature--;
//		} while (temperature > 28);
//		return 0;
//}
//#include<stdio.h>
//int main() {
//	int input;
//	enum{GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2. 이어하기 3. 옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}
#include<stdio.h>
int main() {
	int input;

}