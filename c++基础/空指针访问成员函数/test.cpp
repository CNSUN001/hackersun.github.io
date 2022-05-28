#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//空指针访问成员函数

class Person
{
public:
	void showClass()
	{
		cout << "class name is Person" << endl;
	}

	void showAge()
	{
		if (this == NULL) //防止传空指针
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

	p->showAge();//如果成员函数用到了this ，那么this要判断，防止down掉
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

