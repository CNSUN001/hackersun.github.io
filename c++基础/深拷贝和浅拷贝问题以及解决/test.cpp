#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�����ǳ���������Լ�����취

class Person
{
public:
	Person(char *name,int age)
	{
		m_Name = (char*)malloc(strlen(name) + 1);
		if (m_Name == NULL)
		{
			return;
		}
		strcpy(m_Name, name);
		m_Age = age;
	}

	Person(const Person& p)
	{
		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
		if (m_Name == NULL)
		{
			return;
		}
		strcpy(m_Name, p.m_Name);
		m_Age = p.m_Age;
	}

	~Person()  //����ñ�����Ĭ��ǳ�������ᵼ�¶�ͬһָ�� ��������free
	{
		if (m_Name != NULL)
		{
			cout << "������������" << endl;
			free(m_Name);
			m_Name = NULL;
		}
	}
	char* m_Name;
	int m_Age = 0;
};


void test01()
{
	Person p("��������", 18);
	cout << "������ " << p.m_Name << "  ���䣺" << p.m_Age << endl;

	Person p2(p);
	cout << "������ " << p.m_Name << "  ���䣺" << p.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

