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
