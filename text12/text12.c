#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;//00000000000000000000000000000000
//	printf("%d\n", ~a);//'~按位取反，把所以二进制位中的所有数字取反
//						//11111111111111111111111111111111 整数在内存中存的是补码
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++ ，先++，后使用
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11
//
//	int a1= 10;
//	int b1= a++;//后置++,先使用，后++
//
//	printf("%d\n", b1);//11
//	printf("%d\n", a1);//10
//
//	int a2 = 1;
//	int b2 = (++a2) + (++a2) + (++a2);
//	printf("%d\n", b2);//不建议研究
//	printf("%d\n", a2);
//
//	return 0;
//}


//int main()
//
//{
//	//强制类型转换
//	int a = (int)3.14;//3.14是double类型转换到int会警告，这种方法可以强制转换解除警告
//	printf("%d\n", a);
//
//	return 0;
//
//}

//!=用于测试不相等   ==用于测试相等   &&逻辑与    ||逻辑或


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//
//
//	int a1 = 3;
//	int b1= 0;
//	int c1 = a1 && b1;
//	printf("%d\n", c1);
//
//	int a2 = 0;
//	int b2 = 5;
//	int c2 = a2 || b2;
//	printf("%d\n", c2);
//
//	int a3 = 0;
//	int b3 = 0;
//	int c3 = a3 || b3;
//	printf("%d\n", c3);
//
//	return 0;
//
//}

//条件操作符（三目操作符）  exp1 ? exp2: exp3 exp1
//exp1成立，exp2计算，整个结构表达式的结构是exp2的结果
//exp1不成立，exp3计算，整个结构表达式的结构是exp3的结果

//int main()
//{
//	int a = 0;
//	int b = 2;
//	int max = 0;
//	//if (a > b)
//	//max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;//exp1 ? exp2: exp3 exp1
//	printf("%d\n", max);
//
//
//	return 0;
//
//}


//逗号表达式，逗号隔开的一串表达式

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);//逗号表达式，从左向右以此计算，整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//
//	return 0;
//
//}


//下表引用、函数调用和结构成员


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//6   下表引用操作符
//
//	return 0;
//
//}



//int main()
//{
//	//调用函数的时候，函数后面的（）就是函数调用操作符
//	printf("\a");
//
//	return 0;
//
//}



//c语言提供的关键字
//1，c语言提供的，不能创建关键字
//2，变量名不能是关键字
//auto
//extern 是用来声明外部符合的 
// register 寄存器关键字
// 
//int main()
//{
//	auto int a = 10;//自动创建，自动销毁
//	//现在auto省略
//	//在新的c语言语法有其他用法
//
//signed 有符号的 10 -20
// unsigned 无符号的
// static静态的
// struct结构的
// union联合体
// void 无-空
// volatile c暂时不讲
// define include预处理指令，不是关键字
// 
//	return 0;
//}
//int main()
//{
//	//大量频繁被使用的数据，想放在寄存器中，提升效率
//	//register int num = 100;//建议num的值存放在寄存器中，现在意义不大。
//	//计算机中数据可以存储在 寄存器很小 高速缓存几十MB 内存16G 硬盘 1T      
//
//	
//
//	return 0;
//}


//typedef 类型重定义  
//typedef unsigned int uint; //类别大名张三，取个小名小三
//int main()
//{
//	unsigned int num = 100;
//	uint num2 = 100;//与上式一样
//
//	return 0;
//}

//static-静态的的
//1 static 修饰局部变量
//2 static 修饰全局变量
//3 static 修饰函数


//1 static 修饰局部变量
// void test()
//{
//	 static int a = 1;
//	 //static修饰局部变量，a出范围不销毁，即改变了局部变量的生命周期（本质改变了存储类型）
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//调用创建的text函数
//		i++;                                                       
//
//	}
//
//	return 0;
//}
//


//2 static 修饰全局变量
////extern声明外部符号，全局变量整个工程都可以使用
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	//static修饰全局变量。使得全局变量只能在自己所在的源文件内部可以使用其他不能使用
//	//全局变量在其他源文件内部可以别使用，是因为全局变量有外部链接属性，被static修饰之后就变成了内部链接属性，其他源文件就不能链接全局变量了！
//	return 0;
//}



//3 static 修饰函数
//声明函数
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum); 
//	//static 修饰函数 使得函数只能在自己所在源文件内部使用，不能在其他源文件内部使用
//	//本质上static是将函数的外部链接属性，变成内部链接属性 跟static修饰全局变量一样
//	return 0;
//}


//define 是预处理指令
//1 define定义符号

//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//
//}


//2 define 定义宏 重点
//#define add(x,y) x+y
//int main()
//{
//	printf("%d\n", 4*add(2, 3));//运算实际过程4*2+3=11，宏是完成替换的作用，所以在定义宏的时候要考虑运算顺序
//	return 0;
//}
#define add(x,y) ((x)+(y))
//int main()
//{
//	printf("%d\n", 4 * add(2 ,3));//得到20
//	return 0;
//}