#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

#include <string.h>
#include <assert.h>


//ģ��ʵ��strlen

//1 �������汾
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
//2 �ݹ�ʵ��
//int  my_strlen(const char* str)
//{
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//3 ˫ָ��
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
//		printf(">\n");//strlen����ֵ���޷�������unsigned int
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//ģ��strcpy
//char* my_strcpy(char* dest,const char* src)
//{
//  char* ret = dest;
//	assert(dest);
//	assert(src);
//	while(*dest++ = *src++);
//  return ret;//������ʼ��ַ
//}
//int main()
//{
//	//char arr[20] = { 0 };
//	//char arr2[] = { 'a','b','c' };//ԭ�ַ���û'\0'�����ҵ�
//	//my_strcpy( arr,"hello" );//hello���ε���h�ĵ�ַ
//	//my_strcpy(arr, arr2);
//	//char arr[5] = { 0 };
//	//char* p = "hello word";
//	//my_strcpy(arr, p);
//	//printf("%s", arr);//�ռ䲻��Ҳ��ֱ�ӱ���
//
//	char* str = "xxxxxxxxxxxxxxxx";//�ַ�����������޸�
//	char* p = "hello world";
//	my_strcpy(str, p);
//	printf("%s", str);
//	return 0;
//}

//ģ��strcat
//char* my_strcat(char* dest, const char* src)//��Ҫʹ��string����
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
//�Ż�
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
	//1 ��Ŀ���ַ����е�\0
	while (*dest)//������Ҫdestָ��'\0'λ�ã����*dest++��Ϊѭ��������destִ��'\0'������ֽ�
	{
		dest++;
	}
	
	//2 ׷���ַ���
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "123456";//׷��world
	char arr2[] = "abcd";
	my_strcat(arr1, arr2);//�ַ���׷��
	printf("%s\n", arr1);
	return 0;
}