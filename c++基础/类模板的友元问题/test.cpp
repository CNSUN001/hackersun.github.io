//��ģ��������Ԫ����

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template <class T1,class T2>
class Person
{
	//1 ��Ԫ���� ����ʵ��
	friend void printPerson(Person <T1, T2>& p) //��ȫ�ֺ���
	{
		cout << "������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//2 ��Ԫ���� ����ʵ��
	template <class T1, class T2>
	friend void printPerson2(Person <T1, T2>& p);

public:
	Person(T1 name, T2 age):m_Name(name),m_Age(age)
	{}
private:
	T1 m_Name;
	T2 m_Age;
};

template <class T1, class T2>
void printPerson2(Person <T1, T2>& p)
{
	cout << "������ʵ�֣������� " << p.m_Name << " ���䣺" << p.m_Age << endl;
}

void test01()
{
	Person <string, int>p("Tom", 100);
	printPerson(p);
	printPerson2(p);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

