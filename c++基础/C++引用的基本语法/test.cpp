//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//

//&(����)���÷�   ���� & ���� = ԭ��
//void test01()
//{
//	int a = 10;
//	int& b = a;
//
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
//void test02()
//{
//	int a = 10;
//	int& b = a;//���ñ����ʼ��
//
//	//����һ����ʼ�����Ͳ�����������������
//
//	int c = 100;
//
//	b = c;//�����Ǹ�ֵ����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
////�����齨������
//void test03()
//{
//	//1 ֱ�ӽ�������
//	int arr[10] = { 0 };
//	int(&pArr)[10] = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 100 + i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << pArr[i] << endl;
//	}
//
//	//2 �ȶ�����������ͣ���ͨ������ ��������
//	typedef int(ARRAY_TYPE)[10];
//	//����& ���� = ԭ��
//	ARRAY_TYPE& pArr2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << pArr2[i] << endl;
//	}
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//
////1 ֵ���� 
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2 ��ַ����
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void mySwap03(int &a, int &b) //int &a = a
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////3 ���ô���
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);
//	//mySwap02(&a, &b);
//	mySwap03(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
//int& func()
//{
//	int a =10;
//	return a;
//}
//
////������Ҫ����
//void test02()
//{
//	//1 ���ñ�����һ��Ϸ��ڴ�ռ�
//	//int& a = 10;
//
//	//2 ��Ҫ���ؾֲ�����������
//	int& ref = func();
//	cout << "ref = " << ref << endl;//���������ֲ������ͻᱻ�ͷ�
//	cout << "ref = " << ref << endl;
//
//}
//
//int& func2()
//{
//	static int a = 10;
//	return a;
//}
//
//void test03()
//{
//	int& ref = func2();
//
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	//�������ķ���ֵ�����ã������ĵ��ÿ�����Ϊ��ֵ
//	func2() = 1000;
//	cout << "ref = " << ref << endl;
//
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//���õı�����C++�ڲ�ʵ����һ��ָ�볣��

//int& aRef = a;//�Զ�ת��Ϊ int* const aRef = &a; 
//aRef = 20; //�ڲ����� *aRef = 20;

struct Person
{
	int age;
};

void allocateSpace(Person** p)
{
	*p = (Person*)malloc(sizeof(Person));
	if (*p == NULL)
	{
		return;
	}
	(*p)->age = 10;
}

void test01()
{
	Person* p = NULL;
	allocateSpace(&p);

	cout << "p.age = " << p->age << endl;
}


void allocateSpace2(Person* &pp )//ͨ�����ý��
{
	pp = (Person*)malloc(sizeof(Person));
	if (pp == NULL)
	{
		return;
	}
	pp->age = 20;
}
void test02()
{
	Person* p = NULL;
	allocateSpace2(p);

	cout << "p.age = " << p->age << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//����������
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void test01()
{
	// int &ref =10;
	const int& ref = 10; //����const֮���൱��д�� int temp = 10; const int &ref = temp;
	//����constʵ�����õ���һ����ʱ�Ŀռ�
	int* p = (int*)&ref;
	*p = 10000;

	cout << ref << endl;
}

//�������õ�ʹ�ó���  ���κ����е��βΣ���ֹ�����
void showValue(const int &a)
{
	//a = 10000;
	//int* p = (int*)&a;
	//*p = 1000;
	cout << "a =  " << a << endl;
}
void test02()
{
	int a = 100;
	showValue(a);
}

int main()
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}

