#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1
//int main()
//{
//	unsigned char a = 200;
//	//0000 0000 0000 0000 0000 0000 0000 1100 1000
//
//
//	unsigned char b = 100;
//	//0000 0000 0000 0000 0000 0000 0000 0110 0100
//	unsigned char c = 0;
//	//1 0010 1100
//	c = a + b;
//	//c = 0000 0000 0000 0000 0000 0000 0000 0010 1100
//	//未截断 = 0000 0000 0000 0000 0000 0000 0001 0010 1100
//	printf("%d %d", a + b, c);//300  44
//	return 0;
//}

//2
//unsigned int a = 0x1234; unsigned char b = *(unsigned char*)&a
//在32位大端处理器上变量b等于(0x00)
//int main()
//{
//	unsigned int a = 0x1234;  
//	//a = 0x00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//	return 0;
//}

//3
//#include <string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));//255
//	return 0;
//}

//4
//打印杨辉三角
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1 5 10 10 5 1
//int main()
//{
//	int arr[10][10]={ 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			arr[i][0] = 1;
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int k = i;
//		for (k; k < 20- 1 - k; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//5
//猜凶手
//日本某地发生了一件谋杀案件，警察通过排查确定杀手为4个嫌疑犯的一给
//以下为4个嫌疑犯的供词：

//A ：不是我
//B ：是C
//C ：是D
//D ：C在胡说
//已知3个人说了真话，1个说的是假话，写程序判断谁是凶手

//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
