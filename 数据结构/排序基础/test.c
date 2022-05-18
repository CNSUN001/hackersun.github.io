#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insertSort(int arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int temp = arr[i];
			int j = i - 1;
			for (; j >= 0 && temp < arr[j]; j--)
			{
				//���ݺ���
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;//�ƶ���������ո�temp
		}
	}
}

void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test01()
{
	int arr[] = { 4,1,2,3,5,7,6 };
	//��������
	int len = sizeof(arr) / sizeof(int);
	insertSort(arr, len);

	//��ӡ����
	printArray(arr, len);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}