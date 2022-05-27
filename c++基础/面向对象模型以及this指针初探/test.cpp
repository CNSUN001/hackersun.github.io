#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//面向对象初探

//1
//数据 和 处理数据操作的函数 是分开存储的

//vs默认对齐数是8

class Person
{
public:
	int m_A;//只有非静态成员变量 属于类对象上

	void func()  //成员函数  不属于类对象上
	{}

	static int m_B;//静态成员变量 不属于类对象上

	static void func2()//静态成员函数 不属于类对象上
	{

	}

	double m_C;
};

int Person::m_B = 0;

void test01()
{
	Person p1;
	cout << sizeof(p1) << endl; //空类大小是1字节 原因是每个对象都应该在内存上有独一无二的地址
}

//为什么普通成员函数可以访问普通成员变量 但是静态成员函数不可以？
//this指针

int main()
{
	test01();

	Person p1;
	//func()里有一个隐式的this指针谁调用  this指向谁
	p1.func();
	
	Person p2;
	p2.func();

	system("pause");
	return EXIT_SUCCESS;
}
#endif

//this 指针的使用
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		// 用途1 ：解决名称冲突
		this->age = age; 
	}

	//this指针 隐式加在每一个函数中

	bool compareAge(Person &p)  
	{
		if (this->age == p.age)
		{
			return true;
		}
		return false;
	}

	Person& personAddPerson(Person& p)  //如果返回的是值就不是返回的本身
	{
		this->age += p.age;
		return *this;  //*this就是本体    如果return *this返回的是当前对象的克隆或者本身（若返回类型为A， 则是克隆， 若返回类型为A&， 则是本身 ）。
	}

	int age;
};

void test01()
{
	//this指针 指向 被调用的成员函数 所属的对象
	Person p1(18);

	cout << "p1的年龄:" << p1.age << endl;

	Person p2(18);

	bool ret = p1.compareAge(p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}

	p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2);//链式编程
	cout << "p1的年龄:" << p1.age << endl;

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

