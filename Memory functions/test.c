#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	//0 "no error"
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <ctype.h>//字符函数
//int main()
//{
//	char ch = 'w';
//	//isdigit 如果是数字字符返回非0，如果不是数字字符，返回0
//	//int ret = isdigit(ch);
//
//	int ret = islower(ch);
//	//islower 如果是小写字符返回非0，如果不是小写字符，返回0
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr); 
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//memory functions内存函数
//memcpy
//memmove
//memmcmp
//memset


//模拟实现memcpy 
#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t size)//void* 不能直接解引用
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (size--)
//	{
//		//*((char*)dest)++ = *((char*)src)++;
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
////memcpy 内存拷贝函数  应该拷贝不重叠的内存，内存重叠会出现先覆盖在拷贝
////memmove 可以处理呢次重叠的情况
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[20] = { 0 };//strcpy只能接受字符指针，这时需要拷贝内存
//	//my_memcpy(arr2, arr1, 20);//20 - 字节数
//	my_memcpy(arr1 + 2, arr1, 20);// 1 2 1 2 1 2 1 8 9 10
//	return 0;
//}


//memmove 可以处理内存重叠的情况

//模拟实现memmove   分情况有些情况从前向后拷贝，有些情况可以从后向前拷贝
//void* my_memmove(void* dest, const void* src, size_t size)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//从前往后
//	{
//		while (size--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//从后往前
//	{
//		while (size--)//进入循环之后已经-1。
//		{
//			*((char*)dest + size) = *((char*)src + size);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr1 , arr1+2, 20);
//	//my_memmove(arr1 + 2 , arr1, 20);
//	memcpy(arr1 + 2, arr1, 20);
//	return 0;
//}
//memcpy - 只要实现了不重叠拷贝就可以，而vs中的实现，即可以拷贝重叠，也可以拷贝不重叠


//memcmp - 内存比较

//返回值和strcmp设置一样
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//以字节为单位设置内存
	return 0;
}












