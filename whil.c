#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int coding = 0;
	int pingpong = 0;
	int reading= 0;
	int flower = 0;
    int randInt;
	do {
		printf("\n%d번째 날!\n", ++day);
		printf("오늘은 뭐 할까요?\n");
		printf("1.코딩공부한다.\n");
		printf("2.탁구를 한다.\n");
		printf("3.책을 읽는다.\n");
		printf("4.꽃을 키운다.\n");
        printf("그 외는 종료.>> \n");
		scanf("%d", &command);
		if (command >4||command <1) break;

        switch(command){
        case 1:
            randInt = rand() % 5 + 1;
            coding++;
			switch (randInt) {
			case 1:
				printf("기분이 좋네요.\n");
			case 3:
				printf("도서관에서 코딩 공부합니다");
				break;
			case 2:
				printf("기분이 나빠요.\n");
			case 4:
				printf("카페에서 코딩 공부합니다");
				break;
			case 5: printf("학원에서 코딩 공부합니다");
        }
        break;
        case 2:
        randInt = rand() % 4 + 1;
        pingpong++;
			switch (randInt) {
			case 1:
				printf("힘이 넘쳐요.\n");
			case 3:
				printf("체육관에서 탁구를 칩니다");
				break;
			case 2:
				printf("피곤해요.\n");
			case 4:
				printf("집에있는 탁구대에서 탁구를 칩니다");
				break;
            }
            break;
        case 3:
        randInt = rand() % 4 + 1;
        reading++;
			switch (randInt) {
			case 1:
				printf("날이 좋아요.\n");
			case 3:
				printf("야외에서 책을 읽어요");
				break;
			case 2:
				printf("날씨가 안좋아요\n");
			case 4:
				printf("집에서 책을 읽어요");
				break;
            }
            break;
        case 4:
        randInt = rand() % 4 + 1;
        flower++;
			switch (randInt) {
			case 1:
				printf("비가와요.\n");
			case 3:
				printf("꽃에 물을 주지 않아요");
				break;
			case 2:
				printf("비가 안와요\n");
			case 4:
				printf("꽃에 물을 줘요");
				break;
            }
            break;
        }

	} while (1);
    int maxCount = coding;
int final = 1;

if (pingpong > maxCount) {
    maxCount = pingpong;
    final = 2;
}

if (reading > maxCount) {
    maxCount = reading;
    final = 3;
}

if (flower > maxCount) {
    maxCount = flower;
    final = 4;
}
	if (day <= 3) {
		printf("그대로 입니다...\n");
	}
	else if (final == 1){
		int level = coding / 8;

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
	else if (final == 2) {
		int level = pingpong / 8;

		switch (level)
		{
		case 0:
			printf(" 공을 받을 수 있습니다!\n");
			break;
		case 1:
			printf("프론트엔드가 가능합니다!\n");
			break;
		case 2:
			printf("백엔드가 가능합니다!\n");
			break;
		case 3:
			printf("스매쉬가 가능합니다\n");
			break;
		default:
			printf("조기탁구부원이 되었습니다!\n");
			break;

		}
	}
	else if (final == 3) {
		int level = reading / 8;

		switch (level)
		{
		case 0:
			printf("지식이 조금 늘었습니다!\n");
			break;
		case 1:
			printf("속독이 가능해졌습니다!\n");
			break;
		case 2:
			printf("책에 대한 토론이 가능해졌습니다!\n");
			break;
		case 3:
			printf("문해력이 증가했습니다\n");
			break;
		default:
			printf("지식인이 되었습니다!\n");
			break;

		}
	}
	else if (final == 4) {
		int level = flower / 8;

		switch (level)
		{
		case 0:
			printf("줄기가 자랍니다\n");
			break;
		case 1:
			printf("입사귀가 나왔습니다!\n");
			break;
		case 2:
			printf("꽃봉오리가 생겼습니다!\n");
			break;
		case 3:
			printf("꽃이 폈습니다\n");
			break;
		default:
			printf("꽃에 대해 마스터하였습니다!\n");
			break;

		}
	}
	return 0;
}