#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//f(x)=2*x+1
//库函数
//strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);
//
//	return 0;
//}
//memset
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//自定义函数

//用函数找最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = ((x < y) ? y : x);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//写一个函数交换两个整型内容
//void表示函数不需要返回

//这种做法仅仅只是函数内部进行交换不涉及主函数是错误的
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数交换两个整型变量
//	printf("%d %d\n", a, b);
//	Swap1(a , b);//传值调用
//	printf("%d %d\n", a, b);
//	
//	return 0;
//}

//通过设置指针可以解决
//void Swap2(int* pa, int* pb)//形式参数 只有在调用的那一瞬间才会开辟空间
//
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	//写一个函数交换两个整型变量
//	Swap2(&a ,&b);//实际参数  可以传递变量 常量 表达式 函数 //传址调用
//	printf("%d %d\n", a, b);
//	return 0;
//}


//判断质数

//#include <math.h>
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
////100-200质数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i<=200 ;i++)
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	printf("\n%d ", count);
//	return 0;
//}



//判断1000-2000闰年
//int is_lear_year(int x)
//{
//	if (x % 4 == 0)
//	{
//		if (x % 100 != 0)
//		{
//			return 1; //error这种写法1600经过直接return0了
//		}
//		else
//			return 0;
//	}
//	else if (x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//不写返回类型默认int
//int is_lear_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int is_lear_year(int x)
//{
//	return((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000;y++ )
//	{
//		if (is_lear_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}


//二分法
//int binary_search(int arr[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回找到了的下表
//	//找不到返回-1
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d\n",ret);
//
//	}
//	return 0;
//}

//int binary_search(int arr[], int k)//error //相当于传递的是指针
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组arr传参,实际传递的不是数组本身
//	//仅仅传过去了数组首元素的地址
//
//	int key = 7;
//	int ret = binary_search(arr, key);
//	if (-1 == ret )
//	{
//		printf("找不到 \n");
//	}
//	else
//	{
//		printf("找到了，下标是 %d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(* p)++;//想在函数内部改变外部变量，往往离不开指针
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//函数的嵌套调用和链式访问
//void text1()
//{
//	printf("hehe\n");
//}
//int text()
//{
//	text1();
//	return 0;
//}
//int main()
//{
//	text();
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	////char arr[] = "abc";
//	////int len = strlen(arr);
//	////printf("%d\n", len);
//	////strlen的返回值直接进入printf本质上也是链式访问
//	////printf("%d\n", strlen(arr));
//	//char arr[20] = { 0 };
//	//char arr2[] = "bit";
//	//strcpy(arr, arr2);
//	//printf("%s\n", arr);
//	//printf("%s\n", strcpy(arr, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf返回值是打印在屏幕上的个数，所以结果是4321
//	return 0;
//}

//函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的声明
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}


//函数声明往往是在大工程里的头文件里进行
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	int d = Sub(a, b);	
//	printf("%d\n", d);
//
//	return 0;
//}

#include "sub.h"
//导入静态库
#pragma comment(lib,"sub.lib")
//实现代码隐藏

int main()
{
	int a = 10;
	int b = 20;
	int c = Sub(a, b);
	printf("%d\n", c);
	return 0;

}