#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);//:m_Name(name),m_Age(age)
	//{}
	//T1 m_Name;
	//T2 m_Age;

	void showPerson();
	//{
	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;

};

//����ʵ�� ::�����<T1,T2>
template <class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age):m_Name(name),m_Age(age)
{}

template <class T1, class T2>
void Person<T1, T2>:: showPerson()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	
}

void test01()
{
	Person <string, int>p("Tom", 10);
	p.showPerson();
}


int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

