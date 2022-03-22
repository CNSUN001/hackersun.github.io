#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//累乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		
//		s = d * i;
//		i++;
//		
//	
//	}
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		s = s * i;
//	}
//
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//
//	do
//	{
//		s = s * i;
//		i++;
//	} while (i <= n);
//	printf("%d\n", s);
//
//	return 0;
//}

//1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
//int main()//第一个程序
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		
//		for (i ; i <= n; i++)
//		{
//			printf("%d\n", i);
//			printf("%d\n", s);
//			s *= i; //s = s * i
//			printf("%d\n", s);
//			
//		}
//		ret += s; //ret = ret + s
//		printf("%d\n", ret);
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		s = 1;//初始化1
//		for (i=1; i <= n; i++)
//		{
//			
//			s *= i; //s = s * i
//		
//			//分别计算每个元素的阶乘
//		}
//		ret += s; //ret = ret + s
//		
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//一层for循环实现 优化算法
//int main()
//{
//	int n = 0;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		s *= n;
//		ret += s;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//二分法（折半查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =  17;//要s查找的数字
//	//在arr这个有序数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;//重新确定左下标
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("fought it:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("can't find\n");
//	}
//
//
//	return 0;
//}

//二分法
//int main()
//{
//	int n = 0;
//	printf("输入你要输入的值：");
//	scanf("%d", &n);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("已经找到:%d\n", mid);
//			break;
//		}
//		
//	}
//
//	if (left > right)
//	{
//		printf("输入的值有误！");
//	}
//
//	return 0;
//}




//多个字符冲两端移动，向中间汇聚
int main()
{
	char arr1[] = "welcome to c!!!!!!!!";
	char arr2[] = "!!!!!!!!!!!!!!!!!!!!";

	int left = 0;//设置左下表
	int right = strlen(arr1) - 1;

	return 0;
}