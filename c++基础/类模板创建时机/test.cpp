#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//类模板中成员函数的创建时机

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show调用" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show调用" << endl;
	}
};

//类模板的成员函数，并不是一开始创建的，而是在运行阶段确定T类型后才创建的
template <class T>
class Myclass
{
public:
	void Func1()
	{
		obj.showPerson1();
	}
	void Func2()
	{
		obj.showPerson2();
	}

	T obj ;
};

void test01()
{
	Myclass <Person2> p1; 
	//p1.Func1();
	p1.Func2();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}


