#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//最简单的递归形式
//int main()
//{
//	printf("hehe\n");
//	main();//死递归 栈溢出
//	return 0;
//}

//递归必须存在限制条件
//每次递归必须越来越接近递归限制条件 这两个是必要条件                                   
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;
//	//scanf("%u", &num);
//	//递归-函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
// }

//void test(int x)
//{
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}//栈溢出
//
//int main()
//{
//	test(1);
//	return 0;
//}

//写递归代码时
// 1 不能死递归 逼近跳出条件
// 2 递归层次不能太深

//编写函数不允许创建临时变量，求字符串长度。

//int my_strlen(char* str) //创建临时变量的方案
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) //递归解法
//{
//	if (*str != '\0')
//	{
//		return 1+ my_strlen(str+1);//使用递归不要改变原值比如使用str++
//	}
//	else
//	{
//		return 0;
//	}
//}
//int  main()
//{
//	char arr[] = "bit";
//	
//	//['b']['i']['t']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//递归与迭代


//迭代计算阶乘方法
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//迭代
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("=%d\n", ret);
//	return 0;
//}


//递归计算阶乘方法
//int factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}


//求第n个斐波那契数(不考虑溢出)
//斐波那契数 规律 1 1 2 3 5 8 13 21 34 55
//int count = 0;
//
//int fib(int n)//递归这种方法计算斐波那契效率很低，重复大量计算
//{
// //统计第3个斐波那契数的计算次数
//	if (3 == n)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0; 
//}

//用循环大大提升斐波那契数效率
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while ( n > 2 )
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//青蛙跳台阶 本质上是斐波那契数
//递归实现
//int layers(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return layers(n - 1) + layers(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = layers(n);
//	printf("%d\n", ret);
//	return 0;
//}


//循环实现
//int layers(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 1;
//	if (1 == n)
//	{
//		return 1;
//	}
//	if (2 == n)
//	{
//		return 2;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = layers(n);
//	printf("%d\n", ret);
//	return 0;
//}

//hanoi问题
//void mov(char pos1, char pos2)
//{
//	printf("%c->%c ", pos1, pos2);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (1 == n)
//	{
//		mov(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);//第一阶段将除最低层看作一个整体将柱3当中转
//		mov(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);//第二阶段将柱1当中转
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("输入层数\n");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//	return 0;
//}