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
//	//δ�ض� = 0000 0000 0000 0000 0000 0000 0001 0010 1100
//	printf("%d %d", a + b, c);//300  44
//	return 0;
//}

//2
//unsigned int a = 0x1234; unsigned char b = *(unsigned char*)&a
//��32λ��˴������ϱ���b����(0x00)
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
//��ӡ�������
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
//������
//�ձ�ĳ�ط�����һ��ıɱ����������ͨ���Ų�ȷ��ɱ��Ϊ4�����ɷ���һ��
//����Ϊ4�����ɷ��Ĺ��ʣ�

//A ��������
//B ����C
//C ����D
//D ��C�ں�˵
//��֪3����˵���滰��1��˵���Ǽٻ���д�����ж�˭������

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

//6
//5λ�˶�Ա�μ�10��̨��ˮ����������������Ԥ��������
//A: B�ڶ����ҵ���
//B���ҵڶ���E����
//C���ҵ�һ��D�ڶ�
//D��C����ҵ���
//E���ҵ��ģ�A��һ
//û��ֻ˵��һ�룬���ȷ����������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))

							if (a * b * c * d * e == 120)
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

					}
				}
			}
		}

	}
	return 0;
}