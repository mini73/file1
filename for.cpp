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
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int Pro_study = 0;
//	int Pub_study = 0;
//	int Eng_study = 0;
//	int game = 0;
//
//	do {
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭐 할까요?\n");
//		printf("1.코딩공부한다.\n");
//		printf("2.공무원공부를 한다.\n");
//		printf("3.영어공부를 한다.\n");
//		printf("4.게임을 한다.>> \n");
//		scanf("%d", &command);
//		if (command >=5||command <=0) break;
//
//		if (command == 1) {
//			int(randInt) = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//		}
//		if (command == 2){
//			int(randInt) = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//		}
//		if (command == 3) {
//			int(randInt) = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//		}
//		if (command == 4) {
//			int(randInt) = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5: printf("학원에서 ");
//			}
//		}
//		
//		switch (command) {
//		case 1:
//			printf("코딩 공부합니다\n");
//			Pro_study++;
//			break;
//		case 2:printf("공무원 공부합니다\n");
//			Pub_study++;
//			break;
//		case 3:printf("영어 공부합니다\n");
//			Eng_study++;
//			break;
//		case 4:printf("게임을 한다\n");
//			game++;
//			break;
//		}
//	} while (1);
//	if (day <= 7) {
//		printf("그대로 입니다...\n");
//	}
//	else if (command == 1){
//		int level = Pro_study / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("취업준비생이 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd개발자가 되었습니다\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (command == 2) {
//		int level = Pub_study / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf(" 되었습니다!\n");
//			break;
//		case 1:
//			printf("취업준비생이 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf(" 개발자가 되었습니다\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (command == 3) {
//		int level = Eng_study / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("영린이가 되었습니다!\n");
//			break;
//		case 1:
//			printf("영어책을 읽게 되었습니다!\n");
//			break;
//		case 2:
//			printf("자막없이 미국영화를 보게 되었습니다!\n");
//			break;
//		case 3:
//			printf("외국인과 원활하게 소통하게 되었습니다\n");
//			break;
//		default:
//			printf("영어강사가 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (command == 4) {
//		int level = game / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("뉴비가 되었습니다\n");
//			break;
//		case 1:
//			printf("게임을 조금 이해하게 되었습니다!\n");
//			break;
//		case 2:
//			printf("돈이 부족해 알바를 하게 되었습니다!\n");
//			break;
//		case 3:
//			printf("게임실력이 늘어 프로를 준비하게 되었습니다\n");
//			break;
//		default:
//			printf("프로게이머가 되었습니다!\n");
//			break;
//
//		}
//	}
//	return 0;
//}
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

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int coding = 0;
//	int pingpong = 0;
//	int reading = 0;
//	int flower = 0;
//	int randInt;
//	do {
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭐 할까요?\n");
//		printf("1.코딩공부한다.\n");
//		printf("2.탁구를 한다.\n");
//		printf("3.책을 읽는다.\n");
//		printf("4.꽃을 키운다.\n");
//		printf("그 외는 종료.>> \n");
//		scanf("%d", &command);
//		if (command > 4 || command < 1) break;
//
//		switch (command) {
//		case 1:
//			randInt = rand() % 5 + 1;
//			coding++;
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 코딩 공부합니다");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 코딩 공부합니다");
//				break;
//			case 5: printf("학원에서 코딩 공부합니다");
//			}
//			break;
//		case 2:
//			randInt = rand() % 4 + 1;
//			pingpong++;
//			switch (randInt) {
//			case 1:
//				printf("힘이 넘쳐요.\n");
//			case 3:
//				printf("체육관에서 탁구를 칩니다");
//				break;
//			case 2:
//				printf("피곤해요.\n");
//			case 4:
//				printf("집에있는 탁구대에서 탁구를 칩니다");
//				break;
//			}
//			break;
//		case 3:
//			randInt = rand() % 4 + 1;
//			reading++;
//			switch (randInt) {
//			case 1:
//				printf("날이 좋아요.\n");
//			case 3:
//				printf("야외에서 책을 읽어요");
//				break;
//			case 2:
//				printf("날씨가 안좋아요\n");
//			case 4:
//				printf("집에서 책을 읽어요");
//				break;
//			}
//			break;
//		case 4:
//			randInt = rand() % 4 + 1;
//			flower++;
//			switch (randInt) {
//			case 1:
//				printf("비가와요.\n");
//			case 3:
//				printf("꽃에 물을 주지 않아요");
//				break;
//			case 2:
//				printf("비가 안와요\n");
//			case 4:
//				printf("꽃에 물을 줘요");
//				break;
//			}
//			break;
//		}
//
//	} while (1);
//	int maxCount = coding;
//	int final = 1;
//
//	if (pingpong > maxCount) {
//		maxCount = pingpong;
//		final = 2;
//	}
//
//	if (reading > maxCount) {
//		maxCount = reading;
//		final = 3;
//	}
//
//	if (flower > maxCount) {
//		maxCount = flower;
//		final = 4;
//	}
//	if (day <= 3) {
//		printf("그대로 입니다...\n");
//	}
//	else if (final == 1) {
//		int level = coding / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("취업준비생이 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd개발자가 되었습니다\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (final == 2) {
//		int level = pingpong / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf(" 공을 받을 수 있습니다!\n");
//			break;
//		case 1:
//			printf("프론트엔드가 가능합니다!\n");
//			break;
//		case 2:
//			printf("백엔드가 가능합니다!\n");
//			break;
//		case 3:
//			printf("스매쉬가 가능합니다\n");
//			break;
//		default:
//			printf("조기탁구부원이 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (final == 3) {
//		int level = reading / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("지식이 조금 늘었습니다!\n");
//			break;
//		case 1:
//			printf("속독이 가능해졌습니다!\n");
//			break;
//		case 2:
//			printf("책에 대한 토론이 가능해졌습니다!\n");
//			break;
//		case 3:
//			printf("문해력이 증가했습니다\n");
//			break;
//		default:
//			printf("지식인이 되었습니다!\n");
//			break;
//
//		}
//	}
//	else if (final == 4) {
//		int level = flower / 8;
//
//		switch (level)
//		{
//		case 0:
//			printf("줄기가 자랍니다\n");
//			break;
//		case 1:
//			printf("입사귀가 나왔습니다!\n");
//			break;
//		case 2:
//			printf("꽃봉오리가 생겼습니다!\n");
//			break;
//		case 3:
//			printf("꽃이 폈습니다\n");
//			break;
//		default:
//			printf("꽃에 대해 마스터하였습니다!\n");
//			break;
//
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int round;
//	for (round = 0; round <= 10; round++) {
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count;
//	for (count = 101; count < 111; count++) {
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 :");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int num;
//	for (num = 10; num <= 99; num++) {
//		printf("%d ", num);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int num;
//	int sum = 1;
//
//	for (num = 3; num <= 8; num++) {
//		sum *= num;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int num;
//
//	for (num = 1; num < 51; num++) {
//		int sec = num % 10;
//		int first = num / 10;
//
//		 if ((first && first % 3 == 0) || sec && sec % 3 == 0) {                                      
//			printf("%d ", num);
//		}
//	
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int number;
//	printf("100이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++) {
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int num;
//	printf("100이하 7의 배수를 출력합니다\n");
//
//	for (num = 7; num <= 100; num += 7) {
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case's':
//			printf("start game\n");
//			break;
//		case'e':
//			printf("exit game\n");
//			return 0;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수를 출력 :");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor++) {
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number, exitFor;
//	printf("1부터 10까지 곱한 수 출력: ");
//	for (number = 10, exitFor = number - 1; exitFor > 0; number *= exitFor, exitFor--) {
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int num;
//	printf("200 이하 11의 배수를 출력합니다\n");
//
//	for (num = 11; num <= 200; num += 11) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double sqLine;
//	for (sqLine = 0.1; sqLine * 4 < 21; sqLine+=0.1) {
//		printf("%.1lf\n", sqLine);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;//학번 초기화
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번 \n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int myClass;
//	int student;
//
//	for (myClass = 1; myClass <= 2; myClass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myClass = 1; myClass <= 8; myClass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int sum1, sum2;
//	for (sum1 = 2; sum1 <= 9; sum1++) {
//		for (sum2 = 1; sum2 <= 9; sum2++) {
//			printf("%d * %d = %d\n",sum1,sum2,sum1*sum2);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int sum1, sum2;
//	for (sum1 = 2; sum1 <= 9;sum1++) {
//		if (sum1 == 3) {
//			++sum1;         //continue도 가능함
//		}
//		for (sum2 = 1; sum2 <= 9; sum2++) {
//			printf("%d * %d = %d\n", sum1, sum2, sum1 * sum2);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int Four_sides, Six_sides;
//	for (Four_sides = 1; Four_sides <= 4; Four_sides++) {
//		for (Six_sides = 1; Six_sides <= 6; Six_sides++) {
//			printf("4면 - %d, 6면 - %d\n", Four_sides, Six_sides);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d번째 내부 반복문 진입 \n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int outer;
//	int inter;
//	for (outer = 0; outer <5; outer++) {
//		for(inter=0;inter<outer+1;inter++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int outer;
//	int	inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int outer;
//	int	inter;
//	int line;
//
//	printf("수를 입력하시오: ");
//	scanf("%d", &line);
//
//	int ans = line;
//
//	for (outer = 1; outer <= line; outer += 1) {
//		for (inter = 1; inter <= ans; inter++) {
//			printf("*");
//		}
//		printf("\n");
//		ans--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int outer;
//	int	inter;
//	int line;
//
//	printf("수를 입력하시오: ");
//	scanf("%d", &line);
//
//	int ans = line;
//
//	for (outer = 1; outer <= line; outer += 1) {
//		for (inter = 1; inter <= ans; inter++) {
//			printf("*");
//		}
//		printf("\n");
//		ans--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	//int outer;
//	//int	inter;
//	//int line;
//
//	//printf("수를 입력하시오: ");
//	//scanf("%d", &line);
//
//	//int ans = line;
//
//	//for (outer = 0; outer < line; outer++) {
//	//	for (inter = 0; inter < ans; inter++) {
//	//		printf(" ");
//	//	}
//	//	ans--;
//	//	for (inter = 0; inter < 2*outer+1; inter++) {
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//	int LINE = 3;
//	scanf("%d", &LINE);
//	int star_cnt = 1;
//
//	for (int space_cnt = LINE-1; space_cnt >= 0; space_cnt--) {
//		for (int inter = 0; inter < space_cnt; inter++) {
//			printf(" ");
//		}
//		for (int inter = 0; inter < star_cnt; inter++) {
//			printf("*");
//		}
//		printf("\n");
//		star_cnt += 2;
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int next = 1;
//	int ans;
//	
//	scanf("%d", &ans);
//	int count = ans;
//
//	for(; count>=1; count--) {
//		for (int inter = 0; inter < count; inter++) {
//			printf(" ");
//		}
//		for (int inter = 0; inter < next; inter++) {
//			printf("*");
//		}
//		printf("\n");
//		next += 2;
//	}
//	for (; count<=4;){
//		count++;
//		next -= 2;
//		for (int inter = 0; inter < count; inter++) {
//			printf(" ");
//		}
//		for (int inter = 0; inter < next; inter++) {
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	
//	//for (int inter = 0; inter < count; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < next; inter++) {
//	//	printf("*");
//	//}
//	//
//	//printf("\n");
//	//count--;
//	//next += 2;
//
//	//for (int inter = 0; inter < count; inter++) {
//	//	printf(" ");    
//	//}
//	//for (int inter = 0; inter < next; inter++) {
//	//	printf("*");
//	//}
//	//printf("\n");
//
//	//for (int inter = 0; inter < count; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < next; inter++) {
//	//	printf("*");
//	//}
//	//printf("\n");
//	//count++;
//	//next -= 2;
//
//	//for (int inter = 0; inter < count; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < next; inter++) {
//	//	printf("*");
//	//}
//	//printf("\n");
//	//count++;
//	//next -= 2;
//
//	//for (int inter = 0; inter < count; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < next; inter++) {
//	//	printf("*");
//	//}
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	
//	int line =1;
//	int ans;
//	scanf("%d", &ans);
//	
//	for (int num = ans;num>=1; num--) {
//		for (int inter = 1; inter < num; inter++) {
//			printf(" ");
//		}
//		for (int inter = 0; inter < line; inter++) {
//			printf("%d", line);
//		}
//		printf("\n");
//		line++;
//	}
//	//for (int inter = 1; inter < num; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < line; inter++) {
//	//	printf("%d", line);
//	//}
//	//printf("\n");
//	//num--;
//	//line++;
//
//	//for (int inter = 1; inter < num; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < line; inter++) {
//	//	printf("%d", line);
//	//}
//	//printf("\n");
//	//num--;
//	//line++;
//
//	//for (int inter = 1; inter < num; inter++) {
//	//	printf(" ");
//	//}
//	//for (int inter = 0; inter < line; inter++) {
//	//	printf("%d", line);
//	//}
//	//printf("\n");
//	//num--;
//	//line++;
//
//	return 0;
//}

#include<stdio.h>
int main() {

	int input;

	int player = 0;
	printf("베스킨 라빈스 31!\n");
	printf("게임을 시작합니다! 31을 말하는 사람이 지게됩니다\n");
	printf("뒤의 숫자를 입력해주세요\n");
	
	for (;;) {
		for (int i = 0; i < 3; i++) {

			printf("%c :", 'A' + player);
			scanf("%d", &input);
			if (input == 31) {
				printf("유저%c의 승리입니다",'A' + !player);
			}
		}
		printf("턴이 넘어갑니다\n");
		player = !player;


	}
	return 0;
}