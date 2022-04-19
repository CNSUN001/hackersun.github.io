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
//int main()
//{
//	char* p = "abcdef";
//	//char(*p1)[7]="abcdef";
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 0));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(*p1));//7
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1)); //4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1)); //随机值 (两个随机值没有联系，因为不确定p内部具体内存)
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//二维数组
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - 是第一行第一个元素
//	printf("%d\n", sizeof(a[0]));//16 a[0]就是第一行的数组名
//	printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]作为数组名，并没有单独放在sizeof内部也没有取地址 										
//										//所以a[0]表示第一行第一个元素的地址，a[0] + 1第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 *(a[0] + 1)第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4/8  a作为二维数组的数组名，并没有单独放在sizeof内部也没有取地址
//									// 所以a是二维数组首元素的地址:即第一行的地址  
//									//a + 1就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  *(a + 1) ->a[1]  a+1是第二行的地址,*(a+1)表示第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 //a[0]是第一行的数组名,取地址a[0]+1就是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  第二行地址解引用
//	printf("%d\n", sizeof(*a));//16 首元素地址解应用,就是第一行所有元素 *a = *(a + 0) = a[0]
//	printf("%d\n", sizeof(a[3]));//16  虽然没有第4行但是 a[3]类型 int [4] 根据类型算出16
//									//sizeof内部不会真实访问,不会报错
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6)); //2 sizeof内部不计算,不访问,直接通过类型判断大小
//	printf("%d\n", s);//5
//	return 0;
//}


//1
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1); //int(*p)[5] = &a 与int*类型不一样所以要强制类型转换
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5 
//	return 0;
//}

//2
//struct Test//20字节
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p的值为0x100000。如下表达式的值分别是多少？
//
//int main()
//{
//	printf("%p\n", p + 0x1);//%p是打印地址    0x100014
//	printf("%p\n",(unsigned long) p + 0x1);// 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);// 0x100004
//	return 0;
//}

//3
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);      //01 (ptr2) 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00(ptr1)
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = 0x 00 00 00 04  *ptr2 = 0x02 00 00 00
//	return 0;
//}

//4
//int main()
//{
//	int a[3][2] = { (0,1),(2,3), (4,5) };//注意的()逗号表达式 实际放进去的是1，3，5
//	int* p;
//	p = a[0];
//	int(*pa)[2] = a;
//	pa = a[0];//p拿到第一个元素地址
//	printf("%d,%d", p[0], **(pa + 1));//1,5
//	return 0;
//}

//5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//10000000  00000000 00000000 00000100       -4
//	//111111111111111111111111111111111011
//	//111111111111111111111111111111111100 存的补码
//	//FFFFFFFC -4
//	return 0;
//}

//6
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)相当于拿到第二行
	int(*ptr3)[5] = (aa + 1);
	printf("%d,%d,%d", *(ptr1 - 1), *(ptr2 - 1), *(*(ptr3)+1));//10 5 7
	return 0;
}