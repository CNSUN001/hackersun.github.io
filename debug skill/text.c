#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)//F5��������(������ȷ�Ĵ���)	F9���öϵ�
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
//debug �汾 ����������Ϣ�����Ҳ����κ��Ż������ڳ���Ա����
//release �����汾 �����˸����Ż� ��С�������ٶȶ������ŵ�

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//		return 0;
//}
//Call Stack��Ӧ���������߼�

//����ʵ��1 1!+2!+3!....+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 3;
//	//scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int j = 1;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//���Է��֣�retû��ʼ��
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

//��������Ҫ��Ԥ�ڡ� ���ֲ�����Ԥ������������������

//ʵ����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//����Խ���ں��ʵ�����¾ͻ���ʵ�i
//	{
//		arr[i] = 0;
//		printf("hehe\n");//���Է���arr[12]��i�����0  i�ĵ�ַ��arr[12]��ַ��һ���� 
//	}
//	//���еĽ����ʲô? һֱ��ѭ��(����ͣ�������������˴�)
//	//1 i ��arr�Ǿֲ����� ����ջ���ϵ�
//	// ջ���ڴ��ʹ��ϰ��:��ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//	//2 �������ַ�������е͵��߱仯��
//
//	//�������������Ǳ��������ɺ�
//	//vc 6.0���� - 0������
//	//gcc -1������
//	//vs���� -2������
//	return 0;
//}


//Ԥ����������
//ͨ������ļ���,���ٴ���

//������coding����
//1 ʹ��assert
//2 ����ʹ��const
//3 �������õı�����
//4 ��ӱ�Ҫ��ע��
//5 �����������


//ģ��ʵ��strcpy
//strcpy-�ַ�������
//void my_strcpy(char* dest, char* src)
//{
//	while(*src!='\0')
//	{
//		*dest  = *src ;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++  = *src++ ;
//	}
//	*dest = *src;
//}
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���� ���Ϊ��ʲô�������������Ϊ�ٱ���
//	assert(dest != NULL);//���� 
//	while ( *dest++  = *src++ )//�ȿ�����'\0'��ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//}
//int main()
//{
//	char arr[20] = "xxxxxxxxxx";
//	char arr1[] = "hello";
//	my_strcpy(arr,arr1);
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	//1
//	//int num = 10;
//	//int*p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//2
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����Ǳ��� 
//	const int num = 10;
//	//const int * p = &num;
//	 int* const p = &num;
//	//p = &20;
//	//const ����ָ����� 
//	//const �������*��ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	//����ָ����������ǿ����޸ĵ�
//	// const �������*�ұ߱ߣ����ε���ָ�����p����ʾָ��������ܸı䣬ָ������ݿ��Ըı�
//	//*p = 20;//ָ�����ǿ�ĳ�����
//	int** pp = &p;
//	**pp = 20;
//	printf("%d\n", num);
//	return 0;
//}    

