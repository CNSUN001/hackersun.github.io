#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;   // c=6  a=6
//	b = ++c, c++, ++a, a++;  // c=7 c=8 a=7 a=8 b=7
//	b += a++ + c; //	b= 8+8+7=23  a=9 c=8
//	printf("a= %d b = %d c=%d\n", a, b, c);
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���
//int count_number(int num)
//{
//	int count = 0;
//	
//	while (num )
//	{
//		if(	num & 1 == 1);
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
//int count_number(int num)
//{
//	int count = 0;
//	int i = 1;
//	while (i)
//	{
//		if (num & i)
//		{
//			count++;
//		}
//		i = i << 1;
//	}
//	return count;
//}
//int count_number(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num & 1 == 1;
//		num >>= 1;
//		count++;
//	}
//	return count;
//}
//����32λ���Ը㶨����
//int count_number(int num)
//{
//	int count = 0;
//	int i = 0;
//	for( i = 0 ; i < 32 ; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//�㷨�Ż�
//int count_number(int num)
//{
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		num  &= (num - 1);
//		//ĳ����ÿ�κͱ��Լ�С1������һ��&���㣬���Ӧ�Ķ�����������һ��1��ֱ�������0��
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 15;
//	int ret = count_number(a);
//	printf("%d\n", ret);
//	return 0;
//}

//дһ�������ж�һ�������ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1
//k & (k-1) == 0;



//���������������в�ͬλ�ĸ���   
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m , &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//�Ż�
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m , &n);
//	int i = 0;
//	int count = 0;
//	int ret = m ^ n;//��ͬΪ0������Ϊ1 //����ͳ��ret���������м���1
//	while (ret)
//	{
//		ret &= (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//��ӡ�����Ķ����Ƶ�����λ��ż��λ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn��2�����е�����λ��ż��λ
//	int i = 0;
//	int count = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//��������������������ʱ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;//b = a ^ b ^ b
//	a = a ^ b;//a = a ^ b ^ a
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}      

int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;//short�ɵ�2���ֽ�
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}