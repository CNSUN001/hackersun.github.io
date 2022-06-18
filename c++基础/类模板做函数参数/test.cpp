#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include<string>

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age): m_name(name), m_age(age)
	{}

	void showPerson()
	{
		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1 指定传入类型
void doWork(Person<string, int>&p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int>p("孙悟空",999);
	doWork(p);
}

//2 参数模板化
template<class T1,class T2>
void doWork2(Person<T1, T2>&p)
{
	cout << "T1的数据类型：" << typeid(T1).name() << endl;
	cout << "T2的数据类型：" << typeid(T2).name() << endl;

	p.showPerson();
}

void test02()
{
	Person<string, int> p("猪八戒", 998);
	doWork2(p);
}

//3 整个类模板化
template<class T>
void doWork3(T& p)
{
	cout << "T的数据类型：" << typeid(T).name() << endl;  //typeid().name()查看T数据类型
	p.showPerson();
}
void test03()
{
	Person<string, int> p("唐僧", 10000);
	doWork3(p);
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

