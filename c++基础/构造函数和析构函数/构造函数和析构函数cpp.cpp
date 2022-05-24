
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public://构造和析构必须要声明在全局作用域

	//构造函数
	//没有返回值 不用写void
	//函数名 与 类名相同
	//可以有参数，可以发生重载
	//构造函数 有编译器自动调用一次 无须手动调用
	Person()//创建的时候调用
	{
		cout << "Person的构造函数调用" << endl;
	}

	//析构函数
	//没有返回值 不用写void
	//函数名 与 类名相同 函数名前加~
	//不可以可以有参数，不可以发生重载
	//析构函数 有编译器自动调用一次 无须手动调用

	~Person()//栈释放的时候调用
	{
		cout << "Person的析构函数调用" << endl;
	}
};

void test01()
{
	//Person p;
}

int main()
{
	//test01();
	Person p;
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;




#if 0
//构造函数的分类
//按照参数分类：无参构造和有参构造
//按照类型分类：普通构造函数 拷贝构造函数

class Person
{
public:
	//按照参数分类
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int a)
	{
		m_Age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	//拷贝构造函数
	Person(const Person &p)//在给形参传递值时，会再次调用拷贝构造函数
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	//析构函数
	~Person()
	{
		cout << "Person的析构构造函数调用" << endl;
	}

	int m_Age = 0;
 };


//构造函数的调用
void test01()
{
	//Person p;

	////1 括号法
	//Person p1(10);
	//Person p2(p);

	//注意事项一
	//不要用括号法 调用无参构造函数  //Person p3();//编译器会把他当作函数声明 void func()
	
	//2 显示法
	//Person p3 = Person(10);//有参构造
	//Person p4 = Person(p3);//拷贝构造

	//Person(10);//匿名对象  特点 当前行执行完成 ，立刻释放

	//cout << "aaa" << endl;

	//注意事项二
	//不要用拷贝构造函数 初始化 匿名对象
	//Person(p3); 编译器把括号去掉，会认为是p3对象的实例化，如果已经有p3就会重定义

	//3 隐式法
	Person p5 = 10; // Person p5 = Person(10);
	Person p6 = p5;
}

int main()
{
	//Person p(18);
	//Person p2(p);
	//cout << "p2年龄" << p2.m_Age << endl;

	test01();
	system("pause");
	return EXIT_SUCCESS;
}

//class Test
//{
//public:
//	Test() {};
//	Test(const Test& t)
//	{
//		cout << "Test Copy Constructor!" << endl;
//	}
//};
//
//void test(Test t){}
//
//int main() {
//
//	Test t;
//
//	test(t);//输出了"Test Copy Constructor!"
//
//}
#endif

#if 0 
//拷贝构造函数的调用时机
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//按照参数分类
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int a)
	{
		m_Age = a;
		cout << "Person的有参构造函数调用" << endl;
	}

	//拷贝构造函数
	Person(const Person& p)//在给形参传递值时，会再次调用拷贝构造函数
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	//析构函数
	~Person()
	{
		cout << "Person的析构构造函数调用" << endl;
	}

	int m_Age = 0;
};

//1 用已经创建好的对象来初始化新的对象
void test01()
{
	Person p1(18);

	Person p2= Person(p1);  //Person p2(p1);Person p2= p1;
	cout << "p2的年龄" << p2.m_Age << endl;
}

//2 值传递的方式 给函数参数传值
void doWork(Person p) //值传递本身就是调用拷贝构造函数
{

}
void test02()
{
	Person p1(100);
	doWork(p1);
}

//3 以值的方式返回局部对象
Person doWork2()
{
	Person p;
	return p;
}
void test03()
{
	Person p = doWork2();
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//构造函数的调用规则
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 编译器会给一个类至少添加三个函数  默认构造（空实现）  析构函数（空实现）  拷贝构造函数（值拷贝）
//2 如果字节提供了有参构造函数，编译器就不会提供默认构造函数，但依然提供拷贝构造函数
class Person
{
public:
	//Person()
	//{
	//	cout << "默认构造函数调用" << endl;
	//}
	Person(int age)
	{
		m_Age = age;
		cout << "有参构造函数调用" << endl;
	}
	//Person(const Person& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "拷贝构造函数调用" << endl;
	//}
	~Person()
	{
		cout << "析构函数调用" << endl;
	}
	int m_Age = 0;
};

void test01()
{
	Person p1(1);
	p1.m_Age = 20;
	Person p2(p1);
	cout << "p2年龄 = " << p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif
