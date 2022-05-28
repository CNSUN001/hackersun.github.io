#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_Age = age;
	}
	void showPerson() const //常函数  相当于 const Person* const this 让指针指向的值不可以修改
	{
		//m_Age = 10;
		m_A = 100;
		//this指针本质  ，Person* const this
		//this = NULL;  this的指向不可以修改 
		cout << "person age = " << this->m_Age << endl;
	}

	void func()
	{
		cout << "func调用" << endl;
	}

	int m_Age = 0;

	mutable int m_A = 0;  //mutable 常函数中或者对象 有些特殊属性依然想改 加入关键字 mutable
};


void test01()
{
	Person p1(10);

	//常对象
	const Person p2(10);
	//p2.m_Age = 10;
	p2.m_A = 10;

	p2.showPerson();
	//p2.func(); //常对象 只能调用常函数 不可以调用普通成员函数
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}

