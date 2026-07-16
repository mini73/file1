//#define _CRT_SECURE_NO_WARNINGS

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

//#include<stdio.h>
//int main()
//{
//	int snail[5][5] = {};
//
//	//snail[0][0] = 1; 
//	//snail[0][1] = 2; 
//	//snail[0][2] = 3;
//	//snail[0][3] = 4; 
//	//snail[0][4] = 5;
//
//
//	//snail[1][4] = 6;
//	//snail[2][4] = 7;
//	//snail[3][4] = 8;
//	//snail[4][4] = 9;
//	int y = 0;
//	int x = -1;
//	int num = 1;
//	int i;
//	//int count = 5;
//	
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//
//
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//
//	for (i=0; i < 5; i++)
//	{
//		x++; snail[y][x] = num; num++;
//	}
//	for (i=0; i < 4; i++)
//	{
//		y++; snail[y][x] = num; num++;
//	}
//
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++) {
//			printf("%3d",snail[i][j]);
//		}
//		printf("\n");
//	}
//
//	
//}

//#include<stdio.h>
//int main()
//{
//	const int N = 10;
//	int snail[N][N] = {};
//
//	//snail[0][0] = 1; 
//	//snail[0][1] = 2; 
//	//snail[0][2] = 3;
//	//snail[0][3] = 4; 
//	//snail[0][4] = 5;
//
//
//	//snail[1][4] = 6;
//	//snail[2][4] = 7;
//	//snail[3][4] = 8;
//	//snail[4][4] = 9;
//	int y = 0;
//	int x = -1;
//	int num = 1;
//	int i;
//	//int count = 5;
//
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//x++; snail[y][x] = num; num++;
//	//
//
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//	//y++; snail[y][x] = num; num++;
//	int count = N;
//
//		int add = 1;
//	for (;;)
//	{
//		for (i = 0; i < count; i++)
//		{
//			x += add ; snail[y][x] = num; num++;
//		}
//		count--;
//		if (count == 0) {
//			break;
//		}
//		for (i = 0; i < count; i++)
//		{
//			y += add; snail[y][x] = num; num++;
//		}
//		add = -add;
//		//for (i = 0; i < count; i++)
//		//{
//		//	x += add ; snail[y][x] = num; num++;
//		//}
//		//count--;
//		//if (count == 0) {
//		//	break;
//		//}
//		//for (i = 0; i < count; i++)
//		//{
//		//	y += add ; snail[y][x] = num; num++;
//		//}
//
//	}
//	// for (i=0; i < 5; i++)
//	// {
//	// 	x++; snail[y][x] = num; num++;
//	// }
//	// for (i=0; i < 4; i++)
//	// {
//	// 	y++; snail[y][x] = num; num++;
//	// }
//	// for (i=0; i < 4; i++)
//	// {
//	//     x--; snail[y][x] = num; num++;
//	// }
//	// for (i=0; i < 3; i++)
//	// {
//	//     y--; snail[y][x] = num; num++;
//	// }
//
//	// for (i=0; i < 3; i++)
//	// {
//	//     x++; snail[y][x] = num; num++;
//	// }   
//	// for (i=0; i < 2; i++)
//	// {
//	//     y++; snail[y][x] = num; num++;
//	// }
//	// for (i=0; i < 2; i++)
//	// {
//	//     x--; snail[y][x] = num; num++;
//	// }
//	// for (i=0; i < 1; i++)
//	// {
//	//     y--; snail[y][x] = num; num++;
//	// } 
//
//	// for (i=0; i < 1; i++)
//	// {
//	//     x++; snail[y][x] = num; num++;
//	// }
//
//
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) {
//			printf("%3d", snail[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//#include<string>
//using namespace std;
//
//void phoneTime() {
//	string hour = "휴대폰을 ";
//	cout << hour;
//}
//void studyTime() {
//	string hour = "공부를 ";
//	cout << hour;
//}
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//	int time;
//	cout << "몇 시간을 사용한지 입력하시오: ";
//	cin >> time;
//	for (int i = 1; i <= time; i++) {
//		cout << i << "시간 차에는 ";
//		if (rand() % 2 == 0) {
//			phoneTime();
//		}
//		else {
//			studyTime();
//		}
//		cout << "했다" << endl;
//	}
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void menu(string coffee)
//{
//	cout << "주문하신 커피는 " << coffee << "입니다" << endl;
//}
//void main()
//{
//	string typeCoffee;
//	cout << "원하시는 커피를 입력하세요: ";
//	cin >> typeCoffee;
//
//	menu(typeCoffee);
//}

//#include<iostream>
//using namespace std;
//
//char getA() {
//	return 'A';
//}
//char getP() {
//	return 'P';
//}
//char getL() {
//	return 'L';
//}
//char getE() {
//	return 'E';
//}
//int main() {
//	cout << "사과를 영어로? " << endl;
//	cout << getA() << getP() << getP() << getL() << getE() << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int multi() {
//	int result = 1;
//	for (int i = 1; i <= 8; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//int main() {
//	int ans = multi();
//	cout << "1~8까지 곱의 답은 " << ans << "입니다" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int add_number(int num1, int num2);
//int minus_number(int num1, int num2);
//int multiply_number(int num1, int num2);
//double divide_number(int num1, int num2);
//
//void main() {
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = minus_number(a, b);
//	int data3 = multiply_number(a, b);
//	double data4 = divide_number(a, b);
//
//	cout << "덧셈 결과:" << data1 << endl;
//	cout << "뺄셈 결과:" << data2 << endl;
//	cout << "곱셈 결과:" << data3 << endl;
//	cout << "나눗셈 결과:" << data4 << endl;
//
//}
//
//int add_number(int num1, int num2) {
//	int add = num1 + num2;
//	return add;
//}
//int minus_number(int num1, int num2) {
//	int minus = num1 - num2;
//	return minus;
//}
//int multiply_number(int num1, int num2) {
//	int multiply = num1 * num2;
//	return multiply;
//}
//double divide_number(int num1, int num2) {
//	double divide = (double)num1 / num2;
//	return divide;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//string searching(string name);
//
//void main() {
//	string book;
//	cin >> book;
//	string bookName = searching(book);
//	cout << bookName << endl;
//}
//
//string searching(string name) {
//	
//	return "[검색 중]" + name;
//}

#include<iostream>

using namespace std;

int calcPrice(char name);
int calcPrice(char name, int count);

void main() {
	char name;
	int count;
	cout << "어떤 음료를 선택하시겠습니까?" << endl;
	cout << "A.아메리카노(1000원)\nB.라떼(2000원)\nC.에이드(1500원)\n" << endl;
	cin >> name;
	cout << "몇 개 고르시겠습니까?";
	cin >> count;

	cout << calcPrice << "원 입니다" << endl;
	


	

}

int calcPrice(char name)
{
	switch (name)
	{
	case'A': return 1000;
	case'B': return 2000;
	case'C': return 1500;
	}
	return 0;
}

int calcPrice(char name, int count) {

	int price = calcPrice(name);
	return price * count;
}