#define _CRT_SECURE_NO_WARNINGS 1//���scanf����
#include <stdio.h>
//int a = 100;
//ȫ�ֱ��� {}��ı���
int main()
{
	//int age = 10;
	//double weight = 50;
	//age = age + 2;
	//weight = weight - 10;
	//printf("% d\n" , age);
	//printf("%lf\n", weight);
	////%d����
	//%f float
	//%lf double
	
	//int a = 10;/*�ֲ�����*/
	//printf("%d\n", a);//�ֲ�����  ������ȫ�ֱ����;ֲ���������һ��

	//д������2�������ĺ�
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);//scanf���������뺯�� &��ַ scanf_s�ĺ�����vs�����ṩ������c��׼�涨
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}