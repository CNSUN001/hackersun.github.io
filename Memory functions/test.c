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

#include <ctype.h>//�ַ�����
//int main()
//{
//	char ch = 'w';
//	//isdigit ����������ַ����ط�0��������������ַ�������0
//	//int ret = isdigit(ch);
//
//	int ret = islower(ch);
//	//islower �����Сд�ַ����ط�0���������Сд�ַ�������0
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


//memory functions�ڴ溯��
//memcpy
//memmove
//memmcmp
//memset


//ģ��ʵ��memcpy 
#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t size)//void* ����ֱ�ӽ�����
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
////memcpy �ڴ濽������  Ӧ�ÿ������ص����ڴ棬�ڴ��ص�������ȸ����ڿ���
////memmove ���Դ����ش��ص������
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[20] = { 0 };//strcpyֻ�ܽ����ַ�ָ�룬��ʱ��Ҫ�����ڴ�
//	//my_memcpy(arr2, arr1, 20);//20 - �ֽ���
//	my_memcpy(arr1 + 2, arr1, 20);// 1 2 1 2 1 2 1 8 9 10
//	return 0;
//}


//memmove ���Դ����ڴ��ص������

//ģ��ʵ��memmove   �������Щ�����ǰ��󿽱�����Щ������ԴӺ���ǰ����
//void* my_memmove(void* dest, const void* src, size_t size)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//��ǰ����
//	{
//		while (size--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//�Ӻ���ǰ
//	{
//		while (size--)//����ѭ��֮���Ѿ�-1��
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
//memcpy - ֻҪʵ���˲��ص������Ϳ��ԣ���vs�е�ʵ�֣������Կ����ص���Ҳ���Կ������ص�


//memcmp - �ڴ�Ƚ�

//����ֵ��strcmp����һ��
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
	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ�
	return 0;
}












