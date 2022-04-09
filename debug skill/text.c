#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)//F5启动调试(跳过正确的代码)	F9设置断点
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
//debug 版本 包含调试信息，并且不作任何优化，便于程序员调试
//release 发布版本 进行了各种优化 大小和运行速度都是最优的

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//		return 0;
//}
//Call Stack反应函数调用逻辑

//调试实例1 1!+2!+3!....+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 3;
//	//scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int j = 1;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//调试发现，ret没初始化
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//调试心里要有预期。 发现不符合预期往往就是问题所在

//实例二
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//数组越界在合适的情况下就会访问到i
//	{
//		arr[i] = 0;
//		printf("hehe\n");//调试发现arr[12]是i变成了0  i的地址和arr[12]地址是一样的 
//	}
//	//运行的结果是什么? 一直死循环(程序停不下来，报不了错)
//	//1 i 和arr是局部变量 放在栈区上的
//	// 栈区内存的使用习惯:先使用高地址空间，再使用低地址空间
//	//2 数组随地址增长是有低到高变化的
//
//	//空了两个整型是编译器的巧合
//	//vc 6.0环境 - 0个整型
//	//gcc -1个整型
//	//vs环境 -2个整型
//	return 0;
//}


//预防发生错误
//通过编码的技巧,减少错误

//常见的coding技巧
//1 使用assert
//2 尽量使用const
//3 养成良好的编码风格
//4 添加必要的注释
//5 避免编码陷阱


//模拟实现strcpy
//strcpy-字符串拷贝
//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{
//		*dest  = *src ;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++  = *src++ ;
//	}
//	*dest = *src;
//}
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言 如果为真什么都不发生，如果为假报错
//	assert(dest != NULL);//断言 
//	while ( *dest++  = *src++ )//既拷贝了'\0'又使得循环停止
//	{
//		;
//	}
//}
//int main()
//{
//	char arr[20] = "xxxxxxxxxx";
//	char arr1[] = "hello";
//	my_strcpy(arr,arr1);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	//1
//	//int num = 10;
//	//int*p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//2
//	//const 修饰变量，这个变量就被成为常变量，不能被修改，但是本质是变量 
//	const int num = 10;
//	//const int * p = &num;
//	 int* const p = &num;
//	//p = &20;
//	//const 修饰指针变量 
//	//const 如果放在*左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	//但是指针变量本身是可以修改的
//	// const 如果放在*右边边，修饰的是指针变量p，表示指针变量不能改变，指向的内容可以改变
//	//*p = 20;//指针可以强改常变量
//	int** pp = &p;
//	**pp = 20;
//	printf("%d\n", num);
//	return 0;
//}    

