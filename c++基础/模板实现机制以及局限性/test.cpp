//1 编译器并不是把函数模板处理成能够处理任何类型的函数
//2 函数模板通过具体类型产生不同的函数
//3 编译器会对函数模板进行两次编译，在声明的地方对模板代码本身进行编译，在调用的地方对参数替换后的代码进行编译


//模板局限性
//如果代码实现时定义了赋值操作 a = b，但是T为数组，这种假设就不成立了
//同样，如果里面的语句为判断语句 if (a > b), 但T如果是结构体，该假设也不成立



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;
};

//显示两个变量 对比 函数
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}

//重载的方法
//bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	return false;
//}

//利用具体化技术，实现对自定义数据类型 提供特殊模板
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
		return false;
}

void test01()
{
	//int a = 10;
	//int b = 10;
	//bool ret = myCompare(a, b);
	//cout << ret << endl;
	Person p1("Tom", 19);
	Person p2("Tom", 19);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}


 