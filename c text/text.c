#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////1
//	int cnt = 0;
//	int fib(int n)
//	{
//		cnt++;
//		if (n == 0)
//			return 1;
//		else if (n == 1)
//		return 2;
//		else
//			return fib(n - 1) + fib(n - 2);
//	}
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}

////2
//int x = 1;
//do
//{
//	printf("%2d\n", x++);
//} while (x--);

////3
//int i = 1;
//int j;
//j = i++;

////4
//int i = 10;
//int j = 20;
//int k = 3;
//k *= i + j;

////5
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//	
//}

//6 c本身没有输入输出语句 正确的  库函数是利用c写出的(每个厂商都不一样)

//7 
//int main()
//{
//	int a = 0, c = 0;
//	do
//	{
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	printf("%d\n", c);
//}

//8
//for(x=0,y=0;(y=123)&&(x<4);x++)(循环次数) //4 &&两个同时满足进入循环

//9
//int year = 1009, * p = &year;
//return 0;

//10 11|10结果   |按位置或   1011|1010=1011

//1最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int Max = 0;
//	int i = 0;
//	int common = 0;
//	if (a > b)
//	{
//		Max = a;
//	}
//	else
//	{
//		Max = b;
//	}
//	for (i = a*b; i >= Max; i--)
//	{
//		if ((i % a == 0) && (i % b == 0))
//		{
//			 common = i;
//		}
//	}
//	printf("%d\n", common);
//}

//优化
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	while (1)
//	{
//		if ((m % a == 0) && (m % b == 0))
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}
//	return 0;
//}

//进一步优化
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i=1;;i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//				break;
//		}
//	}
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int min = m > n ? m : n;
//	while (min % m /*!= 0*/ || min % n /*!= 0*/)  //当两个都为0才表示都可以被除尽
//	{
//		min++;
//	}
//	printf("%d\n", min);
//	return 0;
//}

//使用辗转相除优化
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	scanf("%d %d", &a, &b);
//	int n = a * b;
//	while (ret != 0)
//	{
//		ret = a % b;
//		a = b;                     
//		b = ret;
//	}
//	printf("%d\n",n/a);
//	return 0;
//}

//2 将一句话单词进行倒置，标点不变 例如 i like beijing. 倒置 beijing. like i
#include <string.h>
void reverse(char* left, char* right)
{
	char tmp = 0;
	while (left <= right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//三步反转法
	//1 字符串整体反转
	//.gnijieb ekil i
	//2 每个单词逆序
	//bejing. like. i
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&& *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ') //防止野指针
			start = end + 1;
		else
			start = end;
	}

	printf("%s", arr);
	return 0;
}