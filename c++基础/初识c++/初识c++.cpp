#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>//标准输入输出流 i - input o - output相当于stdio.h
using namespace std;//使用  标准 命名空间 

//#include <math.h>
//#include <cmath>
//
//#include <time.h>
//#include<ctime>

//int main()
//{
//	//cout 标准输出流对象
//	//<< 左移 在C++下有了新的含义，用于在cout后拼接输出的内容 减少了原本c的记忆需求
//	//endl ---- end line 刷新缓冲区并且换行 
//	cout << "hello world"<< endl ;
//
//	system("pause");
//	return EXIT_SUCCESS;
//}




//双冒号作用域运算符
//int atk = 1000;
//void test01()
//{
//	int atk = 2000;
//	std::cout << "atk = " << atk << std::endl;
//	//::代表作用域 如果前面什么都不添加 代表全局作用域 
//	std::cout << "atk = " << ::atk << std::endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}





//namespace命名空间
//1  namespace 解决名称冲突
//2  命名空间下 可以放变量，函数，结构体，类。。。
//3 命名空间 必须要声明在全局作用域下
//4 命名空间 可以嵌套命名空间
//5 命名空间是开放的，可以随时给命名空间添加新的成员
//6 命名空间可以是匿名的
//7 命名空间可以起别名

//#include "game1.h"
//
//void Chess::goAtk()
//{
//	cout << "chess attack" << endl;
//}




//using声明以及using编译指令
//namespace KingGlory
//{
//	int sunwukongId = 1;
//}
//
//namespace LOL
//{
//	int sunwukongId = 3;
//}
//
//void test01()
//{
//	//int sunwukongId = 2;
//
//	//1 using 声明
//	using KingGlory::sunwukongId;//跟局部变量只能存一个
//
//	//当using声明与 就近原则同时出现，就会出错，尽量避免
//	cout << sunwukongId << endl;
//
//	//cout << KingGlory::sunwukongID << endl;
//}
//
//void test02()
//{
//	//int sunwukongId = 2;
//	//2 using编译指令
//	using namespace KingGlory;
//	using namespace LOL;
//	//当using编译指令 与 就近原则同时出现 有限 就近原则
//	//cout << sunwukongId << endl;
//	//当using编译指令由多个，需要加作用域区分
//	cout <<KingGlory:: sunwukongId << endl;
//	cout << LOL:: sunwukongId << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}




//C++对C的增强

//C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1 全局变量检测增强
// 在C中不会报错 ，C++会报错
int a;
int a = 10;

//2 函数检测增强

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}




