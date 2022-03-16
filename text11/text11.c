#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//float a = 9 / 2.0;//不加小数点默认整数
//	//printf(" % f\n", a);
//
//	//int b = 9 % 2;//取余数
//	//printf(" % d\n", b);
//
//
//
//	return 0;
//
//}

//<<二进制左移，>>二进制右移
//int main()
//{
//	int a = 2;//00000000000000000000000000000010
//	int b = a << 2;//00000000000000000000000000001000
//	printf("%d\n", b);//<<移动的是二进制
//
//	return 0;
//
//}

//位操作符 &按位与 |按位或 ^按位异或



//赋值操作符 
//int main()
//{
//	int a = 2;
//	a = a + 5;//a+=5;
//	a = a - 3;//a-=3;
//	a = a % 3;//a%=3;
//
//
//	printf("%d\n", b);
//
//	return 0;

//}


// a+b +有两个操作数，所以+是双目操作符 单目操作符 只有一个操作数
//
//int main()
//{
//	
//	int a = 0;
	//printf("%d\n", !a);//!表示a的逻辑反操作
	//if (a)
	//{
	//	//如果a为真，操作
	//}

	//if (!a)
	//{
	//	//如果a为假，操作
	//}

	//a = -5;
	//a = -a;
	//a = +a;


//	return 0;
//}


	//int main()
	//{
	//	//size of是一个计算类型或者变量大小的操作符
	//	//操作符函数可以省略
	//	int a = 10;
	//	printf("%d\n", sizeof(int));
	//	printf("%d\n", sizeof(a));

	//	return 0;
	//}


int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算数组总大小单位是字节
	printf("%d\n", sizeof((arr[0])));
	int size = sizeof(arr) / sizeof(arr[0]);//数组元素个数
	printf("%d\n", size);


	return 0;
}