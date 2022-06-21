#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//转换是非常有用的，但是它会带来问题，比如在转换指针时，我们很可能将其转换成一个比他更大的类型，可能破坏其他数据
//一般情况下，尽量少用，除非用来解决非常特殊的问题


//1 静态类型转换 static_cast
void test01()
{
	//允许内置数据类型直接转换
	char a = 'a';
	
	double d = static_cast<double>(a);

	cout << d << endl;
}

class Base{};
class Son:public Base{};
class Other{};

void tes02()
{
	Base* base = NULL;
	Son* son = NULL;

	//语法 static_cast<目标类型>（原对象）
	//将base转换成Son* 父转子 向下转换不安全
	Son* son2 = static_cast<Son* >(base);

	//将son转成Base* 安全
	Base* base2 = static_cast<Base*>(son);

	//将base转换成Other*
	//Other* other = static_cast<Other*>(base);
	
	//static_cast 只有父子之前可以转换


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//动态类型转换 dynamic_cast转换严谨很多

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base { virtual void func() {} };
class Son :public Base { virtual void func() {} };
class Other {};

void test01()
{
	//不允许内置数据类型之间转换
	//char c = 'c';
	//double d = dynamic_cast<double>(c);
}

void test04()
{
	Base* base = new Son;
	Son* son = NULL;
	//将base转为Son* 父转子 不安全转换失败   (多态情况总是安全)
	Son* son2 = dynamic_cast<Son*>(base);

	//son 转为Base* 子转父 安全
	Base* base2 = dynamic_cast<Base*>(son);

	//base转Other*
	//Other* other = dynamic_cast<Other*>(base);
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//常量转换
//注意 不可以直接对非指针和非引用的变量使用const_cast操作符去直接移除它的const
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 常量指针转换成非常量指针
void test01()
{
	const int* p = NULL;
	int* np = const_cast<int*>(p);

	int* pp = NULL;
	const int* npp = const_cast<const int*>(pp);

	const int a = 10; //不能对非指针和非引用进行转换 （一个在栈上，一个在符号表）
	//int b = const_cast<int>(a);
}

// 非常量引用转常量引用
void test02()
{
	int num = 10;
	int& refNum = num;

	const int& refNum2 = const_cast<const int&>(refNum);
}

//重新解释转换(reinterpret_cast)
//最不安全的一种转换机制，最有可能出问题。
//主要用于将一种数据类型从一种类型转换为另一种类型，它可以将一个指针转换成一个整数，也可以将一个整数转换成一个指针

void test06()
{
	int a = 10;
	int* p = reinterpret_cast<int*>(a);
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}



