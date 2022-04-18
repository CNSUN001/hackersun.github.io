#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 整型数组
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16  sizeof(数组名)-计算整个数组的大小 &数组名-表示取出整个数组的地址  其他数组名都是数组首元素大小
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8  //&a虽然是数组的地址，但是也是地址，sizeof计算的是一个地址的大小
//	printf("%d\n", sizeof(*&a));//16
//	// int(*p)[4] = &a;
//	printf("%d\n", sizeof(&a + 1));//4/8 //整个数组后的地址 - 野指针
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 a[1]的地址
//
//
//	return 0;
//}

//字符数组1
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//随机
//	printf("%d\n", strlen(arr + 0));//随机
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//	return 0;
//}


//字符数组2
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//字符数组3
int main()
{
	char* p = "abcdef";
	//char(*p1)[7]="abcdef";
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 0));//4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(*p1));//7
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1)); //4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8


	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1)); //随机值 (两个随机值没有联系，因为不确定p内部具体内存)
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}