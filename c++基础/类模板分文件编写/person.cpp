#include "perosn.h"

//����ʵ�� ::�����<T1,T2>
template <class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age):m_Name(name),m_Age(age)
{}

template <class T1, class T2>
void Person<T1, T2>:: showPerson()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	
}


