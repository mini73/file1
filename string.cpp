//#include<iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s(10, '_');
//	cout << s << endl;
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
//
//	s.clear();
//	cout << s.empty() << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string s = "hello, world!";
//	cout << s.substr(7, 5) << endl;
//
//	s.append(" :)");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//	printf("%s", s.c_str());
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main() {
//	string s = "Hello!";
//	cout << s[0] << endl;
//	cout << s.at(1) << endl;
//	cout << s.front() << endl;
//	cout <<s.back() << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main() {
//	string s = "example string";
//	char search = 'e';
//	int at = s.find(search, 0);
//	cout << "'e' is at" << at << " " << endl;
//	cout << s.rfind("e") << endl;
//	if (s.find("xyz") == string::npos)
//		cout << "없음" << endl;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void main()
//{
//	string input;
//	
//	
//	cin >> input;
//	//for (int end = 1;;) {
//	//	for (int i = 0;; i++) {
//	//		cin >> input[i];
//
//	//	}
//	//}
//
//	int l = input.length();
//	string output(l,' ');
//	int k = l - 1;
//	//const char* cs = s.c_str();
//	//input[0];
//
//	for (int i = 0; i < l; i++)
//	{
//		output[i] = input[k-i];
//	}
//	output[l] = '\0';
//	cout << output << endl;
//	//cout << input << endl;
//
//}

#include<iostream>
#include<string>
using namespace std;

void main()
{
	string word;
	cout << "문자열을 입력하시오: ";
	cin >> word;

	for (;;) {
		char alpha;
		cout << "검색할 문자(탈출은 0번을 입력)" << endl;
		cout << ">> ";
		cin >> alpha;
		if (alpha == '0')
		{
			break;
		}
		size_t pos = word.find(alpha);
		if (pos != string::npos) {
			cout << "없는 문자입니다" << endl;
		}
		else {
			printf("%d번쨰 문자입니다", pos + 1);
		}
		
		//cout<<word.find(alpha)+1<<"번째 문자입니다"

	}
}