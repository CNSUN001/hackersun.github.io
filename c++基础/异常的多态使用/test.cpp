
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�쳣��̬��ʹ��

//�쳣�Ļ���
class BaseException
{
public:
	virtual void printError() = 0;
};

//��ָ���쳣
class  NULLPointerException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "��ָ���쳣" << endl;
	}
};

//Խ���쳣
class OutOfRangeException :public BaseException
{
	public:
	virtual void printError()
	{
		cout << "Խ���쳣" << endl;
	}
};

void doWork()
{
	//throw NULLPointerException();  //��������
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

//ϵͳ��׼�쳣

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
			throw out_of_range("���������0-150");
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
	catch (exception& e) //���ö�̬����
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


