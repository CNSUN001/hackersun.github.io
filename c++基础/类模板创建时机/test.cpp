#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��ģ���г�Ա�����Ĵ���ʱ��

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show����" << endl;
	}
};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show����" << endl;
	}
};

//��ģ��ĳ�Ա������������һ��ʼ�����ģ����������н׶�ȷ��T���ͺ�Ŵ�����
template <class T>
class Myclass
{
public:
	void Func1()
	{
		obj.showPerson1();
	}
	void Func2()
	{
		obj.showPerson2();
	}

	T obj ;
};

void test01()
{
	Myclass <Person2> p1; 
	//p1.Func1();
	p1.Func2();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}


