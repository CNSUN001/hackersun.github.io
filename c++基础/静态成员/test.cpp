
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 静态成员变量 static

class Person
{

	//1. 静态static成员函数不同于非静态函数，
	//它只属于类本身，而不属于每一个对象实例。
	//静态函数随着类的加载而独立存在。与之相反的是非静态成员，
	//他们当且仅当实例化对象之后才存在。也就是说，静态成员函数产生在前，
	//非静态成员函数产生在后，不可能让静态函数去访问一个不存在的东西。

	//2. 在访问非静态变量的时候，
	//	用的是this指针；而static静态函数没有this指针，
	//	所以静态函数也确实没有办法访问非静态成员。
public:
	//1 静态成员变量：编译阶段就分配了内存
	//类内声明、类外初始化
	//静态成员变量  所有对象都共享同一份数据
	static int m_A;

private:
	static int m_B;//私有成员变量

	//2 静态成员函数
	//所有对象共享同一个func函数
public:
	static void func()
	{
		m_C = 100; //静态成员函数 不能能访问非静态成员变量
		m_A = 100;//静态成员函数 能访问静态成员变量
		cout << "func的调用" << endl;
	}

	int m_C;
};

int Person::m_A = 0;

int Person::m_B = 1;

void test01()
{
	//1 通过对象访问
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;
	cout << p1.m_A << endl;
	
	//2 通过类名访问
	cout << Person::m_A << endl;

	//静态成员变量 也是有访问权限的，私有权限类外访问不到
	//cout << Person::m_B << endl;

}

void test02()
{
	//通过对象
	Person p1;
	p1.func();
	//通过类名
	Person::func();
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}



