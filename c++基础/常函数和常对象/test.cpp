#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->m_Age = age;
	}
	void showPerson() const //������  �൱�� const Person* const this ��ָ��ָ���ֵ�������޸�
	{
		//m_Age = 10;
		m_A = 100;
		//thisָ�뱾��  ��Person* const this
		//this = NULL;  this��ָ�򲻿����޸� 
		cout << "person age = " << this->m_Age << endl;
	}

	void func()
	{
		cout << "func����" << endl;
	}

	int m_Age = 0;

	mutable int m_A = 0;  //mutable �������л��߶��� ��Щ����������Ȼ��� ����ؼ��� mutable
};


void test01()
{
	Person p1(10);

	//������
	const Person p2(10);
	//p2.m_Age = 10;
	p2.m_A = 10;

	p2.showPerson();
	//p2.func(); //������ ֻ�ܵ��ó����� �����Ե�����ͨ��Ա����
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}

