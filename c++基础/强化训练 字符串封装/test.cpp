#define _CRT_SECURE_NO_WARNINGS 1

#include "myString.h"
#include <iostream>
#include <string>
using namespace std;

void test01()
{
	MyString str = "abc";
	MyString str2 = str;

	cout << str << endl;

	cout << "请重新给str赋值：" << endl;
	
	
	cin >> str;

	cout << "str新的值为" << str << endl;

	cin >> str2;
	cout << "str2新的值为" << str2 << endl;



}

void test02()
{
	MyString str = "abcd";

	MyString str2 = " ";

	str2 = str;
	cout << "str2新的值为" << str2 << endl;
	str2 = "ddd";
	cout << "str2新的值为" << str2 << endl;

	str2[0] = 'z';
	cout << "str2[0]"<<str2 << endl;

	MyString str3 = "abc";
	MyString str4 = "def";
	MyString str5 = str3 + str4;
	MyString str6 = str5 + "ghe";

	cout << "str5=" << str5 << endl;
	cout << "str5=" << str6 << endl;

	if (str5 == str6)
	{
		cout << "str5 == str6" << endl;
	}
	else
	{
		cout << "str5 != str6" << endl;
	}

	if (str6 == "abcdefghe")
	{
		cout << "str6 == abcdefghe" << endl;
	}
	else
	{
		cout << "str6 != abcdefghe" << endl;
	}
}
  
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

