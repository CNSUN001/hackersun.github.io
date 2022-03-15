#define _CRT_SECURE_NO_WARNINGS 1//解决scanf报错
#include <stdio.h>
//int a = 100;
//全局变量 {}外的变量
int main()
{
	//int age = 10;
	//double weight = 50;
	//age = age + 2;
	//weight = weight - 10;
	//printf("% d\n" , age);
	//printf("%lf\n", weight);
	////%d整型
	//%f float
	//%lf double
	
	//int a = 10;/*局部变量*/
	//printf("%d\n", a);//局部优先  不建议全局变量和局部变量名字一样

	//写代码求2个整数的和
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);//scanf函数是输入函数 &地址 scanf_s的函数是vs编译提供，不是c标准规定
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}