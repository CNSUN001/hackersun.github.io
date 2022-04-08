#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数组--一组相同类型元素的集合
//#include <string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr1[10] = { 1,2,3,4,5 };//不完全初始化
//	int arr2[] = { 1,2,3,4,5 };//=int arr2[5] = { 1,2,3,4,5 };
//	char ch[5] = { 'b','i','t' };
//	char ch1[] = { 'b','i','t' };
//	char ch3[5] = "bit"; //bit \0 0
//	char ch4[] = "bit"; // bit \0
//	char ch5[] = "bit";
//	char ch6[] = { 'b','i','t' };
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));										
//	return 0;
//}

//一维数组
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4]=5;//[]下标引用操作符
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(0));
//	printf("---------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//一维数组 在内存中连续存放
// 随着数组下标的增长，地址由低到高变化
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);  //%p - 打印地址 按16进制打印
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//二维数组
//int main()
//{
	//创建
	//int arr[3][4];
	//char ch[3][10];

	//初始化 -创建的同时给赋值
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr1[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化，后面补0;
	//int arr2[3][4] = { {1,2},{3,4},{4,5} };
	//int arr[][4] = { {1,2},{3,4},{4,5} };//行可以省略，列不可以
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//二维数组在数组中的存储
	//int arr[][4] = { {1,2},{3,4},{4,5} };//行可以省略，列不可以
	//int i = 0;
	//int j = 0;
	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d  ", *p);
	//		p++;
	//}


	//for (i = 0; i < 3; i++)
	//{
	//	
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]%p\n",i,j, &arr[i][j]);//打印地址
	//	}
	//	printf("\n");
	//}
//	return 0;
//}


//排序为升序-冒泡排序  两两相邻的元素进行比较，需要的话进行交换
//void bubble_sort(int arr[],int sz)
//{
//
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡过程
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,5,3,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}


//数组名是什么？
//数组名是数组首元素的地址
//但是有2个例外
//1 .sizeof(数组名)-数组名表示整个数组-计算的是整个数组的大小，单位是字节
//2. &数组名-数组名表示整个数组-取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//取出的是数组的地址
//	printf("%p\n", &arr+1);
//	//int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);
//	//printf("%p\n", &arr[0]);
//	printf("%p\n", arr); //数组名是首元素的地址
//	printf("%p\n", arr+1);
//	return 0;
//}

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



//优化
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			if (1 == flag)
//				//flag 作用是为了优化算法，提升效率，，从第一个位置开始没有发生交换，说明后座都已经被对应实力的大数占完，不必再为大数找后座了
//			{
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}


//创建一个整型数组，完成对数组的操作
//1 实现函数init()初始化数组为全0
//2 实现print()打印每个元素
//3 实现reverse()函数完成数组元素的逆序

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}


//交换数组
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int arr1[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//	}
//	return 0;
//}