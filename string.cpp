#include<iostream>
#include <string>
using namespace std;

void main()
{
	string s(10, '_');
	cout << s << endl;
	cout << s.length() << endl;
	cout << s.empty() << endl;

	s.clear();
	cout << s.empty() << endl;
}