#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//float a = 9 / 2.0;//����С����Ĭ������
//	//printf(" % f\n", a);
//
//	//int b = 9 % 2;//ȡ����
//	//printf(" % d\n", b);
//
//
//
//	return 0;
//
//}

//<<���������ƣ�>>����������
//int main()
//{
//	int a = 2;//00000000000000000000000000000010
//	int b = a << 2;//00000000000000000000000000001000
//	printf("%d\n", b);//<<�ƶ����Ƕ�����
//
//	return 0;
//
//}

//λ������ &��λ�� |��λ�� ^��λ���



//��ֵ������ 
//int main()
//{
//	int a = 2;
//	a = a + 5;//a+=5;
//	a = a - 3;//a-=3;
//	a = a % 3;//a%=3;
//
//
//	printf("%d\n", b);
//
//	return 0;

//}


// a+b +������������������+��˫Ŀ������ ��Ŀ������ ֻ��һ��������
//
//int main()
//{
//	
//	int a = 0;
	//printf("%d\n", !a);//!��ʾa���߼�������
	//if (a)
	//{
	//	//���aΪ�棬����
	//}

	//if (!a)
	//{
	//	//���aΪ�٣�����
	//}

	//a = -5;
	//a = -a;
	//a = +a;


//	return 0;
//}


	//int main()
	//{
	//	//size of��һ���������ͻ��߱�����С�Ĳ�����
	//	//��������������ʡ��
	//	int a = 10;
	//	printf("%d\n", sizeof(int));
	//	printf("%d\n", sizeof(a));

	//	return 0;
	//}


int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//���������ܴ�С��λ���ֽ�
	printf("%d\n", sizeof((arr[0])));
	int size = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	printf("%d\n", size);


	return 0;
}