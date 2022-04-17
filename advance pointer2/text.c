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
//int main()
//{
//
//	void(*signal(int, void(*)(int)))(int);
//	//简化代码2
//	//	void(*)(int) signal(int,void(*)(int)) ;语法不支持
//	// typedef - 对类型进行重定义
//
//	typedef void (*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
//	pfun_t signal(int, pfun_t);
//
//	//1 signal和()结合，说明signal是函数名
//	//2 signal函数的第一个参数类型是int，第二个参数类型是函数指针
//	//	该函数指针，指向一个参数为int，返回类型是void的函数
//	//3 signal函数的返回类型也是一个函数指针
//	//	该函数指针，指向一个参数为int，返回类型是void的函数
//	//	signal是一个函数的声明
//	return 0;
//}


//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*
//整型指针数组 int* arr[5]
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};// pfArr函数指针数组
//
//	return 0;
//}



//函数指针数组的使用案例
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add  2.sub ****\n");
//	printf("****3.mul  4.dlv ****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量加、减、乘、除
//	do {
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数>:");//程序赘余  程序升级繁琐冗余
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default :
//			printf("输入错误,重新选择\n");
//			break;
//		}
//	
//	} while(input);
//	return 0;
//}


//通过函数指针数组优化
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add  2.sub ****\n");
//	printf("****3.mul  4.dlv ****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量加、减、乘、除
//	do {
//		menu();
//		//pfArr就是函数指针数组
//		//转移表 - 《c和指针》
//		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Dlv };
//		printf("请选择>:");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//函数指针的数组 - 数组
//取出函数指针数组的地址

//整型数组
//int arr[5]
//int (*pl)[5] = &arr  p1【整型数组】的指针

//整型指针的数组
//int* arr[5];
//int* (*p2)[5] = &arr; p2【整型指针数组】的指针

//函数指针数组
//int (*p)(int ,int);//函数指针
//int (*p2[4])(int, int);//函数指针的数组
//int （*(*p3)[4]）(int, int) = &p2;//取出函数指针的数组
//p3就是一个指向【函数指针的数组】的指针

//int main()
//{
//	int arr[10];
//	//数组元素类型 - int;
//	//数组类型 - int[10]
//	return 0;
//}


//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针作为参数传递给
//另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的
//用于对该事件或条件进行响应

//通过回调函数优化
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("输入你需要的数据>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

void menu()
{
	printf("*********************\n");
	printf("****1.add  2.sub ****\n");
	printf("****3.mul  4.dlv ****\n");
	printf("****    0.exit   ****\n");
	printf("*********************\n");
}
int main()
{
	int input = 0;
	//计算器-计算整型变量加、减、乘、除
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		int ret = 0;
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default :
			printf("输入错误,重新选择\n");
			break;
		}
	
	} while(input);
	return 0;
}
