#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//С��
//	*pc = 0;
//	printf("%x\n", a);//%x��ӡ16����  11223300
//	return 0;
//}

//int judgment()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int ret = judgment();
//	if (ret == 1)
//		printf("С��ģʽ\n");
//	else
//		printf("���ģʽ\n");
//
//	return 0;
//}

//	int i;//i��ȫ�ֱ���,�������ʼ����Ĭ����0
//int main()
//{
//	i -- ;// -1
//	//sizeof���������������Ľ����������unsigned int
//	if (i > sizeof(i))//-1>4  �з������ͺ��޷������ͱȽϴ�С������з���������ת�����޷�������
//	{	
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

////��̼���Sn=a+aa+aaa+aaaa+aaaaa�ĺ�
//int main()
//{
//	//��a���ǰn��֮�� (���������)
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////дһ����������ʹ���±��ӡһά����
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(0);
//	print(arr, sz);
//	return 0;
//}

//��ӡˮ�ɻ��� 153=1^3+5^3+3^3   һ��nλ�������λ���ֵ�n�η�֮�͵��ڱ���
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	int tmp = a;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, 3);
//		tmp = tmp / 10;
//	}
//	if (a == sum)
//		printf("%d��ˮ�ɻ���\n", a);
//	else
//		printf("%d������ˮ�ɻ���\n", a);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ���������
//		//1 ����i��λ�� n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2 ����i��ÿһλn�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10,n);//pow����ĳ������n�η�
//			tmp = tmp / 10;
//		}
//		//3 �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//2
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//3
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = {  {9801,"zhang",20},
//							    {9802,"wang",19},
//								{9803,"zhao",18},
//	};
//	fun(students + 1);
//	return 0;
//}

//4
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a. a = 99;
//	printf("%d\n", a.a); //(*p).a  p->a 
//	return;
//}

//����
//void reverse(int arr[10], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while( left <= right )
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//#include <assert.h>
//void reverse(int* pa, int sz)
//{
//	assert(pa);//����ָ��
//	int* left = pa;
//	int* right = pa + sz - 1;
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int* pa,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr,sz);
//	return 0;
//}

//��ӡn������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	//�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < (2*line-3)-2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ����
//����ˮ,1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����������ˮ��
//int  main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int sum = 0;
//	while (m>=2)
//	{
//		sum += m ;
//		m = m / 2 ;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//error errorû���ǿ�ƿ�����


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//��ʼ�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2+ empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//���ֹ��� total = 2*money-1
int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	printf("%d\n", total);
	return 0;
}