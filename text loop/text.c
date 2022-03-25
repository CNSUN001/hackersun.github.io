#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;//没有break打断switch依次执行
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//	{
//	case 0:
//		printf("first");
//	case 1:
//		printf("second");
//		break;
//	default: printf("hello");
//	}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}



//输入3个值从大到小输入
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d ", a,b,c );
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c);
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}


//求最大公因数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;//假设一个数是最小值
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		else
//		{
//			max--;
//		}
//	}
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (/*m % n != 0*/t = m % n)
//	{
//		/*t = m % n;*/
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//最小公倍数
int main()
{
	int m = 0;
	int n = 0;
	int min = 0;
	scanf("%d%d", &m, &n);
	if (m > n)
	{
		min = m;
	}
	else
	{
		min = n;
	}
	while (min % m /*!= 0*/ || min % n /*!= 0*/)
	{
		min++;
	}
	printf("%d\n", min);
	return 0;
}