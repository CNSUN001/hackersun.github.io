#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c�������� 1������� 2���Ӵ��� 3����ʱ���� 

//release�汾�����Ե��� 


////���Խ�������ѭ��
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//��������ż��˳��

//void Move(int arr[10], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//��ǰ������һ��ż��
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//����
//		if ((left < right) && left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
void Move(int arr[], int sz)
{

		int i = 0;   //���Ƚ�i��ʼ��
	for (int j = 0; j < sz; j++)
	{
			if (arr[j] % 2 == 1)   //��ȥ��������nums������
			{
					int tmp = arr[j];   //�ȱ���nums[j]
				for (int k = j - 1; k >= i; k--) //��[i��j)֮���ż��������ƶ�һ��λ��
				{
						arr[k + 1] = arr[k];
				}
				arr[i++] = tmp;  //��tmp��ֵ�Ž�ǰ�����ƶ��������һ����λ�ϣ��±�i����ƶ�
			}
	}
}
void print(int arr[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr, sz);
	print(arr, sz);
	return 0;
}