#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "test1.h"



//函数重载本质上编译器会对名字修饰


//extern C浅析

//extern "C" void show();// 提前告诉编译器用C的方式去链接
//注意 在CPP里如果用了extern 就不可以再include头文件

void test01()
{
	show();//_Z4show;因为C++有函数重载会修饰函数名，但是show是c语言文件，因此链接失败
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

