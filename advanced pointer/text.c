#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//�ַ�ָ�뻹����ָ���ַ���
//int main()
//{
//	char* pc = "hello bit";//���ַ��ĵ�ַ����pc
//	char arr[] = "hello bit";
//	//*pc = 'w';//�ᱨ�������ַ��������޸�
//	arr[0] = 'w';
//	printf("%c\n", *pc);//%cֻ�����һ���ַ�
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";//�����ַ���(ֻ����һ��)
//	const char* str4 = "hello bit.";//�����ַ���
//	if (str1 == str2)//str1��str2�Ǵ����˲�ͬ������ռ�
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)//��ֻ��ָ�������ַ��ĵ�ַ
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//ָ������
//int main()
//{
//	//ָ������
//	//����-�����д�ŵ���ָ��(��ַ)
//	//int* arr[3];//�������ָ�������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ",*(arr[i] + j));
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(*(arr + i) + j));
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//����ָ��
//��һ��ָ�� - ��ָ�������ָ��
//��һ��ָ��
//����ָ�� - ��ָ�������ָ��
// int* p;
//�ַ�ָ�� - ��ָ���ַ���ָ��
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//ȡ����������ָ��
//	//parr ����һ������ָ��-��ŵ��������ָ��
//	//arr //arr - ����������Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;//+1����һ������
//	int(*p2)[10] = &arr;//+1����һ������
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}