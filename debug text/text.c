#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c常见错误 1编译错误 2链接错误 3运行时错误 

//release版本不可以调试 


////理解越界访问死循环
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

//调整奇数偶数顺序

//void Move(int arr[10], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//从前往后找一个偶数
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//交换
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

		int i = 0;   //首先将i初始化
	for (int j = 0; j < sz; j++)
	{
			if (arr[j] % 2 == 1)   //进去的条件：nums是奇数
			{
					int tmp = arr[j];   //先保存nums[j]
				for (int k = j - 1; k >= i; k--) //将[i，j)之间的偶数都向后移动一个位置
				{
						arr[k + 1] = arr[k];
				}
				arr[i++] = tmp;  //将tmp的值放进前面因移动而多出的一个空位上，下标i向后移动
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