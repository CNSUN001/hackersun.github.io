#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//��̬�ڴ濪��  �ڶ���
//malloc calloc
//free
//realloc

// void* malloc(size_t size);size//���ٵ��ֽ���   
//void*���ص��ǿ��ٿռ䴦��ָ�룬���û�п��ÿռ䷵�ؿ�ָ��


//malloc free

//int main()
//{
//	//int arr[10];//ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));//ջ��     
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		// printf + strerror
//		perror("main");//main: xxxxxxxx
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] == *(p+i)
//	}
//	//���տռ�
//	free(p);//ֻ���ͷŶ�̬���ٵĿռ�
//	p = NULL;//�Լ����ְ�p��Ϊ��ָ���ֹԽ�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//err
//	return 0;
//}



//calloc ���ʼ���ڴ�Ϊ0

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//	return 1;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", p[i]);
//	//}
//	//free(p);
//	//p = NULL;
//
//	int* p = (int*)calloc(10, sizeof(int));//���ʼ��,������malloc��ͬ
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}
	//���ﻹ��Ҫpָ��Ŀռ������Ҫ20��int�ռ�
	//realloc �����ռ�
	realloc(p,20*sizeof(int));
	free(p);
	p = NULL;

	return 0;
}