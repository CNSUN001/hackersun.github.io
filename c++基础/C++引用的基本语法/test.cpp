#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//&(����)���÷�   ���� & ���� = ԭ��
void test01()
{
	int a = 10;
	int& b = a;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void test02()
{
	int a = 10;
	int& b = a;//���ñ����ʼ��

	//����һ����ʼ�����Ͳ�����������������

	int c = 100;

	b = c;//�����Ǹ�ֵ����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

//�����齨������
void test03()
{
	//1 ֱ�ӽ�������
	int arr[10] = { 0 };
	int(&pArr)[10] = arr;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << pArr[i] << endl;
	}

	//2 �ȶ�����������ͣ���ͨ������ ����Ӧ��
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

