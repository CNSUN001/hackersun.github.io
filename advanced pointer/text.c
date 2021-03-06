#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//字符指针还可以指向字符串
//int main()
//{
//	char* pc = "hello bit";//首字符的地址给到pc
//	char arr[] = "hello bit";
//	//*pc = 'w';//会报错，常量字符串不可修改
//	arr[0] = 'w';
//	printf("%c\n", *pc);//%c只能输出一个字符
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";//常量字符串(只存了一份)
//	const char* str4 = "hello bit.";//常量字符串
//	if (str1 == str2)//str1和str2是创建了不同的两块空间
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)//都只是指向了首字符的地址
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//指针数组
//int main()
//{
//	//指针数组
//	//数组-数组中存放的是指针(地址)
//	//int* arr[3];//存放整型指针的数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ",*(arr[i] + j));
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(*(arr + i) + j));
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//数组指针
//是一种指针 - 是指向数组的指针
//是一种指针
//整型指针 - 是指向数组的指针
// int* p;
//字符指针 - 是指向字符的指针
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//取出的是数组指针
//	//parr 就是一个数组指针-存放的是数组的指针
//	//arr //arr - 数组名是首元素的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;//+1跳过一个整型
//	int(*p2)[10] = &arr;//+1跳过一个数组
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}

//数组名是数组首元素的地址
//但是有两个例外:
//1. sizeof(数组名) - 数组名表示整个数组,计算的是整个数组的大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	int(*pa)[10] = &arr;//数组指针 在一维数中显得很别扭
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//p就是一个数组指针
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int  arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);//arr数组名，表示数组首元素的地址
	//二维数组的数组名表示
	//首元素的地址
	
	//二维数组的首元素是什么？？？？？？？？
	//第一行！！！！！！！！
	return 0;
}

// int arr[5];整型数组
// int *parr1[10];整型指针的数组
// int (*parr2)[10];数组指针 - 该指针能够指向一个数组，数组10个元素，每个元素类型int
// int(*parr3[10])[5]; 存放数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型

// p108