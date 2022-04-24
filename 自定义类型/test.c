#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体的声明


//创建类型
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//和b1 ，b2，b3都是结构体变量 b4, b5, b6（全局变量）
//
//int main()
//{
//	//（局部变量）
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//不完全声明
//匿名结构体类型（只能用一次）
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;//两个结构体会被当作不同结构
//	return 0;
//}


//结构体自引用
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};



//实现结构体自调用
//struct N
//{
//	int d;//4
//	struct N n;//死递归
//};
//
//int main()
//{
//	struct N sn;
//	return 0;
//}

//结构体自引用通过指针实现
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//结构体初始化
//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'x',20 };
//	struct B sb = { 3.14,{'w',100},'q' };
//	struct B* ps = &sb;
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	printf("%lf %c %d %c\n", ps->d, ps->s.c,ps->s.i, ps->c);
//
//	return 0;
//}


//结构体内存大小 计算
struct S
{
	int i;
	char c;
};
struct S2
{
	char c1;
	int i;
	char c2;
};
struct S3
{
	char c1;
	int i;
	double d;
};


//结构体内存对齐规则
//1 第一个成员在结构体变量偏移量为0的地址处。
//2 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数与该成员大小的较小值
//vs默认对齐数 - 8   Linux没有默认对齐数
//3 结构体的总大小为最大对齐数的整数倍
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//12
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s3));//16
	return 0;
}