#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//��ָ����ʳ�Ա����

class Person
{
public:
	void showClass()
	{
		cout << "class name is Person" << endl;
	}

	void showAge()
	{
		if (this == NULL) //��ֹ����ָ��
		{
			return;
		}
		m_Age = 0;
		cout << "age =" << this->m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;

	p->showClass();

	p->showAge();//�����Ա�����õ���this ����ôthisҪ�жϣ���ֹdown��
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

