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
		m_Age = 0;
		cout << "age =" << this->m_Age << endl;
	}

	int m_Age;
};



int main()
{
	system("pause");
	return EXIT_SUCCESS;
}

