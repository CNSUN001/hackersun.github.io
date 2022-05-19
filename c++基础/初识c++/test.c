#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////1 全局变量检测增强
//int a;
//int a = 10;


////2 函数的检测增强
//getRectS(w, h)
//{
//	return w * h;
//}

//void test01()
//{
//	printf("%d\n", getRectS(10, 10, 10));
//}

////3 类型转换检测增强
//void test02()
//{
//	char* p = malloc(64);
//}


////4 struct增强
//struct Person
//{
//	int age;
//	//void func();//C语言下，结构体不可以有函数
//};
//
//void test03()
//{
//	struct Person p;//创建结构体变量的时候，必须加关键字struct
//	p.age = 100;
//}

//5 bool类型扩展 
//bool flag;

//6 三目运算符增强

//7 const增强
//const int m_A = 100;
//
//void test05()
//{
//	//m_A = 200;
//	//int* p = &m_A;
//	//*p = 200;
//
//	//局部const
//	const int m_B = 100;//分配到栈上
//	//m_B =200;
//	int* p = &m_B;
//	*p = 200;
//
//	printf("%d\n", m_B);
//
//	//int arr[m_B]; 在C语言下，m_B是伪常量 不可以初始化数组
//}

// C语言下const修饰全局变量默认认识外部链接属性

//int main()
//{
//	extern const int g_a;
//
//	printf("%d\n", g_a);
//	return EXIT_SUCCESS;
//}


//
//int main()
//{
//	test05();
//	system("pause");
//	return EXIT_SUCCESS;
//}

