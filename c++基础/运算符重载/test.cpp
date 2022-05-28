#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//+运算符号重载

class Person
{
public:
	Person(int a,int b):m_A(a),m_B(b)
	{}

	//Person operator+(Person &p)//赋予+了一个新的含义
	//{
	//	Person temp(0, 0);
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;

	//	return temp;
	//}

	int m_A;
	int m_B;
};

//全局函数实现
Person operator+(Person &p1,Person &p2)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01()
{
	Person p1(10, 10);
	Person p2(20, 20);

	//Person p3 = p1.operator+(p2);

	Person p3 = p1 + p2;//全局如果跟成员函数同时存在 会出现二义性

	cout << p3.m_A << p3.m_B << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


// 左移<<运算符重载
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p1);
public:
	Person(int a,int b): m_A(a),m_B(b)
	{}

	
	ostream& operator<<(ostream& cout)   //成员函数无法实现  cout<< p1功能 
	{
		cout << "m_A = " <<this->m_A << " m_B = " << this->m_B;
		return cout;
	}

private:
	int m_A;
	int m_B;
};

//利用全局函数实现左移运算符重载

ostream& operator<<(ostream& cout, Person& p1)
{
	cout << "m_A = " << p1.m_A << " m_B = " << p1.m_B ;
	return cout;
}


void test01()
{
	Person p1(10, 10);
	//p1 << cout << endl;   //成员函数调用方式
	cout << p1<<endl;
	
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}



