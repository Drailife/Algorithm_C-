#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cout << "cin读取字符串："<< endl;
	cin >> str;
	cout << "cin读取字符串："<< str << endl;
	cout << "getline读取字符串："<< endl;
	getline(cin,str);
	cout << "getline读取字符串："<< str << endl;



}
