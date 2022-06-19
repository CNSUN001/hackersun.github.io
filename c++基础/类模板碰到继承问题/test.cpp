#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

template <class T> 
class Base
{
public:
	T m_A;
};

//必须指定父类中T的数据类型，才能分配子类内存
class Son :public Base<int>
{

};

template <class T>
class Base2
{
public:
	T m_A;
};

template<class T1,class T2> //将类型设置交换给使用者
class Son2 :public Base<T2>
{
public:
	Son2():m_B(0)
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;

	}
	T1 m_B;
};

void test01()
{
	Son2 <int, double>s;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

