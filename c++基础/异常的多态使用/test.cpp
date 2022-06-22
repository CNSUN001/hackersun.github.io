
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//异常多态的使用

//异常的基类
class BaseException
{
public:
	virtual void printError() = 0;
};

//空指针异常
class  NULLPointerException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针异常" << endl;
	}
};

//越界异常
class OutOfRangeException :public BaseException
{
	public:
	virtual void printError()
	{
		cout << "越界异常" << endl;
	}
};

void doWork()
{
	//throw NULLPointerException();  //匿名的类
	throw OutOfRangeException();
}

void test01()
{
	try
	{
		doWork();
	}
	catch (BaseException &e)
	{
		e.printError();
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//系统标准异常

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdexcept>
using namespace std;

class Person
{
public:
	Person(int age):m_Age(age)
	{
		if (age < 0 || age>150)
		{
			throw out_of_range("年龄必须在0-150");
		}
	
	}
	int m_Age;
};

void test01()
{
	try
	{
		Person p(151);
	}
	catch (exception& e) //利用多态接受
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


