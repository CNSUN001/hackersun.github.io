#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����--һ����ͬ����Ԫ�صļ���
//#include <string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr1[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	int arr2[] = { 1,2,3,4,5 };//=int arr2[5] = { 1,2,3,4,5 };
//	char ch[5] = { 'b','i','t' };
//	char ch1[] = { 'b','i','t' };
//	char ch3[5] = "bit"; //bit \0 0
//	char ch4[] = "bit"; // bit \0
//	char ch5[] = "bit";
//	char ch6[] = { 'b','i','t' };
//	printf("%d\n", strlen(ch5));
//	printf("%d\n", strlen(ch6));										
//	return 0;
//}

//һά����
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4]=5;//[]�±����ò�����
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(0));
//	printf("---------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//һά���� ���ڴ����������
// ���������±����������ַ�ɵ͵��߱仯
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);  //%p - ��ӡ��ַ ��16���ƴ�ӡ
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//��ά����
//int main()
//{
	//����
	//int arr[3][4];
	//char ch[3][10];

	//��ʼ�� -������ͬʱ����ֵ
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr1[3][4] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ�������油0;
	//int arr2[3][4] = { {1,2},{3,4},{4,5} };
	//int arr[][4] = { {1,2},{3,4},{4,5} };//�п���ʡ�ԣ��в�����
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//��ά�����������еĴ洢
	//int arr[][4] = { {1,2},{3,4},{4,5} };//�п���ʡ�ԣ��в�����
	//int i = 0;
	//int j = 0;
	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d  ", *p);
	//		p++;
	//}


	//for (i = 0; i < 3; i++)
	//{
	//	
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]%p\n",i,j, &arr[i][j]);//��ӡ��ַ
	//	}
	//	printf("\n");
	//}
//	return 0;
//}


//����Ϊ����-ð������  �������ڵ�Ԫ�ؽ��бȽϣ���Ҫ�Ļ����н���
//void bubble_sort(int arr[],int sz)
//{
//
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð�ݹ���
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,5,3,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}


//��������ʲô��
//��������������Ԫ�صĵ�ַ
//������2������
//1 .sizeof(������)-��������ʾ��������-���������������Ĵ�С����λ���ֽ�
//2. &������-��������ʾ��������-ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//ȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);
//	//int sz = sizeof(arr);//��������ʾ��������
//	//printf("%d\n", sz);
//	//printf("%p\n", &arr[0]);
//	printf("%p\n", arr); //����������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	return 0;
//}

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



//�Ż�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//			if (1 == flag)
//				//flag ������Ϊ���Ż��㷨������Ч�ʣ����ӵ�һ��λ�ÿ�ʼû�з���������˵���������Ѿ�����Ӧʵ���Ĵ���ռ�꣬������Ϊ�����Һ�����
//			{
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//1 ʵ�ֺ���init()��ʼ������Ϊȫ0
//2 ʵ��print()��ӡÿ��Ԫ��
//3 ʵ��reverse()�����������Ԫ�ص�����

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}


//��������
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int arr1[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//	}
//	return 0;
//}