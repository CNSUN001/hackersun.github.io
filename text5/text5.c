#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 10000
//性比
enum Sex//枚举
{
	male=3,
	female,
	secret

};


int main()
{
	///1 字面常量
	//	3.14;
	//10;
	//'a';
	//'abcdef';
	
	//2.const 修饰的常变量
	//const int num = 10;//const修饰num之后num就不可以修改，此时num是常变量，本质依然是变量
	//num = 20;
	//printf("num=%d\n", num);
	//int arr[10] = { 0 };//10个元素
	//const int n = 10;
	//int arr2[n] = {0};//n是常变量，该数组不成立

	//3.#define定义的标识符常量
	//MAX = 20000; MAX被define所以此时不可以修改
	//int n = MAX;

	//printf("n=%d\n",n);

	//4 枚举常量
	//可以一一列举的常量
	enum Sex s = male;
	///male = 3;不可以修改
	printf("%d\n",male);
	printf("%d\n", female);
	printf("%d\n",secret);//枚举常量默认值从0开始
	return 0;
}