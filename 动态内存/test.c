#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//���ﻹ��Ҫpָ��Ŀռ������Ҫ20��int�ռ�
//	//realloc �����ռ�
//	//int*ptr =(int*) realloc(p,2000 *sizeof(int));//�������ռ䲻���������ڴ������ҿռ䣬Ȼ���֮ǰ���ݿ�������󷵻غ����ĵ�ַ��֮ǰ������free����
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	//������Ҳ����ռ�᷵��NULL��
//	//���Բ�Ҫ��p�����գ����ܰ�ԭָ��NULL
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc Ҳ��ʵ��malloc��Ч��

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//�൱���ڶ�������40���ֽ�
//	return;
//}


//��̬�ڴ濪�ٳ����Ĵ���

// 1. ��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(1000000000000000);
//	//��malloc�����ķ���ֵ���ж�
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//2. �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//Խ�����
//	for (i = 0; i <= 40; i++)
//	{
//		*(p + i) = i; 
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. ʹ��free�ͷŷǶ�̬���ٵĿռ�                                                               
//int main()
//{
//	int arr[10] = { 0 }; //ջ��
//	int* p = arr;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. ʹ��free�ͷŷ�̬�����ڴ��һ����
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;//���׶�����ʼ�㣬���պܴ������ڴ�й¶
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5. ��ͬһ�鶯̬���ٵĿռ䣬����ͷ�  ����Ҫfree��֮��ָ����Ϊ��
//int main()
//{
//	int* p = (int*)malloc(100);
//	//�ͷ�
//	free(p);
//	p = NULL;
//	//�ٴ��ͷ�
//	free(p);
//	return 0;
//}

//6. ��̬�ڴ������ͷ�
//void test() //�ڴ�й¶
//{
//	int* p = (int*)malloc(100);//��̬���ٵĿռ� 2�ֻ��շ�ʽ 1 ����free��2 �������
//	if (p == NULL)
//	{
//		return;
//	}
//}
//int main()     
//{
//	test();
//	return 0;
//}


//1 ���н��
//str����GetMemory������ʱ����ֵ���ݣ����Ժ����ڲ����β�p��str��һ����ʱ����
//��GetMemory�����ڲ���̬����ռ�ĵ�ַ�������p�У�����Ӱ����ߵ�str�����Ե���������֮��
//str��Ȼ�ǿ�ָ�룬����strcpy��ʧ��

//��GetMemory��������֮���β�p���٣�ʹ�ö�̬���ٵ�100���ֽ��ڴ�й¶���޷��ͷ�

//void GetMemory(char* p)  //���Ը�����c++���
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2
//GetMemory �����ڲ�������������ջ������
//���˺�����p����Ŀռ�ͻ����˲���ϵͳ
//���صĵ�ַ��û��ʵ������ģ����ͨ�����صĵ�ַ��ȡ�����ڴ���ǷǷ������ڴ�

//char* GetMemory(void)
//{
//	 char p[] = "hello world";
//	return p;//�뿪����p��ջ�������Ѿ���������
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�޸�
//char* GetMemory(void)
//{
//	static char p[] = "hello world"; 
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//3
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//�Ѿ��ͷ����ٷ��ʣ��Ƿ����� free��Ҫ��NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}


//5
//int* f1(void)
//{
//	int x =10;
//	return (&x);//�뿪����x�Ѿ��ֲ�����������
//}

//6
//int* f2(void)
//int* f2(void)
//{
//	int* ptr;//Ұָ�� ָ��û�г�ʼ��
//	*ptr = 10;
//	return ptr;
//}