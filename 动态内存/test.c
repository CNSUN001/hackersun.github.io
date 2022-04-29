#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//动态内存开辟  在堆区
//malloc calloc
//free
//realloc

// void* malloc(size_t size);size//开辟的字节数   
//void*返回的是开辟空间处的指针，如果没有可用空间返回空指针


//malloc free

//int main()
//{
//	//int arr[10];//栈区
//	//动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));//栈区     
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		// printf + strerror
//		perror("main");//main: xxxxxxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] == *(p+i)
//	}
//	//回收空间
//	free(p);//只能释放动态开辟的空间
//	p = NULL;//自己动手把p置为空指针防止越界访问
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//err
//	return 0;
//}



//calloc 会初始化内存为0

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//	return 1;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", p[i]);
//	//}
//	//free(p);
//	//p = NULL;
//
//	int* p = (int*)calloc(10, sizeof(int));//会初始化,参数和malloc不同
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//这里还需要p指向的空间更大，需要20个int空间
//	//realloc 调整空间
//	//int*ptr =(int*) realloc(p,2000 *sizeof(int));//如果后面空间不够，会在内存重新找空间，然后把之前数据拷贝，最后返回后来的地址，之前的数据free掉。
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	//如果都找不到空间会返回NULL。
//	//所以不要用p来接收，可能把原指针NULL
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc 也能实现malloc的效果

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//相当于在堆区开辟40个字节
//	return;
//}


//动态内存开辟常见的错误

// 1. 对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(1000000000000000);
//	//对malloc函数的返回值做判断
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//2. 对动态开辟空间的越界访问
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//越界访问
//	for (i = 0; i <= 40; i++)
//	{
//		*(p + i) = i; 
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. 使用free释放非动态开辟的空间                                                               
//int main()
//{
//	int arr[10] = { 0 }; //栈区
//	int* p = arr;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. 使用free释放非态开辟内存的一部分
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;//容易丢掉起始点，风险很大，容易内存泄露
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5. 对同一块动态开辟的空间，多次释放  所以要free完之后指针置为空
//int main()
//{
//	int* p = (int*)malloc(100);
//	//释放
//	free(p);
//	p = NULL;
//	//再次释放
//	free(p);
//	return 0;
//}

//6. 动态内存忘记释放
//void test() //内存泄露
//{
//	int* p = (int*)malloc(100);//动态开辟的空间 2种回收方式 1 主动free，2 程序结束
//	if (p == NULL)
//	{
//		return;
//	}
//}
//int main()     
//{
//	test();
//	return 0;
//}


//1 运行结果
//str传给GetMemory函数的时候是值传递，所以函数内部的形参p是str的一份临时拷贝
//在GetMemory函数内部动态申请空间的地址，存放在p中，不会影响外边的str，所以当函数返回之后
//str依然是空指针，所以strcpy会失败

//当GetMemory函数返回之后，形参p销毁，使得动态开辟的100个字节内存泄露，无法释放

//void GetMemory(char* p)  //出自高质量c++编程
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2
//GetMemory 函数内部创建的数组在栈区创建
//出了函数，p数组的空间就还给了操作系统
//返回的地址是没有实际意义的，如果通过返回的地址，取访问内存就是非法访问内存

//char* GetMemory(void)
//{
//	 char p[] = "hello world";
//	return p;//离开函数p的栈区内容已经被销毁了
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//修改
//char* GetMemory(void)
//{
//	static char p[] = "hello world"; 
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//3
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//已经释放了再访问，非法访问 free后要接NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}


//5
//int* f1(void)
//{
//	int x =10;
//	return (&x);//离开函数x已经局部变量被销毁
//}

//6
//int* f2(void)
//int* f2(void)
//{
//	int* ptr;//野指针 指针没有初始化
//	*ptr = 10;
//	return ptr;
//}