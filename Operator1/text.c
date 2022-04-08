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

//不使用第三个变量实现交换
//int main()
//{
//	//可能会溢出
//	int a = 3;
//	int b = 5;
//	//1//printf("a=%d b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a=%d b=%d\n", a, b);
//	//2
//	a = a ^ b; 0011^0101=0110
//	b = a ^ b; 0101^0110=0011
//	a = a ^ b; 0110^0011=0101
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
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式从左向右依次计算，但整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[]就是下标引用操作符
//	//[]的操作数是2个：arr,4
//	return 0;
//}

//函数的调用操作符
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//()函数的调用操作符
	//return 0;
//}


//结构成员访问操作符
// .
//->

//结构体
//int float char short double

// 书:书名，书号，定价
//人: 名字，年龄，性别


//创建了一个自定义的类型
//struct Book
//{
//	//结构体的成员()
//	char name[20];
//	char id[20];
//	int price;
//};
////.拿出结构体成员变量名.成员名
//int main()
//{
//	int num = 10;
//	//结构体变量名.成员名
//	struct Book b = { "C语言","C20220406",55 };
//	struct Book* pb=&b;
//	//结构体指针->成员名
//	printf("书名:%s\n", pb->name);
//	printf("书号:%s\n", pb->id);
//	printf("价格:%d\n", pb->price);
//	//printf("书名:%s\n", (*pb).name);
//	//printf("书号:%s\n", (*pb).id);
//	//printf("价格:%d\n", (*pb).price);
//	//printf("书名:%s 书号:%s 价格:%d\n", b.name, b.id, b.price);
//	//printf("书号:%s\n", b.id);
//	//printf("价格:%d\n", b.price);
//	return 0;
//}

//表达式求值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//	return 0;
//}
//整型提升 两个char类型相加 先转换成int 结果截断

//int main()
//{
//	char a = 3;//提升之后00000000000000000000000000000011  a-00000011
//	char b = 127;//提升之后00000000000000000000000001111111 b=01111111
//	char c = a + b;//提升补充符号位，无符号补0
//				//结果10000010 - c
//	//整型提升 整型提升11111111111111111111111110000010
//	//				   11111111111111111111111110000001
//	//				   10000000000000000000000001111110
//	//a和b都是char类型，没有达到int的大小
//	//这里就发生整型提升
//	printf("%d\n", c);//-126
//	return 0;
//		
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1  //%u 无符号10进制整数 
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));// gcc-4
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);//s没参与运算结果最后被截断
//	printf("%u\n", sizeof (s = a + 3));
//	a + b;//值属性，类型属性int
//	return 0;
//}

//算术转换  int > unsigned int > long int > unsigned long int > float > double > long double
//两个类型不相同发生算术转换 向范围大的转换

//操作符的属性
//复杂表达式的求值有3个1影响的因素
//1 操作符的优先级
//2 操作符的结合性质
//3 是否控制求值顺序 ， ||  &&

//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定计算顺序
//	int c = a + b + 7;//优先级不起作用结合性起作用
//	return 0;
//}

// 有问题的程序
//1 //int fun()
//{
//	static int count = 1;//static不会销毁
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
////}

//2 
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//} //vs 12  // gcc -10