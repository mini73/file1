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

#include<iostream>
using namespace std;

void main()
{
	int value = 50;
	int* ptr = &value;

	cout << "변경 전 value: " << value << endl;

	*ptr = 100;
	cout << "변경 후 value: " << value << endl;
}

#include <iostream>
