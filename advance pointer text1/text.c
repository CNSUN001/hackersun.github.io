#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16  sizeof(������)-������������Ĵ�С &������-��ʾȡ����������ĵ�ַ  ��������������������Ԫ�ش�С
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8  //&a��Ȼ������ĵ�ַ������Ҳ�ǵ�ַ��sizeof�������һ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*&a));//16
//	// int(*p)[4] = &a;
//	printf("%d\n", sizeof(&a + 1));//4/8 //���������ĵ�ַ - Ұָ��
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 a[1]�ĵ�ַ
//
//
//	return 0;
//}

//�ַ�����1
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//���
//	printf("%d\n", strlen(arr + 0));//���
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	return 0;
//}


//�ַ�����2
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//�ַ�����3
int main()
{
	char* p = "abcdef";
	//char(*p1)[7]="abcdef";
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 0));//4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(*p1));//7
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1)); //4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8


	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1)); //���ֵ (�������ֵû����ϵ����Ϊ��ȷ��p�ڲ������ڴ�)
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}