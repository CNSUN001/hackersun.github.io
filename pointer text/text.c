#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//小端
//	*pc = 0;
//	printf("%x\n", a);//%x打印16进制  11223300
//	return 0;
//}

//int judgment()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int ret = judgment();
//	if (ret == 1)
//		printf("小端模式\n");
//	else
//		printf("大端模式\n");
//
//	return 0;
//}

//	int i;//i是全局变量,如果不初始化，默认是0
//int main()
//{
//	i -- ;// -1
//	//sizeof这个操作符，算出的结果的类型是unsigned int
//	if (i > sizeof(i))//-1>4  有符号整型和无符号整型比较大小，会把有符号整型先转换成无符号整型
//	{	
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

////编程计算Sn=a+aa+aaa+aaaa+aaaaa的和
//int main()
//{
//	//由a组成前n项之和 (不考虑溢出)
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////写一个函数，不使用下表打印一维数组
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(0);
//	print(arr, sz);
//	return 0;
//}

//打印水仙花数 153=1^3+5^3+3^3   一个n位数，其各位数字的n次方之和等于本身
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, 3);
//		tmp = tmp / 10;
//	}
//	if (a == sum)
//		printf("%d是水仙花数\n", a);
//	else
//		printf("%d不是是水仙花数\n", a);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否是自幂数
//		//1 计算i的位数 n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2 计算i的每一位n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10,n);//pow计算某个数的n次方
//			tmp = tmp / 10;
//		}
//		//3 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//2
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//3
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = {  {9801,"zhang",20},
//							    {9802,"wang",19},
//								{9803,"zhao",18},
//	};
//	fun(students + 1);
//	return 0;
//}
