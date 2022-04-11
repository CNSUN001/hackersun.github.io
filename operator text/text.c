#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;   // c=6  a=6
//	b = ++c, c++, ++a, a++;  // c=7 c=8 a=7 a=8 b=7
//	b += a++ + c; //	b= 8+8+7=23  a=9 c=8
//	printf("a= %d b = %d c=%d\n", a, b, c);
//	return 0;
//}

//统计二进制中1的个数
//int count_number(int num)
//{
//	int count = 0;
//	
//	while (num )
//	{
//		if(	num & 1 == 1);
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
//int count_number(int num)
//{
//	int count = 0;
//	int i = 1;
//	while (i)
//	{
//		if (num & i)
//		{
//			count++;
//		}
//		i = i << 1;
//	}
//	return count;
//}
//int count_number(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num & 1 == 1;
//		num >>= 1;
//		count++;
//	}
//	return count;
//}
//限制32位可以搞定负数
//int count_number(int num)
//{
//	int count = 0;
//	int i = 0;
//	for( i = 0 ; i < 32 ; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//算法优化
//int count_number(int num)
//{
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		num  &= (num - 1);
//		//某个数每次和比自己小1的数做一次&运算，其对应的二进制数会少一个1，直到最后变成0。
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int ret = count_number(a);
//	printf("%d\n", ret);
//	return 0;
//}

//写一个代码判断一个数字是不是2的n次方
//2的n次方的数字，其中只有一个1
//k & (k-1) == 0;



//求两个数二进制中不同位的个数   
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m , &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//优化
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m , &n);
//	int i = 0;
//	int count = 0;
//	int ret = m ^ n;//相同为0，相异为1 //数完统计ret二进制里有几个1
//	while (ret)
//	{
//		ret &= (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//打印整数的二进制的奇数位和偶数位
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的2进制中的奇数位和偶数位
//	int i = 0;
//	int count = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//交换两个变量不创建临时变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;//b = a ^ b ^ b
//	a = a ^ b;//a = a ^ b ^ a
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}      

int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;//short干掉2个字节
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}