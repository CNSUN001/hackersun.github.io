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
//struct S//8
//{
//	int i;
//	char c;
//};
//struct S2//12
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S3//16
//{
//	char c1;
//	int i;
//	double d;
//};
////struct S4//8
////{
////	char c1;
////	char c2;
////	int i;
////};
//struct S4 //16
//{
//	double d;
//	char c;
//	int i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;//16
//	double d;
//};
//
////结构体内存对齐规则
////1 第一个成员在结构体变量偏移量为0的地址处。
////2 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
////对齐数 = 编译器默认的一个对齐数与该成员大小的较小值
////vs默认对齐数 - 8   Linux没有默认对齐数
////3 结构体的总大小为最大对齐数的整数倍
////4 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//8
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//16
//	struct S5 s5 = { 0 };//s4最大对齐数是8所以要从8开始放
//	printf("%d\n", sizeof(s5));//32
//	return 0;
//}


//为什么存在内存对齐
//1 平台移植  不是所有的硬件平台都能访问任意地址上的任意数据；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//2 性能原因  数据结构（尤其是栈）应该尽可能地在自然边界上对齐。原因在于未对齐的内存处理器访问两次，而对齐的内存访问仅需要一次时间
//总的来说 就是拿空间换时间


//所以在设计结构体的时候，我们既要满足对齐，又要节省空间 
//1 让空间小的集中在一起
//struct S4//8
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S2//12
//{
//	char c1;
//	int i;
//	char c2;
//};
//2 修改默认对齐数

//把默认对齐数改为2;
//#pragma pack(2) //8 默认对齐数限制了最大对齐数
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()

//#pragma pack(1)//6
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
// }
                  

//offsetof (type,member)//计算起始位置偏移量  (宏)
#include <stddef.h>

//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    printf("%d\n", offsetof(struct S, c1));
//    printf("%d\n", offsetof(struct S, i));
//    printf("%d\n", offsetof(struct S, c2));
//    return 0; 
//}


//struct S
//{
//    int data[1000];
//    int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
////结构体传参
//void print1(struct S s)//效率低，无法直接改变主函数数据，不灵活
//{
//    printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)//地址传参节省空间
//{
//    printf("%d\n", ps->num);
//}
//int main()
//{
//    print1(s);//传结构体
//    print2(&s);//传地址
//    return 0;
//}


//位段
//C语言中的：位段

//什么是位段
//位段的声明和结构体类似，有两个不同：
//1 位段的成员必须是int unsigned int 或 signed int char也可以（整型家族）
//2 位段的成员后边有一个冒号和一个数字
//3 位段涉及很多不确定因素，位段是不跨平台的，可移植程序应该尽量避免使用位段。

//位段内存分配 按4字节(int)或者1字节开辟(char)

//性别 - 3  两个bit位可以解决
//00 男
//01 女
//10 保密
//11

struct A
{
    //4个字节 - 32bit
    int _a : 2;// _a占2个bit位
    int _b : 5;// _b占5个bit位
    int _c : 10;// _c占10个bit位
    //15
    //4个字节 - 32bit
    int _d : 30;// _d占30给bit位
};

int main()
{
    printf("%d\n", sizeof(struct A));//8
    return 0;
}