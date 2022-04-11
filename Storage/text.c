#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//	for (i = 0; i <= 12; i++)//越界访问
//	{
//		arr[i] = 0;//x86环境下观测
//		//debug版本死循环
//		//release版本没有死循环
//		//表明release版本有优化 release版本将i的内存地址放在了arr下方
//		printf("hehe\n");
//	}
//	return 0;
//}

//整型家族
//char
//	unsigned char
//	signed char
//short 
//	unsigned short
//	signed short
//int
//	unsigned int
//	signed int
//long
//	unsigned long
//	signed long

//浮点数家族
//float 
//double

//构造类型(自定义类型)
//	数组
//	struct 结构体类型
//	enum	枚举
//	union 联合体
//指针类型
//空类型
//void
//函数返回类型 void test()
//函数参数	void test (void)
//指针 void* p;

//int main()
//{
//	int arr[10];
//	int arr2[5];
//	return 0;
//}

//int main()
//{
//	int a = -10; //f6 ff ff ff
//	//原码
//	//10000000000000000000000000001010
//	//反码
//	//11111111111111111111111111110101
//	//补码
//	//11111111111111111111111111110110  
//	//内存存的是二进制补码
//	return 0;
//}

//数据在内存中以2进制的形式存储
//对于整数来说:
//整数的二进制有3中表现形式:原码 反码 补码
//正整数:原码 反码 补码  相同
//负整数:如上

//大端小端        
//大端(存储)模式，是指数据低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中;
//小端(存储)模式，是指数据低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中;

//大端字节序和小端字节序
int main()
{
	int a = 1;
	return 0;
}