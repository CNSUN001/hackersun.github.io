#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//f(x)=2*x+1
//�⺯��
//strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);
//
//	return 0;
//}
//memset
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//�Զ��庯��

//�ú��������ֵ
//int get_max(int x, int y)
//{
//	int z = 0;
//	z = ((x < y) ? y : x);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//дһ����������������������
//void��ʾ��������Ҫ����

//������������ֻ�Ǻ����ڲ����н������漰�������Ǵ����
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ�����������������ͱ���
//	printf("%d %d\n", a, b);
//	Swap1(a , b);//��ֵ����
//	printf("%d %d\n", a, b);
//	
//	return 0;
//}

//ͨ������ָ����Խ��
//void Swap2(int* pa, int* pb)//��ʽ���� ֻ���ڵ��õ���һ˲��ŻῪ�ٿռ�
//
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	//дһ�����������������ͱ���
//	Swap2(&a ,&b);//ʵ�ʲ���  ���Դ��ݱ��� ���� ���ʽ ���� //��ַ����
//	printf("%d %d\n", a, b);
//	return 0;
//}


//�ж�����

//#include <math.h>
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
////100-200����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i<=200 ;i++)
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	printf("\n%d ", count);
//	return 0;
//}



//�ж�1000-2000����
//int is_lear_year(int x)
//{
//	if (x % 4 == 0)
//	{
//		if (x % 100 != 0)
//		{
//			return 1; //error����д��1600����ֱ��return0��
//		}
//		else
//			return 0;
//	}
//	else if (x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}

//��д��������Ĭ��int
//int is_lear_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int is_lear_year(int x)
//{
//	return((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000;y++ )
//	{
//		if (is_lear_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}


//���ַ�
//int binary_search(int arr[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����ҵ��˵��±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d\n",ret);
//
//	}
//	return 0;
//}

//int binary_search(int arr[], int k)//error //�൱�ڴ��ݵ���ָ��
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����arr����,ʵ�ʴ��ݵĲ������鱾��
//	//��������ȥ��������Ԫ�صĵ�ַ
//
//	int key = 7;
//	int ret = binary_search(arr, key);
//	if (-1 == ret )
//	{
//		printf("�Ҳ��� \n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(* p)++;//���ں����ڲ��ı��ⲿ�����������벻��ָ��
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����
//void text1()
//{
//	printf("hehe\n");
//}
//int text()
//{
//	text1();
//	return 0;
//}
//int main()
//{
//	text();
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	////char arr[] = "abc";
//	////int len = strlen(arr);
//	////printf("%d\n", len);
//	////strlen�ķ���ֱֵ�ӽ���printf������Ҳ����ʽ����
//	////printf("%d\n", strlen(arr));
//	//char arr[20] = { 0 };
//	//char arr2[] = "bit";
//	//strcpy(arr, arr2);
//	//printf("%s\n", arr);
//	//printf("%s\n", strcpy(arr, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf����ֵ�Ǵ�ӡ����Ļ�ϵĸ��������Խ����4321
//	return 0;
//}

//�����������Ͷ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����������
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}


//���������������ڴ󹤳����ͷ�ļ������
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	int d = Sub(a, b);	
//	printf("%d\n", d);
//
//	return 0;
//}

#include "sub.h"
//���뾲̬��
#pragma comment(lib,"sub.lib")
//ʵ�ִ�������

int main()
{
	int a = 10;
	int b = 20;
	int c = Sub(a, b);
	printf("%d\n", c);
	return 0;

}