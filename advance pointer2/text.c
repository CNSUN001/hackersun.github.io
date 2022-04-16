#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针，实现指针传参
//	print(p,sz);
// char ch = 'w';
// char* p1 = &ch;
// text(&ch);
// test(p1);
// return 0;
//}

//二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组也可以
//	printf("%d\n", a);
//	return 0;
//}

//指针
//一级指针
//int* p		char* pc	void* pv
//二级指针
//int** p		char** pc
//数组指针:指向数组的指针
//int (*p)[5]


//数组
//一维数组
//二维数组
// 
//指针数组：存放指针的数组



//函数指针：指向函数的指针，存放函数地址的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//	
//	//函数指针：指向函数的指针，存放函数地址的指针
//
//	int (*pf)(int, int) = &Add;//pf就是一个函数指针变量
//	//printf("%p\n", &Add);//%p打印地址
//	//printf("%p\n", Add); //函数名 == &函数名 完全一样
//	//数组名 != &数组名
//	return 0;
//}


//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*pt)(char*) = &test;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add; //Add == pf
//	//int ret = (*pf)(3, 5);//通过函数指针调用函数
//	//int ret = Add(3, 5);
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//代码1
//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1 void(*)()-函数指针类型
//	//2 (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3 *(void(*)())0 - 对0地址解引用
//	//4 (*(void(*)())0)() - 调用0地址的函数
//	return 0;
//}

//代码2
int main()
{

	void(*signal(int, void(*)(int)))(int);
	//简化代码2
	//	void(*)(int) signal(int,void(*)(int)) ;语法不支持
	// typedef - 对类型进行重定义

	typedef void (*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
	pfun_t signal(int, pfun_t);

	//1 signal和()结合，说明signal是函数名
	//2 signal函数的第一个参数类型是int，第二个参数类型是函数指针
	//	该函数指针，指向一个参数为int，返回类型是void的函数
	//3 signal函数的返回类型也是一个函数指针
	//	该函数指针，指向一个参数为int，返回类型是void的函数
	//	signal是一个函数的声明
	return 0;
}

