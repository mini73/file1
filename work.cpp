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

//#include <iostream>
//using namespace std;
//
//
//struct POINT { short x, y; };
//
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT add(POINT pt);
//
//void main() {
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = add(pt);
//	//pt += 5;
//	printData(pt);
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	cout << "2개 입력>>";
//	cin >> pt1.x;
//	cin >> pt1.y;
//	return pt1;
//}
//
//void printData(POINT pt2)
//{
//	cout << "값 : " << pt2.x <<","<<pt2.y << endl;
//}
//
//POINT add(POINT pt)
//{
//	pt.x += 5;
//	pt.y += 5;
//	return pt;
//}

//#include<stdio.h>
//#include<string.h>
//struct MYDATA { int a; char b[25]; };
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct MYDATA data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'A';
//	printf("%d - %s\n", data.a, data.b);
//	printf("구조체의 크기: %d\n", sizeof(data));
//}

//#include<iostream>
//using namespace std;
//
//struct GM {
//	int no;
//	string name;
//	string part;
//	int salary;
//};
//
//struct COMPANY {
//	GM gms[5];
//	int gmCount;
//};
//
//COMPANY HireGM_once(COMPANY company)
////int no, string name, string part, int salary
//{
//	
//	company.gms[company.gmCount].no = company.gmCount + 1;
//	cout << "이름: ";
//	cin >> company.gms[company.gmCount].name;
//	cout << "부서: ";
//	cin >> company.gms[company.gmCount].part;
//	cout << "급여: ";
//	cin >> company.gms[company.gmCount].salary;
//	
//
//	//company.gms[company.gmCount].name
//	//company.gms[company.gmCount].part
//	//company.gms[company.gmCount].salary
//	
//	//cout << "사원번호: ";
//	//cin >> person.no;
//	//cout << "이름: ";
//	//cin >> person.name;
//	//cout <<"부서: ";
//	//cin >> person.part;
//	//cout << "급여: ";
//	//cin >> person.salary;
//	company.gmCount++;
//	return company;
//}
//
//
//void main()
//{
//	cout << "게임을 출시해보자!" << endl;
//	COMPANY gameCo;
//	gameCo.gmCount = 0;
//	cout << "먼저 GM부터 고용할까?" << endl;
//	while (1) 
//	{
//		gameCo = HireGM_once(gameCo);
//		cout << "더 고용할까?(y/n) : ";
//		string chice;
//		cin >> chice;
//		if (chice == "n") break;
//	}
//	cout << "GM %d명을 뽑았다!" << gameCo.gmCount << endl;
//	cout << "구조체의 크기" << endl;
//	cout << " GM:" << sizeof(GM) << endl;
//	cout << " COMPANY:" << sizeof(COMPANY) << endl;
//
//	
//}

//#include<iostream>
//
//using namespace std;
//
//struct POINT {
//	short x, y;
//};
//POINT makePoint(short x, short y) {
//	POINT p = { x,y };
//	return p;
//}
//void main()
//{
//	POINT p = makePoint(4, 9);
//	cout << p.x << " " << p.y << " " << sizeof(POINT) << endl;
//}

//#include <stdio.h>
//
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = {
//		{1500,3,"레몬칩"}, {1000,2,"달고나"}
//	};
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원(%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//}
/*
자판기
. 자판기의 종류를 명시
.자판기에서 구입가능한 제품번호, 제품의 이름, 남은 개수, 가격 제시
.사용자는 제품번호를 선택
.사용자가 투입할 금액 제시
.사용자는 금액 투입
.투입 받은 돈에서 구입한 제품들의 가격의 합만큼 빼고 남은 금액 계산
. 남은 금액은 사용자가 구입한 제품과 함께 보여준다
. "추가 주문 하겠습니까?[y/n]"라고 제시한다
. y는 처음 구입가능복록창을 보여준다
. n을 선택시 거스름돈 지불 후 작업을 종료한다
.
*/

//#include <stdio.h>
//
//#define CONTINUE 1
//
//struct PRODUCT {
//	int price;
//	int stock;
//	char name[20];
//};
//int Change(int price, int sum) {
//	int change = sum - price;
//	return change;
//};
////struct SNACKS {
////	PRODUCT Snacks[2] = {
////		{1500,3,"레몬칩"}, {1000,2,"달고나"}
////	};
////}
////struct DRINKS {
////	PRODUCT Drinks[2] = {
////		{1000,4,"사이다"}, {1000,5,"콜라"}
////	};
////}
//
//void main()
//{
//
//
//	const int N = 2;
//
//	PRODUCT snacks[N] = {
//		{1500,3,"레몬칩"}, {1000,2,"달고나"}
//	};
//	PRODUCT drinks[N] = {
//		{1000,4,"사이다"}, {1000,5,"콜라"}
//	};
//	int end;
//	int stay;
//	int sumSnacks = 0;
//	int sumDrinks = 0;
//	do {
//		int whatype;
//		printf("어떤 종류를 선택하시겠습니까?\n");
//		printf("1.과자 2.음료\n");
//		scanf("%d", &whatype);
//		int choice;
//		int money;
//		do {
//
//			if (whatype == 1)
//			{
//				for (;;) {
//					printf("**과자 자판기**\n");
//					for (int i = 0; i < N; i++)
//					{
//						printf("%d.[%6s] %4d원(%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//					}
//					scanf("%d", &choice);
//					if (choice > N || choice < 1) {
//						printf("잘못 입력하셨습니다.\n");
//						continue;
//					}
//					else if (snacks[choice - 1].stock == 0) {
//						printf("상품의 재고가 없어 구매하실수 없습니다.\n");
//						continue;
//					}
//					else {
//						break;
//					}
//				}
//				do {
//					if (snacks[choice - 1].price < sumSnacks) {
//						break;
//					}
//					printf("돈을 넣어주세요\n");
//					printf("=> ");
//					scanf("%d", &money);
//					sumSnacks += money;
//					if (snacks[choice - 1].price > sumSnacks) {
//						printf("%4d원이 부족합니다.\n", snacks[choice - 1].price - sumSnacks);
//					}
//				} while (snacks[choice - 1].price > sumSnacks);
//				printf("%s이/가 나왔습니다. %4d원 남았습니다\n", snacks[choice - 1].name, Change(snacks[choice - 1].price, sumSnacks));
//				sumSnacks = Change(snacks[choice - 1].price, sumSnacks);
//				snacks[choice - 1].stock--;
//			}
//
//			if (whatype == 2)
//			{
//				for (;;) {
//					printf("**음료 자판기**\n");
//					for (int i = 0; i < N; i++)
//					{
//
//						printf("%d.[%6s] %4d원(%d개 남음)\n", (i + 1), drinks[i].name, drinks[i].price, drinks[i].stock);
//					}
//					scanf("%d", &choice);
//					if (choice > N || choice < 1) {
//						printf("잘못 입력하셨습니다.\n");
//						continue;
//					}
//					else if (drinks[choice - 1].stock == 0) {
//						printf("상품의 재고가 없어 구매하실수 없습니다.\n");
//						continue;
//					}
//					else {
//						break;
//					}
//				}
//				do {
//					if (drinks[choice - 1].price < sumDrinks) {
//						break;
//					}
//					printf("돈을 넣어주세요\n");
//					printf("=> ");
//					scanf("%d", &money);
//					sumDrinks += money;
//					if (drinks[choice - 1].price > sumDrinks) {
//						printf("%4d원이 부족합니다.\n", drinks[choice - 1].price - sumDrinks);
//					}
//				} while (drinks[choice - 1].price > sumDrinks);
//
//				printf("%s이/가 나왔습니다.%4d원 남았습니다\n", drinks[choice - 1].name, Change(drinks[choice - 1].price, sumDrinks));
//				sumDrinks = Change(drinks[choice - 1].price, sumDrinks);
//				drinks[choice - 1].stock--;
//			}
//
//			if (whatype != 1 && whatype != 2) {
//				printf("없는 자판기입니다\n");
//				continue;
//			}
//
//			printf("추가 구매를 원하시요? 1.추가구매 0.멈춘다\n");
//			scanf("%d", &end);
//		} while (end == CONTINUE);
//		printf("거스름돈으로 %4d원 나왔습니다.\n", sumDrinks + sumSnacks);
//		sumDrinks = 0;
//		sumSnacks = 0;
//		printf("계속 이용하시겠습니까? 1.예 0.아니요\n");
//		scanf("%d", &stay);
//	} while (stay == CONTINUE);
//	
//	printf("이용해주셔서 감사합니다.");
//	//for (int i = 0; i < N; i++)
//	//{
//	//	printf("%d.[%6s] %4d원(%d개 남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	//}
//	//int choice;
//	//scanf("%d", &choice);
//	//printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct DATA {

	int N, * pNum;
};

void func_swap(int &pNum1, int &pNum2)
{
	int Swap = pNum1;
	pNum1 = pNum2;
	pNum2 = Swap;
}

void func_sort(DATA *pData)
{
	for (int i = 0; i < pData.N; ++i) {
		for (int j = i; j < pData.N; ++j) {
			if (pData.pNum[i] > pData.pNum[j])
				func_swap(pData.pNum[i], pData.pNum[j]);
		}
	}
}

void main()
{
	DATA data;
	scanf("%d", &data.N);
	pNum = (int*)malloc(sizeof(int) * data.N);
	srand((unsigned int)time(NULL));
	printf("<랜덤으로 입력박은 수 출력>\n");
	for (int i = 0; i < data.N; i++) {
		*(data.pNum + i) = (rand() % data.N) + i;
		printf("%2d", pNum[i]);
	}
	func_sort(data.pNum, data.N);
	printf("\n오름차순 정렬된 수 출력>\n");
	for (int i = 0; i < data.N; i++) {
		printf("%2d", data.pNum[i]);
		if (i % 10 == 9)printf("\n");
	}
	free(data.pNum);
}