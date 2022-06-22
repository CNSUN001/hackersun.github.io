//一句话：异常处理就是处理程序中的错误，所谓错误指在程序运行过程中发送的一些异常事件
//（如：除0溢出，数组下标越界，所要读取的文件不存在，空指针，内存不足等等）

//C++的异常必须要有函数进行处理，如果没有任何处理，程序会中断

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyException
{
public:
	void printError()
	{
		cout << "MyException异常" << endl;
	}
};

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

int myDivision(int a,int b)
{
	if (b == 0)
	{
		//return -1;
		//throw - 1;//抛出int类型的异常 如果不处理异常会自动调用terminate函数，让程序中断
		//throw 'a';//抛出char类型异常
		//MyException a;
		//throw a;

		//从try代码块开始，到throw抛出异常之前，所有栈上的数据都会被释放掉，这个过程叫栈解旋
		Person p1;
		Person p2;
		throw MyException();//抛出 MyException匿名对象
	}
	return a / b;
}

void test01()
{
	int a = 10;
	int b = 0;
	//C语言处理异常有缺陷，返回值不统一，返回值只有一个，无法区分是结果还是异常
//	int ret = myDivision(a, b);
//	if (ret == -1)
//	{
//		cout << "异常" << endl;
//	}

	//C++处理方法
	try
	{
		myDivision(a, b);
	}
	catch (int)
	{
		cout << "int类型异常捕获" << endl;
	}
	catch (MyException e)
	{
		e.printError(); //异常可以是自定义数据类型
	}
	catch(...)
	{
		throw;//向上继续抛
		cout << "其他类型异常捕获" << endl;
	}
}



int main()
{
	try
	{
		test01();
	}
	catch (int)
	{
		cout << "main函数intint类型异常捕获" << endl;
	}
	catch (...)
	{
		cout << "main函数其他类型异常捕获" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}

