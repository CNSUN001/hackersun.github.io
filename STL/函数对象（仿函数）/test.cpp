
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
using namespace std;

//1.函数对象(仿函数)是一个类，不是一个函数。
//2.函数对象(仿函数)重载了“() ”操作符使得它可以像函数一样调用。


class MyPrint
{
public:
	void operator()(int num)
	{
		cout << num << endl;
		m_Count++;
	}

	int m_Count = 0;
};

void myPrint02(int num)
{
	cout << num << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint(100); //仿函数本质是一个类的对象
	// myPrint.operator()(100);

	myPrint02(100);
}

//函数对象 超出普通函数的概念，可以拥有自己状态
void test02()
{
	MyPrint myPrint;
	myPrint(100);
	myPrint(100);
	myPrint(100);
	myPrint(100);

	cout << "调用次数：" << myPrint.m_Count << endl;
}

//函数对象可以作为函数参数
void doPrint(MyPrint myPrint,int num)
{	
	myPrint(num);
}


void test03()
{
	doPrint(MyPrint(), 1000);
}

int main()
{
	//test01();
	//test02();
	//test03();


	map<int, int> m;
	m.insert(make_pair(1, 2));
	m.insert(make_pair(2, 3));
	m.insert(make_pair(3, 4));

	cout << m.at(2) << endl;

	system("pause");
	return EXIT_SUCCESS;
}


