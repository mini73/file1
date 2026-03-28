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

//#include<stdio.h>
//int main() {
//    int mon, count, a, b;
//    int sum = 0;
//
//    scanf("%d %d", &mon, &count);
//
//    for (int i = 1; i <= count; i++) {
//        scanf("%d %d", &a, &b);
//        sum += a * b;
//    }
//    if (sum == mon) {
//        printf("Yes");
//    }
//    else {
//        printf("No");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n / 4; i++) {
//		printf("long ");
//	}
//	printf(" int");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j < n - i; j++) {
//            printf(" ");
//        }
//        for (int y = 0; y < i; y++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(){
//	int select;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION, maker };
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2. 이어하기 3. 옵션 4. 만든사람들\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		case maker:
//			printf("만든 사람들\n");
//			break;
//		}
//		} while (select >= 1 && select <= 4);
//		printf("게임을 종료합니다.\n");
//		return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int Pro_study = 0;
	int Pub_study = 0;
	int Eng_study = 0;
	int game = 0;

	do {
		printf("\n%d번째 날!\n", ++day);
		printf("오늘은 뭐 할까요?\n");
		printf("1.코딩공부한다.\n");
		printf("2.공무원공부를 한다.\n");
		printf("3.영어공부를 한다.\n");
		printf("4.게임을 한다.>> \n");
		scanf("%d", &command);
		if (command >=5||command <=0) break;

		if (command == 1) {
			int(randInt) = rand() % 5 + 1;
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
		}
		if (command == 2){
			int(randInt) = rand() % 5 + 1;
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
		}
		if (command == 3) {
			int(randInt) = rand() % 5 + 1;
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
		}
		if (command == 4) {
			int(randInt) = rand() % 5 + 1;
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 ");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
		}
		
		switch (command) {
		case 1:
			printf("코딩 공부합니다\n");
			Pro_study++;
			break;
		case 2:printf("공무원 공부합니다\n");
			Pub_study++;
			break;
		case 3:printf("영어 공부합니다\n");
			Eng_study++;
			break;
		case 4:printf("게임을 한다\n");
			game++;
			break;
		}
	} while (1);
	if (day <= 7) {
		printf("그대로 입니다...\n");
	}
	else if (command == 1){
		int level = Pro_study / 8;

		switch (level)
		{
		case 0:
			printf("코딩새싹이 되었습니다!\n");
			break;
		case 1:
			printf("취업준비생이 되었습니다!\n");
			break;
		case 2:
			printf("FrontEnd 개발자가 되었습니다!\n");
			break;
		case 3:
			printf("BackEnd개발자가 되었습니다\n");
			break;
		default:
			printf("풀스택 개발자가 되었습니다!\n");
			break;

		}
	}
	else if (command == 2) {
		int level = Pub_study / 8;

		switch (level)
		{
		case 0:
			printf(" 되었습니다!\n");
			break;
		case 1:
			printf("취업준비생이 되었습니다!\n");
			break;
		case 2:
			printf("FrontEnd 개발자가 되었습니다!\n");
			break;
		case 3:
			printf(" 개발자가 되었습니다\n");
			break;
		default:
			printf("풀스택 개발자가 되었습니다!\n");
			break;

		}
	}
	else if (command == 3) {
		int level = Eng_study / 8;

		switch (level)
		{
		case 0:
			printf("영린이가 되었습니다!\n");
			break;
		case 1:
			printf("영어책을 읽게 되었습니다!\n");
			break;
		case 2:
			printf("자막없이 미국영화를 보게 되었습니다!\n");
			break;
		case 3:
			printf("외국인과 원활하게 소통하게 되었습니다\n");
			break;
		default:
			printf("영어강사가 되었습니다!\n");
			break;

		}
	}
	else if (command == 4) {
		int level = game / 8;

		switch (level)
		{
		case 0:
			printf("뉴비가 되었습니다\n");
			break;
		case 1:
			printf("게임을 조금 이해하게 되었습니다!\n");
			break;
		case 2:
			printf("돈이 부족해 알바를 하게 되었습니다!\n");
			break;
		case 3:
			printf("게임실력이 늘어 프로를 준비하게 되었습니다\n");
			break;
		default:
			printf("프로게이머가 되었습니다!\n");
			break;

		}
	}
	return 0;
}
//#include<stdio.h>
//int main() {
//	int input1, input2;
//	
//	scanf("%d",&input1);
//	scanf("%d",&input2);
//	int start = 0;
//	int end = 0;
//
//	if (input1 < input2) {
//		start = input1;
//		end = input2;
//	}
//	else {
//		start = input2;
//		end = input1;
//	}
//		while (start<=end) {
//			if (start % 2 != 0) {
//				printf("%d ", start);
//			}
//			start++;
//		}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char num;
//
//	printf("입력>> ");
//	scanf("%s", num);
//
//	int heart = num; 
//	int place = 0;
//	int plnum = num;
//	while (heart != 0) {
//		plnum %= 10;
//		heart /= 10;
//		place++;
//	}
//	
//}
//#include<stdio.h>
//int main() {
//    char word[100];
//    char num;
//    int count, place, heart;
//
//
//    printf("입력>>\n");
//    scanf("%s", word);
//
//    place = 0;
//    num = word[place];
//
//    while (num != '\0') {
//        heart = num - '0';
//        count = 0;
//        while (count < heart) {
//            printf("\u2661\u2661");
//            count++;
//        }
//        printf("\n");
//        place++;
//        num = word[place];
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int num;
//
//	printf("입력>>");
//	scanf("%d", &num);
//
//	int each = num;
//	int place = 1;
//	int ans = 0;
//	int divid= 1;
//	while (num >= 11) {
//		num /= 10;
//		divid *= 10;
//		place++;
//	}
//
//	while (each > 0) {
//
//		int heartcount = each / divid;   //heartcount에 each/divid를 넣음
//		each = each % divid;             //each에 each % divid값을 넣는다(다음 루프에 적용)
//		divid /= 10;                     //divid에 divid/10을 넣음(다음 루프에 적용)
//
//		//printf("%d\n", heartcount);
//
//		while (heartcount > 0) {
//			printf("\u2661\u2661");
//			heartcount--;
//		}
//		printf("\n");
//
//
//
//		////if (divid == core) {
//		////	ans = each / divid;
//
//		////}
//		////else if (divid < core) {
//		////	ans = each % divid /(divid/10);
//		////	divid /= 10;
//		////}
//		////
//		////printf("%d\n", each / divid);
//		////printf("%d\n", each % divid / (divid / 10));
//		////divid /= 10;
//		////printf("%d\n", each % divid / (divid / 10));
//	}
//
//
//	////while (place != 0) {
//	////	plnum = 10 10* place -1;
//	////	ans = heart / plnum;
//	////	while (ans != 0) {
//	////		printf("\u2661\u2661");
//	////		ans--;
//	////	}
//	////	printf("\n");
//	////	place--;
//	////	ans = 0;
//	////}
//	return 0;
//}