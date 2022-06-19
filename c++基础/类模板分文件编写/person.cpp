#include "perosn.h"

//类外实现 ::多加了<T1,T2>
template <class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age):m_Name(name),m_Age(age)
{}

template <class T1, class T2>
void Person<T1, T2>:: showPerson()
{
	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	
}


