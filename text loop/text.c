#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;//û��break���switch����ִ��
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//	{
//	case 0:
//		printf("first");
//	case 1:
//		printf("second");
//		break;
//	default: printf("hello");
//	}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}



//����3��ֵ�Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d ", a,b,c );
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c);
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}


//���������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;//����һ��������Сֵ
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		else
//		{
//			max--;
//		}
//	}
//	return 0;
//}

//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (/*m % n != 0*/t = m % n)
//	{
//		/*t = m % n;*/
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��С������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int min = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//	{
//		min = m;
//	}
//	else
//	{
//		min = n;
//	}
//	while (min % m /*!= 0*/ || min % n /*!= 0*/)
//	{
//		min++;
//	}
//	printf("%d\n", min);
//	return 0;
//}

//��ӡ1000��2000������
//int main()
//{
//	int n = 0;
//	int court = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0)
//		{
//			if (n % 100 != 0)
//			{
//				printf("%d ", n);
//				court++;
//			}
//		}
//		 if (n % 400 == 0)
//		{
//			printf("%d ", n);
//			court++;
//		}
//		
//	}
//	printf("court=%d ", court);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int court = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (n % 4 == 0)
//		{
//			if (n % 100 != 0)
//			{
//				printf("%d ", n);
//				court++;
//			}
//			else if (n % 400 == 0)
//			{
//				printf("%d ", n);
//				court++;
//			}
//		}
//		
//
//	}
//	printf("court=%d ", court);
//	return 0;
//}

//��ӡ100-200����
//int main()
//{
//	int i = 1;
//	for (i = 100; i <= 200; i++)
//	{
//		//2 ->i-1 ֮ǰ������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (1 == flag)
//		{
//			printf("%d ", i);
//			count++;
//			
//		}
//	}
//	printf("\n��������=%d", count);
//	return 0;
//}
//�Ż�����
// m = a * b��m�Ǻ��� �������� a����b��һ����С��<= ����m
//#include<math.h>
//	int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//sqrt��ƽ��  ���Լ����Գ�����
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (1 == flag)
//		{
//			printf("%d ", i);
//			count++;
//			
//		}
//	}
//	printf("\n��������=%d", count);
//	return 0;
//}
//�����Ż� ֱ���ų�ż��

#include <math.h>
	int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//��Դͷ���ų�ż������
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)//sqrt��ƽ��  ���Լ����Գ�����
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}

		}
		if (1 == flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n��������=%d", count);
	return 0;
}