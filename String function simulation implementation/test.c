#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

#include <string.h>
#include <assert.h>

//长度不受限制的字符串函数

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
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1 找目标字符串中的\0
//	while (*dest)//由于需要dest指向'\0'位置，如果*dest++作为循环条件，dest执行'\0'后面的字节
//	{
//		dest++;
//	}
//	
//	//2 追加字符串
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
////int main()
////{
////	char arr1[20] = "123456";//追加world
////	char arr2[] = "abcd";
////	my_strcat(arr1, arr2);//字符串追加
////	printf("%s\n", arr1);
////	return 0;
////}
//
//int main()
//{
//	char arr[20] = "abcd";
//	my_strcat(arr, arr);//无法添加本身的原因是'\0'被改变了
//	printf("%s\n", arr);
//	return 0;
//}



//模拟strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//进入循环说明两个都为'\0'判断一个就行
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//	//return *str1 -*str2
//}
//
////源码
////int __cdecl strcmp(
////	const char* src,
////	const char* dst
////)
////{
////	int ret = 0;
////
////	while ((ret = *(unsigned char*)src - *(unsigned char*)dst) == 0 && *dst)
////	{
////		++src, ++dst;
////	}
////
////	return ((-ret) < 0) - (ret < 0); // 很巧妙如果ret > 0 则 ((-ret) < 0)为1  (ret < 0)为0
////}									//  如果ret < 0  则 ((-ret) < 0)为0  (ret < 0)为1
//									//  ret = 0   则 ((-ret) < 0)为1  (ret < 0)为1
//					
//int main()
//{
//	char* p = "obc";//strcmp比对应ASCII码  
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//		if (ret > 0)
//		{
//			printf("p > q\n");
//		}
//		else if (ret < 0)
//		{
//			printf("p < q\n");
//		}
//		else
//			printf("p == q\n");
//	//int ret = strcmp("abbb", "abq");
//	//int ret = strcmp("aqqq", "abq");
//	//int ret = strcmp("abq", "abq");
//	//printf("%d ", ret);
//	return 0;
//}


//长度受限制的字符串函数
//strncpy
//strncat
//strncmp


//my_strncpy
//char* my_strncpy(char* dest, const char* src, int count)
//{
//	char* start = *dest;
//	while (count &&( * dest++ = *src++))
//	{
//		count--;
//	}
//	if(count)
//		while (--count)
//			*dest++ = '\0';
//	return(start);
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qw";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);//qwcdef
//	return 0;
//}


//strncat
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcdqwert";
//	int ret = strncmp(p, q, 4);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr 在一个字符串里找另一个字符串
//模拟strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1; //建立一个新指针保存过去的位置，指针回位
// 
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (* s1 == *s2))
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbcdefabcdef";
//	char arr2[] = "bcd";
//	//arr1中查找是否包含arr2数组                      
//	char* ret =my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf(" 找到了:%s\n",ret);
//
//	}
//	return 0;
//}
// 未来使用kmp算法实现


//strtok //切割字符串
//int main()
//{
//	char arr[] = "zpw@btiedu.tech";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))//strtok具有记忆功能
//	{
//		printf("%s\n", ret);
//	}
//
//
//	//char* ret = NULL;
//	//ret = strtok(tmp, p);//strtok会改变字符串内容，需要传递副本
//	//printf("%s\n", ret);
//	////zpw\0btiedu.tech\0
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////从上一次调用的空指针处开始查找
//	////\0btiedu\0tech\0
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////\0tech\0
//
//
//	return 0;
//}

//使用库函数的时候
//调用库函数失败，设置错误码(全局错误)
//int errno;//

//streror
//返回错误码对应的错误信息

#include <errno.h>
int main()
{
	//printf("%s\n", strerror(0)); //No error
	//printf("%s\n", strerror(1)); //Operation not permitted
	//printf("%s\n", strerror(2)); //No such file or directory
	//printf("%s\n", strerror(3)); //No such process
	//printf("%s\n", strerror(4)); //Interrupted function call
	//printf("%s\n", strerror(5)); //Input / output error

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}