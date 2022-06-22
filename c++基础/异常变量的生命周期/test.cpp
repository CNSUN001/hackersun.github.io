#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyException
{
public:
	MyException()
	{
		cout << "MyException默认构造函数调用" << endl;
	}

	MyException(const MyException& e)
	{
		cout << "MyException拷贝构造函数调用" << endl;
	}

	~MyException()
	{
		cout << "MyException析构函数调用" << endl;
	}
};

void doWork()
{
	throw  MyException();
	//抛出的是 throw MyException();  catch (MyException e) 调用拷贝构造函数 效率低
	//抛出的是 throw MyException();  catch (MyException &e)  只调用默认构造函数 效率高 推荐
	//抛出的是 throw &MyException(); catch (MyException *e) 对象会提前释放掉，不能在非法操作
	//抛出的是 new MyException();   catch (MyException *e) 只调用默认构造函数 自己要管理释放
}

void test01()
{
	try
	{
		doWork();
	}

	catch (MyException &e) //传值会调用拷贝构造效率不高
	{
		cout << "自定义异常捕获" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

