#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;




//扩展标准异常类

class MyOutOfRangExceptrion :public exception
{
public:

	//const char* str可以隐式类型转换为string 反之不可以
	MyOutOfRangExceptrion(const char* str):m_errorInfo(str)
	{}

	MyOutOfRangExceptrion(string str):m_errorInfo(str)
	{}

	virtual const char * what() const //最后的一个const 常函数表明这个函数不会对这个类对象的数据成员（准确地说是非静态数据成员）作任何改变
	{
		//如何将string转换 char* 
		return this->m_errorInfo.c_str();
	}

	string m_errorInfo;
};

class Person
{
public:
	Person(int age) :m_Age(age)
	{
		if (age < 0 || age > 150)
		{
			throw MyOutOfRangExceptrion(string("年龄必须在0-150"));
		}
	}
	int m_Age;
};

void test01()
{
	try
	{
		Person p(1000);
	}
	catch ( exception & e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
