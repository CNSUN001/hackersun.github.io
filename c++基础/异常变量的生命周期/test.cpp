#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyException
{
public:
	MyException()
	{
		cout << "MyExceptionĬ�Ϲ��캯������" << endl;
	}

	MyException(const MyException& e)
	{
		cout << "MyException�������캯������" << endl;
	}

	~MyException()
	{
		cout << "MyException������������" << endl;
	}
};

void doWork()
{
	throw  MyException();
	//�׳����� throw MyException();  catch (MyException e) ���ÿ������캯�� Ч�ʵ�
	//�׳����� throw MyException();  catch (MyException &e)  ֻ����Ĭ�Ϲ��캯�� Ч�ʸ� �Ƽ�
	//�׳����� throw &MyException(); catch (MyException *e) �������ǰ�ͷŵ��������ڷǷ�����
	//�׳����� new MyException();   catch (MyException *e) ֻ����Ĭ�Ϲ��캯�� �Լ�Ҫ�����ͷ�
}

void test01()
{
	try
	{
		doWork();
	}

	catch (MyException &e) //��ֵ����ÿ�������Ч�ʲ���
	{
		cout << "�Զ����쳣����" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

