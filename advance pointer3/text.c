#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序(通过指针实现)
//void Bubble(int *p,int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;
//		for (i = 0; i < sz - 1 - j; i++)//i < sz - i - j后面交换完的不再交换节省时间
//		{
//			int tmp = 0;
//			if (*(p + i) > *(p + i + 1))
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + i + 1);
//				*(p + i + 1) = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//qosrt函数的使用 qsort() 快速排序  。 整型数据，字符串数据，结构体数据都可以。

//void qsort(void* base, //base中存放待排序数据中第一个对象的地址
//			 size_t num, //num排序数据元素的个数
//			size_t size, //size排序数据中一个元素的大小
//			int (*compar)(const void*, const void*));//compar是用来比较待排序数据中的2个元素的函数

//#include <stdlib.h>
//#include <string.h>
//int com_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test1()
//{
//	//整型数据的排序
//	int arr[10] = { 3,7,8,6,5,4,9,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	//打印
//	print(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//	//strcmp对应比较ASCII码
//}
//
//void test2()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };//
//	//假设按照年龄排序
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), sort_age);
//	//按名字排序
//	qsort(s, sz, sizeof(s[0]), sort_name);
//}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}

//模仿qsort实现一个冒泡排序的通用算法
void bubble_sort(void* base, 
				int sz, 
				int size, 
				int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟排序
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//两个元素比较
			if(cmp())
		}
	}
}