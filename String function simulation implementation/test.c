#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

#include <string.h>
#include <assert.h>

//���Ȳ������Ƶ��ַ�������

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
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1 ��Ŀ���ַ����е�\0
//	while (*dest)//������Ҫdestָ��'\0'λ�ã����*dest++��Ϊѭ��������destִ��'\0'������ֽ�
//	{
//		dest++;
//	}
//	
//	//2 ׷���ַ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
////int main()
////{
////	char arr1[20] = "123456";//׷��world
////	char arr2[] = "abcd";
////	my_strcat(arr1, arr2);//�ַ���׷��
////	printf("%s\n", arr1);
////	return 0;
////}
//
//int main()
//{
//	char arr[20] = "abcd";
//	my_strcat(arr, arr);//�޷���ӱ����ԭ����'\0'���ı���
//	printf("%s\n", arr);
//	return 0;
//}



//ģ��strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//����ѭ��˵��������Ϊ'\0'�ж�һ������
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
////Դ��
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
////	return ((-ret) < 0) - (ret < 0); // ���������ret > 0 �� ((-ret) < 0)Ϊ1  (ret < 0)Ϊ0
////}									//  ���ret < 0  �� ((-ret) < 0)Ϊ0  (ret < 0)Ϊ1
//									//  ret = 0   �� ((-ret) < 0)Ϊ1  (ret < 0)Ϊ1
//					
//int main()
//{
//	char* p = "obc";//strcmp�ȶ�ӦASCII��  
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


//���������Ƶ��ַ�������
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




//strstr ��һ���ַ���������һ���ַ���
//ģ��strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1; //����һ����ָ�뱣���ȥ��λ�ã�ָ���λ
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
//	//arr1�в����Ƿ����arr2����                      
//	char* ret =my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf(" �ҵ���:%s\n",ret);
//
//	}
//	return 0;
//}
// δ��ʹ��kmp�㷨ʵ��


//strtok //�и��ַ���
//int main()
//{
//	char arr[] = "zpw@btiedu.tech";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))//strtok���м��书��
//	{
//		printf("%s\n", ret);
//	}
//
//
//	//char* ret = NULL;
//	//ret = strtok(tmp, p);//strtok��ı��ַ������ݣ���Ҫ���ݸ���
//	//printf("%s\n", ret);
//	////zpw\0btiedu.tech\0
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////����һ�ε��õĿ�ָ�봦��ʼ����
//	////\0btiedu\0tech\0
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////\0tech\0
//
//
//	return 0;
//}

//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܣ����ô�����(ȫ�ִ���)
//int errno;//

//streror
//���ش������Ӧ�Ĵ�����Ϣ

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