#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template<class NAMETYPE,class AGETYPE=int > //��ģ�� ������Ĭ�ϲ���
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age) :m_Name(name), m_Age(age)
	{}
	void showPerson()
	{
		cout << "����:  " << this->m_Name << "  ����: " << this->m_Age << endl;
	}
	NAMETYPE m_Name;
	AGETYPE m_Age;
};

void test01()
{

	//1 �Զ������Ƶ�����ģ�岻����ʹ�ã��Զ������Ƶ�
	//Person p1("�����"��100); ����ģ�岻����ʹ���Զ������Ƶ���

	//2 ��ʾָ������
	Person<string > p1("�����", 100);
	p1.showPerson();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}



