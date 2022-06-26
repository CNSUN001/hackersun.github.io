#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void print(std::initializer_list<int > vals) //std::initializer_list< > 支持初始化
{
	//auto = initializer_list<int >::iterator  auto 自动类型转换 
	for (auto p = vals.begin(); p != vals.end(); ++p)
	{
		std::cout << *p << endl;
	}
}

void test01()
{
	print({ 12,3,5,7,11,13,17 });
}

//当 指明实参个数 和 指明一个初始值 的构造函数（ctor）同时存在，选择带有初值的版本
class P
{
public:
	P(int, int){};
	P(std::initializer_list<int>){};
};

void test02()
{
	P p(77, 5);  //P(int, int)
	P q{ 77,5 };//P(std::initializer_list<int>)
	P r{ 77,5,42 }; //P(std::initializer_list<int>)
	P s = { 77,5 }; //P(std::initializer_list<int>)
}


//explicit关键字用来修饰类的构造函数，被修饰的构造函数的类，
//不能发生相应的隐式类型转换，只能以显示的方式进行类型转换

class P2
{
public:
	P2(int a,int b){}

	explicit P2(int a, int b, int c) {}

	int a, b, c;
};

void test02()
{
	P2 x(77, 5);
	P2 y{ 77,5 };
	P2 z{ 77,5,42 };
	P2 v = { 77,5 };
	//P2 w = { 77,5,42 }; //不能使用标记为“显式”的构造函数

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

