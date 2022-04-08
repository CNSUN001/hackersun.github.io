#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < sz; i++)//F5启动调试(跳过正确的代码)	F9设置断点
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
//debug 版本 包含调试信息，并且不作任何优化，便于程序员调试
//release 发布版本 进行了各种优化 大小和运行速度都是最优的
