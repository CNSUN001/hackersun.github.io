//类模板碰到友元函数

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class Person
{
	//1 友元函数 类内实现
	friend void printPerson(Person <T1, T2>& p) //是全局函数
	{
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	//2 友元函数 类外实现
	template <class T1, class T2>
	friend void printPerson2(Person <T1, T2>& p);

public:
	Person(T1 name, T2 age):m_Name(name),m_Age(age)
	{}
private:
	T1 m_Name;
	T2 m_Age;
};

template <class T1, class T2>
void printPerson2(Person <T1, T2>& p)
{
	cout << "（类外实现）姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
}

void test01()
{
	Person <string, int>p("Tom", 100);
	printPerson(p);
	printPerson2(p);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

