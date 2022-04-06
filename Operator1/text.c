#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5位置为1
//	a = a | (1 << 4);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	printf("%d\n", a);
//	//把a的二进制中的第5位置为0
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//赋值操作符号(可以连等但不建议)  =   += -+ *= /= >>= <<= %= >>= <<= &= |= ^=
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//
//	a = a >> 3;//1
//	a >>= 3;
//	return 0;
//}

//单目操作符(只有一个操作数) ! - + & sizeof ~(二进制取反) -- ++  *
//int main()
//{
//	////!逻辑反操作
//	//int flag = 5;
//	//if (flag)//flag为真，打印hehe
//	//{
//	//	printf("hehe\n");
//	//}
//	//if (!flag)//flag为假，打印haha
//	//{
//	//	printf("haha\n");
//	//}
//	//int a = 10;
//	//a = -a;
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));// 2 sizeof内部表达式不参与计算
//	677printf("%d\n", s);// 5
//	//int a = 10;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof (arr));//单位字节
//	//printf("%d\n", sizeof (char [10]));//char[10]是arr数组的类型
//	//printf("%d\n",sizeof(a));//计算a所占空间的大小
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);//证明sizeof是一个操作符不是函数如果是函数()不能省略
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001-源码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	//~按位取反
//	int b = ~a;//00000000000000000000000000000000
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;
//	//int b = a--;
//	//int b = --a;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a); a=4//先自增再相加
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&-取地址操作符
//	int* pa = &a;//pa用来存放地址，pa就是指针变量
//	*pa = 20;//*-解引用操作符-间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//()强制类型转换
//	return 0;
//}


//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));//int*arr
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//char*ch
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//}

//关系操作符 > >= < <= != ==
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if (a != b)
//	//if (a > b)
//	//if (a < b)
//	//if (a <= b)
//	//{
//
//	//}
//	return 0;
//}
//比较2个字符串相等，不能使用 == 要用strcmp


//逻辑操作符 && ||
//int main()
//{
//	int a = 2;
//	int b = 0;
//	//if (a && b)
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&判断一个如果是假不会继续判断
//	i = a++ || ++b || d++;//||判断为真也不会继续
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//条件操作符(三目操作符)  ?  :
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//三目操作符号
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}


//,表达式
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//逗号表达式从左向右依次计算，但整个表达式的结果是最后一个表达式的结果
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);

	return 0;
}