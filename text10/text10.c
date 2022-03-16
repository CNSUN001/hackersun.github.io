#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;

	//数组 一组相同类型的元素集合
	//10个整形1-10存起来
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr[0]第一个元素 arr[1]第二个元素以此类推
	int i = 0;
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
		
	}

	//char ch[5] = { 'a','b','c' };//不完全初始化，剩下默认为0 f10调试查看

	return 0;
}