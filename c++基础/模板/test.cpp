#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//void mySwapInt(int& a, int& b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}


void mySwapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void mySwapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//利用模板实现通用交换函数
template<typename T>//T代表一个通用的数据类型，告诉编译器如果下面紧跟着的函数或类出现T不要报错
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap2()
{

}

void test01()
{
	int a = 10;
	int b = 20;
	//mySwapInt(a, b);
	//1  自动类型推导，必须推到出一致的T数据类型，才可以正常使用模板
	//mySwap(a, b);
	//2 显示指定类型
	mySwap<int>(a, b);
	cout << a << endl;
	cout << b << endl;

	
	double c = 3.14;
	double d = 1.1;
	mySwap(c, d);
	//mySwapDouble(c, d);
	cout << c << endl;
	cout << d << endl;

	mySwap2<int>();//必须告诉编译器T的类型才可以调用
}


int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

