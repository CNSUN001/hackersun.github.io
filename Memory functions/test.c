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
void* my_memcpy(void* dest, const void* src, size_t size)//void* 不能直接解引用
{
	assert(dest && src);
	void* ret = dest;
	while (size--)
	{
		*((char*)dest)++ = *((char*)src)++;
		//*(char*)dest = *(char*)src;
		//dest = (char*)dest + 1;
		//src = (char*)src + 1;
		
	}
	return ret;
}
//memcpy 内存拷贝函数
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };//strcpy只能接受字符指针，这时需要拷贝内存
	my_memcpy(arr2, arr1, 20);//20 - 字节数
	return 0;
}
