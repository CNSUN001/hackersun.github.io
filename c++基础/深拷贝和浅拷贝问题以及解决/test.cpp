#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//深拷贝和浅拷贝问题以及解决办法

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

	~Person()  //如果用编译器默认浅拷贝，会导致对同一指针 连续两次free
	{
		if (m_Name != NULL)
		{
			cout << "析构函数调用" << endl;
			free(m_Name);
			m_Name = NULL;
		}
	}
	char* m_Name;
	int m_Age = 0;
};


void test01()
{
	Person p("德玛西亚", 18);
	cout << "姓名： " << p.m_Name << "  年龄：" << p.m_Age << endl;

	Person p2(p);
	cout << "姓名： " << p.m_Name << "  年龄：" << p.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

