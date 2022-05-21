#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#if 0
//设计一个类

//class + 类名

const double PI = 3.14;
class Circle
{
public://公共权限

	//类中的函数 称为 成员函数 （成员方法）

	//求圆周长
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

	//设置半径
	void setR(int r)
	{
		m_R = r;
	}

	//获取半径
	int getR()
	{
		return m_R;
	 }


	//类中的变量 称为成员变量 成员属性
	
	//半径
	int m_R;
};

void test01()
{
	Circle c1;//通过类 创建出一个对象   实例化对象

	//给c1半径赋值
	//c1.m_R = 10;
	c1.setR(10);

	cout << "半径为：" << c1.m_R << endl;
	cout << "半径为：" << c1.getR() << endl;
	cout << "周长为：" << c1.calculateZC() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//设计一个学生类
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class Student
{
public:

	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}

	//设置学号
	void setId(int id)
	{
		m_Id = id;
	}

	//显示信息
	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
	}

	string m_Name;

	int m_Id = 0;

};

void test01()
{
	Student s1;
	s1.m_Name = "张三";
	s1.m_Id = 1;
	cout << "姓名：" << s1.m_Name << " 学号：" << s1.m_Id << endl;

	Student s2;
	s2.setName("李四");
	s2.setId(2);
	s2.showStudent();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//基于C宏的缺陷，C++产生了内联函数

//宏缺陷1 ：必须加括号保证运算完整
#define  MYADD(x,y) x+y
void test01()
{
	int a = 10;
	int b = 20; 
	int ret = MYADD(a, b) * 20;
	cout << ret << endl;//410
}
//宏缺陷2 ：即使加了括号，有些运算依然与预期不符
#define MYCOMPARE(a,b) (((a) < (b)) ? (a) : (b))
void test02()
{
	int a = 10;
	int b = 20;
	int ret = MYCOMPARE(++a, b);//预期11 结果变为12 因为宏仅仅只是替换
	cout << ret << endl;

}

//内联函数本身就是函数，唯一不同在于内联函数会在适当的地方像预处定义宏一样展开。
//因为本身是函数，解决了宏的缺陷，同时具备宏的优势，以空间换时间，在适当的地方展开

//内联函数的声明和实现必须同时加关键字inline 才算内联函数

//不过内联函数仅仅只是给编译器一个建议，编译器不一定会接受这种建议。即使没有声明内联函数，那么编译器也可能将此函数做内联编译
 
inline void func();
inline void func() {};


//类内部的成员函数 在函数前都隐式的加了inline

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
//函数的默认参数和占位参数
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//注意事项，如果一个位置有了默认参数，那么从这个位置起，从左到右边都必须有默认值
//int func (int a ,int b = 10;int c = 20)

int func(int a = 10, int b = 10)
{
	return a + b ;
}

void test01()
{
	cout << func() << endl;
	cout << func(20) << endl;
}

//函数的声明和实现，只能有一个提供默认参数，不可以同时加默认参数
void myFunc(int a = 10, int b = 20);
void myFunc(int a , int b ) {};



//占位参数  只写一个类型进行占位，调用时候必须要传入占位值
void func2(int a,int = 1)
{

}

void test02()
{
	func2(20);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//重点 函数重载

//函数重载条件
//1 在同一个作用域 
//2 函数的名称相同
//3 参数个数、类型、顺序不同
// 

//C++允许函数重名
void func()
{
	cout << "func()调用" << endl;
}

void func(int a)
{
	cout << "func(int a)调用" << endl;
}

void func(double a)
{
	cout << "func(double)调用" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)调用" << endl;
}

void func(double a,int b)
{
	cout << "func(double b,int a)调用" << endl;
}

//int func(int a)
//{
//	cout << "func(int a)调用" << endl;
//}

//返回值不可以作为函数重载的条件  

void test01()
{
	func();
	func(1);
	func(1, 3.14);
}

//函数重载中 引用的两个版本
void myFunc(int& a)
{
	cout << "myfunc(int &a)调用" << endl;
}

void myFunc(const int& a)
{
	cout << "myfunc(const int &a)调用" << endl;
}

void test02()
{
	int a = 10;
	myFunc(a);
	myFunc(10);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

