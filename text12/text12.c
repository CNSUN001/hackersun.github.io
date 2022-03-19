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
int main()
{
	//大量频繁被使用的数据，想放在寄存器中，提升效率
	//register int num = 100;//建议num的值存放在寄存器中，现在意义不大。
	//计算机中数据可以存储在 寄存器很小 高速缓存几十MB 内存16G 硬盘 1T      

	

	return 0;
}