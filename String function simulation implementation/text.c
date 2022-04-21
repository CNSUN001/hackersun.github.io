#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

#include <string.h>
#include <assert.h>


//模拟实现strlen

//1 计数器版本
//int  my_strlen(const char* str)
//{
//	assert(str);
//	int ret = 0;
//	while (*str++)
//	{
//		ret++;
//	}
//	return ret;
//}
//2 递归实现
//int  my_strlen(const char* str)
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//3 双指针
//int  my_strlen(const char* str)
//{
//	assert(str);
//	int* st = str;
//	while (*str++);
//	return str - st - 1;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");//strlen返回值是无符号整型unsigned int
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//模拟strcpy
//char* my_strcpy(char* dest,const char* src)
//{
//  char* ret = dest;
//	assert(dest);
//	assert(src);
//	while(*dest++ = *src++);
//  return ret;//返回起始地址
//}
//int main()
//{
//	//char arr[20] = { 0 };
//	//char arr2[] = { 'a','b','c' };//原字符串没'\0'程序会挂掉
//	//my_strcpy( arr,"hello" );//hello传参的是h的地址
//	//my_strcpy(arr, arr2);
//	//char arr[5] = { 0 };
//	//char* p = "hello word";
//	//my_strcpy(arr, p);
//	//printf("%s", arr);//空间不够也会直接报错
//
//	char* str = "xxxxxxxxxxxxxxxx";//字符串必须可以修改
//	char* p = "hello world";
//	my_strcpy(str, p);
//	printf("%s", str);
//	return 0;
//}

//模拟strcat
//char* my_strcat(char* dest, const char* src)//不要使用string函数
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	int len = strlen(dest);
//	char* destlen = dest + len;
//	while (*src != 0)
//	{
//		*(destlen) = *src;
//		destlen++;
//		src++;
//	}
//	*destlen = *src;
//	return ret;
//}
//优化
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//	int len = strlen(dest);
//	char* destlen = dest + len;
//	while (*destlen++ = *src++);
//	return ret;
//}
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1 找目标字符串中的\0
	while (*dest)//由于需要dest指向'\0'位置，如果*dest++作为循环条件，dest执行'\0'后面的字节
	{
		dest++;
	}
	
	//2 追加字符串
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "123456";//追加world
	char arr2[] = "abcd";
	my_strcat(arr1, arr2);//字符串追加
	printf("%s\n", arr1);
	return 0;
}