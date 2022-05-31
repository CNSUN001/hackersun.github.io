#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//关系运算符重载

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(Person& p)
	{
		//if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) //string类型不能用strcmp函数 类型不一致
		//	return true;
		//else
		//	return false;

		return  this->m_Name == p.m_Name && this->m_Age == p.m_Age;
 	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);


	if (p1 == p2)
	{
		cout << "p1 == p1" << endl;
	}
	else
	{
		cout << "p1 != p1" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

