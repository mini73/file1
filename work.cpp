#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void main()
//{
//
//	srand((unsigned int)time(NULL));
//	int count;
//	int input = 1;
//
//	printf("숫자를 입력하시오: ");
//	scanf("%d", &count);
//	//100-999
//	int repli = count;
//	int** data = new int* [count];
//	int randNum;//printf("개수만큼 숫자를 적으시오\n");
//	for (int i = 0; i < count; i++) {
//		//printf(">>");
//		//scanf("%d", &data[i]);
//		data[i] = new int[repli];
//		for (int j = 0; j < repli; j++) {
//			randNum = (rand() % 900) + 100;
//			data[i][j] = randNum;
//		}
//	}
//	for (int i = 0; i < count; i++) {
//		for (int j = 0; j < count; j++) {
//			if (data[i][j] % 2 == 0) {
//				printf("*");
//			}
//			else
//				printf(".");
//		}
//		printf("\n");
//	}
//
//}

#include<stdio.h>
int main()
{
	int snail[5][5] = {};

	//snail[0][0] = 1; 
	//snail[0][1] = 2; 
	//snail[0][2] = 3;
	//snail[0][3] = 4; 
	//snail[0][4] = 5;


	//snail[1][4] = 6;
	//snail[2][4] = 7;
	//snail[3][4] = 8;
	//snail[4][4] = 9;
	int y = 0;
	int x = -1;
	int num = 1;
	int i;
	//int count = 5;
	
	//x++; snail[y][x] = num; num++;
	//x++; snail[y][x] = num; num++;
	//x++; snail[y][x] = num; num++;
	//x++; snail[y][x] = num; num++;
	//x++; snail[y][x] = num; num++;
	//

	//y++; snail[y][x] = num; num++;
	//y++; snail[y][x] = num; num++;
	//y++; snail[y][x] = num; num++;
	//y++; snail[y][x] = num; num++;

	for (i=0; i < 5; i++)
	{
		x++; snail[y][x] = num; num++;
	}
	for (i=0; i < 4; i++)
	{
		y++; snail[y][x] = num; num++;
	}




	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%3d",snail[i][j]);
		}
		printf("\n");
	}

	
}