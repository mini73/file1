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

//#include<iostream>
//
//using namespace std;
//
//int calcPrice(char name);
//int calcPrice(char name, int count);
//
//void main() {
//	int name;
//	int count;
//	int result;
//	cout << "어떤 음료를 선택하시겠습니까?" << endl;
//	cout << "1.아메리카노(1000원)\n2.라떼(2000원)\n3.에이드(1500원)\n" << endl;
//	cin >> name;
//	cout << "몇 개 고르시겠습니까?";
//	cin >> count;
//	result = calcPrice (name,count);
//	cout << result << "원 입니다" << endl;
//
//}
//
//int calcPrice(char name)
//{
//	switch (name)
//	{
//	case 1: return 1000; break;
//	case 2: return 2000; break;
//	case 3: return 1500; break;
//	}
//	return 0;
//}
//
//int calcPrice(char name, int count) {
//
//	int price = calcPrice(name);
//	return price * count;
//}

//#include<iostream>
//using namespace std;
//
//void swap(int *change)
//{
//		int box = change[0];
//		change[0] = change[1];
//		change[1] = box;
//	
//}
//
//void main() {
//	int num[] = { 1,2 };
//	swap(num);
//	for (int i = 0; i < 2; i++) {
//		cout << num[i] << endl;
//	}
//	
//}

//#include<iostream>
//using namespace std;
//
//int addAll(int sum[][3]) {
//	int ans = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			ans += sum[i][j];
//		}
//	}
//	return ans;
//}
//
//void main() {
//
//	int sum[3][3] = { };
//	for (int i=0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> sum[i][j];
//		}
//	}
//	int allSum = addAll(sum);
//	cout << allSum << endl;
//}

//#include<iostream>
//using namespace std; 
//void Row(int sum[][3], int r) {
//	int rows[3] = {};
//	for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				rows[i] += sum[i][j];
//			}
//	}
//	
//	//for (int i = 1;;) {
//	//	for (int j = 0; j < 3; j++) {
//	//		row2 += sum[i][j];
//	//	}
//	//}
//	//for (int i = 2;;) {
//	//	for (int j = 0; j < 3; j++) {
//	//		row3 += sum[i][j];
//	//	}
//	//}
//	cout << "행의 합계: ";
//	for (int i = 0; i < 3; i++) {
//		cout << rows[i] << " ";
//	}
//	cout << endl;
//}
//void column(int sum[][3], int r) {
//	int cols[3] = {};
//
//	for (int j = 0;j<3;j++) {
//		for (int i = 0; i < 3; i++) {
//			cols[j] += sum[i][j];
//		}
//	}
//	//for (int j = 1;;) {
//	//	for (int i = 0; j < 3; j++) {
//	//		col2 += sum[i][j];
//	//	}
//	//}
//	//for (int j = 2;;) {
//	//	for (int i = 0; j < 3; j++) {
//	//		col3 += sum[i][j];
//	//	}
//	//}
//	cout << "행의 합계: ";
//	for (int i = 0; i < 3; i++) {
//		cout << cols[i] ;
//	}
//	cout << endl;
//}
//
//void main() {
//	//int rowSum;
//	//int columnSum;
//
//	int sum[3][3] = { };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> sum[i][j];
//		}
//	}
//	Row(sum,3);
//	column(sum,3);
//
//	//cout << rowSum << endl;
//	//cout << columnSum << endl;
//}

//#include<stdio.h>
//
//void func1()
//{
//	printf("void 형 함수는 돌려줄수 없음.\n");
//}
//
//int func2()
//{
//	return 100;
//}
//
//int main()
//{
//	int a;
//
//	func1();
//
//	a = func2();
//	printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
//}
//
//#include<stdio.h>
//void func1(int a)
//{
//	a = a + 1;
//	printf("전달받은 a==>%d\n", a);
//
//}
//void main()
//{
//	int a = 10;
//
//	func1(a);
//	printf("func1() 실행 후의 a==>%d\n", a);
//}
//
//#include<stdio.h>
//void func1(int* a)
//{
//	*a = *a + 1;
//	printf("전달받은 a==>%d\n", *a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(&a);
//	printf("func1() 실행 후의 a==>%d\n", a);
//}
//
//#include<stdio.h>
//
//void func1(char a, char b)
//{
//	int imsi;
//
//	imsi = a;
//	a = b;
//	b = imsi;
//}
//
//void func2(char* a, char* b)
//{
//	int imsi;
//
//	imsi = *a;
//	*a = *b;
//	*b = imsi;
//}
//
//void main()
//{
//	char x = 'A', y = 'Z';
//
//	printf("원래 값  :x=%c,y=%c\n", x, y);
//
//	func1(x, y);
//	printf("값을 전달한 후 :x=%c,y=%c\n", x, y);
//
//	func2(&x, &y);
//	printf("주소를 전달한 후:x=%c,y=%c\n", x, y);
//}

//#include<iostream>
//using namespace std;
//
//int minus1(int n)
//{
//	if (n <= 1) return -1;
//	return minus1(n - 1) - 1;
//
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << minus1(n);
//	return 0;
//}

//

//#include<stdio.h>
//
//int main() {
//	struct HUMAN
//	{
//		char name[10];
//		int height;
//		int weight;
//
//	};
//
//	struct HUMAN a;
//	printf("이름: ");
//	scanf("%s", a.name, 9);
//	printf("키: ");
//	scanf("%d", &a.height);
//	printf("몸무게: ");
//	scanf("%d", &a.weight);
//
//	printf("이름은 %s, 키는 %d, 몸무게는 %d 입니다. ", a.name, a.height, a.weight);
//}

//#include<iostream>
//#include<string.h>
//using namespace std;
//
//
//
//struct BOOK
//{
//	string name;
//};
//struct LIB
//{
//	BOOK books[100];
//
//};
//
//void search(LIB lib, int n);
//
//void main()
//{
//	LIB lib;
//	int n;
//	for (int i = 0; i < 100; i++) {
//		string name;
//		cout << i+1 << "번째 책 이름을 적으시오: (0을 눌러 끝내기)" << endl;
//		cin >> name;
//		if (name == "0") {
//			break;
//		}
//		lib.books[i].name = name;
//	};
//	cout << "원하는 순서의 책를 적으시오" << endl;
//	cin >> n;
//	
//	search(lib, n);
//	
//}
//
//void search(LIB lib, int n)
//{
//	cout << "선택하신 책은 " << lib.books[n - 1].name << "입니다" << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//short getDefaultData();
//void printData(short pt2);
//short add(short pt);
//
//void main() {
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = add(pt);
//	//pt += 5;
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	cout << "값 : " << pt2 << endl;
//}
// short add(short pt)
//{
//	pt += 5;
//	return pt;
//}

#include <iostream>
using namespace std;


struct POINT { short x, y; };

POINT getDefaultData();
void printData(POINT pt2.x, POINT pt2.y);
POINT add(POINT pt.x, POINT pt2.y);

void main() {
	POINT pt;
	pt = getDefaultData(pt.x, pt.y);
	printData(pt.x, pt.y);
	pt = add(pt.x, pt.y);
	//pt += 5;
	printData(pt.x, pt.y);
}

POINT getDefaultData()
{
	POINT pt1;
	cout << "2개 입력>>";
	cin >> pt1.x;
	cin >> pt1.y;
	return pt1;
}

void printData(POINT pt2.x, POINT pt2.y)
{
	cout << "값 : " << pt2.x <<"," << pt2.y << endl;
}
POINT add(POINT pt.x, POINT pt2.y)
{
	pt.x += 5;
	pt.y += 5;
	return pt;
}
