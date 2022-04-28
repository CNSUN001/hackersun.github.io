#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


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

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	//这里还需要p指向的空间更大，需要20个int空间
	//realloc 调整空间
	realloc(p,20*sizeof(int));
	free(p);
	p = NULL;

	return 0;
}