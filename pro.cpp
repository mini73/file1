//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string word;
//	cout << "문자열을 입력하시오: ";
//	cin >> word;
//
//	for (;;) {
//		char alpha;
//		cout << "검색할 문자(탈출은 0번을 입력)" << endl;
//		cout << ">> ";
//		cin >> alpha;
//		if (alpha == '0')
//		{
//			break;
//		}
//		size_t pos = word.find(alpha);
//		if (pos == string::npos) {
//			cout << "없는 문자입니다\n" << endl;
//		}
//		else {
//			printf("%d번 문자입니다\n", pos + 1);
//		}
//
//		//cout<<word.find(alpha)+1<<"번째 문자입니다"
//
//	}
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main() {
//	string s = "Hello, World!";
//	s.replace(7, 5, "c++");
//	cout << s << endl;
//	cout << s << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string s = "apple";
//	cout << s.compare("apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << t << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string s = "apple,banana,cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos = s.find(delim)) != string::npos) {
//		cout << s.substr(0, pos) << " ";
//		s.erase(0, pos + delim.length());
//	}
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main() {
//	string sam = "This is sample string";
//	sam.replace(8, 6, "useful");
//	cout << sam << endl;
//}

//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//
//
//void main() {
//	//int testnum;
//	//scanf("%x", &testnum);
//	//printf(">>%d\n", testnum);
//
//	string word;
//	int ans = 0;
//	cin >> word;
//
//	int len = word.length() -1 ;
//    int hex;
//	int square = len;
//	for (int i = 0; i <= len; i++) {
//		int num = 0;
//		int result = (int)pow(16, square); //= pow(16, 0);   //x^y
//
//		if (word[i] >= 'A' && word[i] <= 'F') {
//			num = word[i] - 'A' + 10;
//		}
//		else if (word[i] >= 'a' && word[i] <= 'f') {
//			num = word[i] - 'a' + 10;
//		}
//		else if (word[i] >= '0' && word[i] <= '9') {
//			num = word[i] - '0';
//		}
//		else {
//			cout << "잘못 입력" << endl;
//			break;
//		}
//		ans += num * result;
//		square--;
//	}
//	//hex = stoi(word);
//	cout << ans << endl;
//	//cout <<	word << endl;
//
//
//}

//#include<iostream>
//using namespace std;
//
//void main()
//{
//	int num = 100;
//	int* pNum = &num;
//
//	cout << "num = " << num << endl;
//	cout << "&num = " << &num << endl;
//    cout << "*pNum = " << *pNum << endl;              
//	cout << "pNum = " << pNum << endl;
//
//
//}

//#include<iostream>
//using namespace std;
//
//void main()
//{
//	int value = 50;
//	int* ptr = &value;
//
//	cout << "변경 전 value: " << value << endl;
//
//	*ptr = 100;
//	cout << "변경 후 value: " << value << endl;
//}

//#include <iostream>
//
//void main() {
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));	
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//	
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}

//#include<stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//
//}

//#include <stdio.h>
//
//void main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}

//#include<stdio.h>
//
//void main() {
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//	printf("두포인터 시간의 차는 %d입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", * (ptr1 + 1));
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//}

//#include<stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("%d의 위치 - %d의 위치", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d",arr+i);
//	}
//	int *ptr;
//	ptr = arr;
//
//	ptr += 2;
//
//	printf("%d", *ptr);
//}

//#include<stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt+++= 20;
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	char str[] = "도구는 사람을 증폭시킨다. AI도구도 도구다.";
//	char* ptr = &str[1];
//
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

#include<stdio.h>
void main()
{
	int numArr[5] = { 11,22,33,44,55 };
	int* numptrA = &numArr[2];
	void* ptr = numArr;
	//numptrA -= 1;
	printf("%d\n", *numptrA);
	//printf("%d\n", *(int*)ptr));
}