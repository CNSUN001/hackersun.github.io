#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ�룬ʵ��ָ�봫��
//	print(p,sz);
// char ch = 'w';
// char* p1 = &ch;
// text(&ch);
// test(p1);
// return 0;
//}

//����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д���
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������Ҳ����
//	printf("%d\n", a);
//	return 0;
//}

//ָ��
//һ��ָ��
//int* p		char* pc	void* pv
//����ָ��
//int** p		char** pc
//����ָ��:ָ�������ָ��
//int (*p)[5]


//����
//һά����
//��ά����
// 
//ָ�����飺���ָ�������



//����ָ�룺ָ������ָ�룬��ź�����ַ��ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//	
//	//����ָ�룺ָ������ָ�룬��ź�����ַ��ָ��
//
//	int (*pf)(int, int) = &Add;//pf����һ������ָ�����
//	//printf("%p\n", &Add);//%p��ӡ��ַ
//	//printf("%p\n", Add); //������ == &������ ��ȫһ��
//	//������ != &������
//	return 0;
//}


//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*pt)(char*) = &test;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add; //Add == pf
//	//int ret = (*pf)(3, 5);//ͨ������ָ����ú���
//	//int ret = Add(3, 5);
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//����1
//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1 void(*)()-����ָ������
//	//2 (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3 *(void(*)())0 - ��0��ַ������
//	//4 (*(void(*)())0)() - ����0��ַ�ĺ���
//	return 0;
//}

//����2
//int main()
//{
//
//	void(*signal(int, void(*)(int)))(int);
//	//�򻯴���2
//	//	void(*)(int) signal(int,void(*)(int)) ;�﷨��֧��
//	// typedef - �����ͽ����ض���
//
//	typedef void (*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//	pfun_t signal(int, pfun_t);
//
//	//1 signal��()��ϣ�˵��signal�Ǻ�����
//	//2 signal�����ĵ�һ������������int���ڶ������������Ǻ���ָ��
//	//	�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//	//3 signal�����ķ�������Ҳ��һ������ָ��
//	//	�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//	//	signal��һ������������
//	return 0;
//}


//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5]
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};// pfArr����ָ������
//
//	return 0;
//}



//����ָ�������ʹ�ð���
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add  2.sub ****\n");
//	printf("****3.mul  4.dlv ****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ӡ������ˡ���
//	do {
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//			printf("����������������>:");//����׸��  ����������������
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������>:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������>:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����������������>:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default :
//			printf("�������,����ѡ��\n");
//			break;
//		}
//	
//	} while(input);
//	return 0;
//}


//ͨ������ָ�������Ż�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add  2.sub ****\n");
//	printf("****3.mul  4.dlv ****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ӡ������ˡ���
//	do {
//		menu();
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - ��c��ָ�롷
//		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Dlv };
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


//����ָ������� - ����
//ȡ������ָ������ĵ�ַ

//��������
//int arr[5]
//int (*pl)[5] = &arr  p1���������顿��ָ��

//����ָ�������
//int* arr[5];
//int* (*p2)[5] = &arr; p2������ָ�����顿��ָ��

//����ָ������
//int (*p)(int ,int);//����ָ��
//int (*p2[4])(int, int);//����ָ�������
//int ��*(*p3)[4]��(int, int) = &p2;//ȡ������ָ�������
//p3����һ��ָ�򡾺���ָ������顿��ָ��

//int main()
//{
//	int arr[10];
//	//����Ԫ������ - int;
//	//�������� - int[10]
//	return 0;
//}


//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ����Ϊ�������ݸ�
//��һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õ�
//���ڶԸ��¼�������������Ӧ

//ͨ���ص������Ż�
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��������Ҫ������>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

void menu()
{
	printf("*********************\n");
	printf("****1.add  2.sub ****\n");
	printf("****3.mul  4.dlv ****\n");
	printf("****    0.exit   ****\n");
	printf("*********************\n");
}
int main()
{
	int input = 0;
	//������-�������ͱ����ӡ������ˡ���
	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		int ret = 0;
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default :
			printf("�������,����ѡ��\n");
			break;
		}
	
	} while(input);
	return 0;
}
