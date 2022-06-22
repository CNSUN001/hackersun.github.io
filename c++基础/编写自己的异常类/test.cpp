#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;




//��չ��׼�쳣��

class MyOutOfRangExceptrion :public exception
{
public:

	//const char* str������ʽ����ת��Ϊstring ��֮������
	MyOutOfRangExceptrion(const char* str):m_errorInfo(str)
	{}

	MyOutOfRangExceptrion(string str):m_errorInfo(str)
	{}

	virtual const char * what() const //����һ��const ����������������������������������ݳ�Ա��׼ȷ��˵�ǷǾ�̬���ݳ�Ա�����κθı�
	{
		//��ν�stringת�� char* 
		return this->m_errorInfo.c_str();
	}

	string m_errorInfo;
};

class Person
{
public:
	Person(int age) :m_Age(age)
	{
		if (age < 0 || age > 150)
		{
			throw MyOutOfRangExceptrion(string("���������0-150"));
		}
	}
	int m_Age;
};

void test01()
{
	try
	{
		Person p(1000);
	}
	catch ( exception & e)
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
