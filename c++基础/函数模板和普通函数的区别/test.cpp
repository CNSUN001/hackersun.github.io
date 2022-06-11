#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 函数模板和普通函数的区别
template<class T>
T myAdd(T a, T b)
{
	return a + b;
}

int myAdd2(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	myAdd(a, b);
	myAdd2(a, b);
	myAdd<int>(a, c);//如果使用自动类型推导，不可以发生隐式类型转换
	myAdd2(a, c);

}

//2 函数模板和普通函数的调用规则
template<class T>
void myPrint(T a,T b)
{
	cout << "函数模板调用" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "(T a, T b,T c)函数模板调用" << endl;
}

void myPrint(int a, int b)
{
	cout << "普通函数调用" << endl;
}

void test02()
{
	//1 如果函数模板和普通函数都可以调用，有限调用普通函数（无论普通函数是否实现）
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//2 如果想强转调用模板函数，使用空模板参数列表
	myPrint<>(a, b);

	//3 函数模板可以发生函数重载
	myPrint<>(a, b,10);

	//4 如果函数模板能产生更好的匹配，优先使用函数模板（比如隐式类型转换）
	char c = 'c';
	char d = 'd';
	myPrint(c, d);

}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

