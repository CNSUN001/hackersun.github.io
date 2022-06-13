#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template<class NAMETYPE,class AGETYPE=int > //类模板 可以有默认参数
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age) :m_Name(name), m_Age(age)
	{}
	void showPerson()
	{
		cout << "姓名:  " << this->m_Name << "  年龄: " << this->m_Age << endl;
	}
	NAMETYPE m_Name;
	AGETYPE m_Age;
};

void test01()
{

	//1 自动类型推导，类模板不可以使用，自动类型推导
	//Person p1("孙悟空"，100); （类模板不可以使用自动类型推导）

	//2 显示指定类型
	Person<string > p1("孙悟空", 100);
	p1.showPerson();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}



