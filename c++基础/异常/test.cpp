//һ�仰���쳣������Ǵ�������еĴ�����ν����ָ�ڳ������й����з��͵�һЩ�쳣�¼�
//���磺��0����������±�Խ�磬��Ҫ��ȡ���ļ������ڣ���ָ�룬�ڴ治��ȵȣ�

//C++���쳣����Ҫ�к������д������û���κδ���������ж�

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyException
{
public:
	void printError()
	{
		cout << "MyException�쳣" << endl;
	}
};

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};

int myDivision(int a,int b)
{
	if (b == 0)
	{
		//return -1;
		//throw - 1;//�׳�int���͵��쳣 ����������쳣���Զ�����terminate�������ó����ж�
		//throw 'a';//�׳�char�����쳣
		//MyException a;
		//throw a;

		//��try����鿪ʼ����throw�׳��쳣֮ǰ������ջ�ϵ����ݶ��ᱻ�ͷŵ���������̽�ջ����
		Person p1;
		Person p2;
		throw MyException();//�׳� MyException��������
	}
	return a / b;
}

void test01()
{
	int a = 10;
	int b = 0;
	//C���Դ����쳣��ȱ�ݣ�����ֵ��ͳһ������ֵֻ��һ�����޷������ǽ�������쳣
//	int ret = myDivision(a, b);
//	if (ret == -1)
//	{
//		cout << "�쳣" << endl;
//	}

	//C++������
	try
	{
		myDivision(a, b);
	}
	catch (int)
	{
		cout << "int�����쳣����" << endl;
	}
	catch (MyException e)
	{
		e.printError(); //�쳣�������Զ�����������
	}
	catch(...)
	{
		throw;//���ϼ�����
		cout << "���������쳣����" << endl;
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
		cout << "main����intint�����쳣����" << endl;
	}
	catch (...)
	{
		cout << "main�������������쳣����" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}

