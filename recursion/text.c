#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��򵥵ĵݹ���ʽ
//int main()
//{
//	printf("hehe\n");
//	main();//���ݹ� ջ���
//	return 0;
//}

//�ݹ���������������
//ÿ�εݹ����Խ��Խ�ӽ��ݹ��������� �������Ǳ�Ҫ����                                   
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;
//	//scanf("%u", &num);
//	//�ݹ�-�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
// }

//void test(int x)
//{
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}//ջ���
//
//int main()
//{
//	test(1);
//	return 0;
//}

//д�ݹ����ʱ
// 1 �������ݹ� �ƽ���������
// 2 �ݹ��β���̫��

//��д��������������ʱ���������ַ������ȡ�

//int my_strlen(char* str) //������ʱ�����ķ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str) //�ݹ�ⷨ
//{
//	if (*str != '\0')
//	{
//		return 1+ my_strlen(str+1);//ʹ�õݹ鲻Ҫ�ı�ԭֵ����ʹ��str++
//	}
//	else
//	{
//		return 0;
//	}
//}
//int  main()
//{
//	char arr[] = "bit";
//	
//	//['b']['i']['t']['\0']
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//�ݹ������


//��������׳˷���
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//����
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("=%d\n", ret);
//	return 0;
//}


//�ݹ����׳˷���
//int factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n��쳲�������(���������)
//쳲������� ���� 1 1 2 3 5 8 13 21 34 55
//int count = 0;
//
//int fib(int n)//�ݹ����ַ�������쳲�����Ч�ʺܵͣ��ظ���������
//{
// //ͳ�Ƶ�3��쳲��������ļ������
//	if (3 == n)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0; 
//}

//��ѭ���������쳲�������Ч��
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while ( n > 2 )
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//������̨�� ��������쳲�������
//�ݹ�ʵ��
//int layers(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return layers(n - 1) + layers(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = layers(n);
//	printf("%d\n", ret);
//	return 0;
//}


//ѭ��ʵ��
//int layers(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 1;
//	if (1 == n)
//	{
//		return 1;
//	}
//	if (2 == n)
//	{
//		return 2;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = layers(n);
//	printf("%d\n", ret);
//	return 0;
//}

//hanoi����
//void mov(char pos1, char pos2)
//{
//	printf("%c->%c ", pos1, pos2);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (1 == n)
//	{
//		mov(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);//��һ�׶ν�����Ͳ㿴��һ�����彫��3����ת
//		mov(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);//�ڶ��׶ν���1����ת
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("�������\n");
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//	return 0;
//}