#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 ����ģ�����ͨ����������
template<class T>
T myAdd(T a, T b)
{
	return a + b;
}

int myAdd2(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	myAdd(a, b);
	myAdd2(a, b);
	myAdd<int>(a, c);//���ʹ���Զ������Ƶ��������Է�����ʽ����ת��
	myAdd2(a, c);

}

//2 ����ģ�����ͨ�����ĵ��ù���
template<class T>
void myPrint(T a,T b)
{
	cout << "����ģ�����" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "(T a, T b,T c)����ģ�����" << endl;
}

void myPrint(int a, int b)
{
	cout << "��ͨ��������" << endl;
}

void test02()
{
	//1 �������ģ�����ͨ���������Ե��ã����޵�����ͨ������������ͨ�����Ƿ�ʵ�֣�
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//2 �����ǿת����ģ�庯����ʹ�ÿ�ģ������б�
	myPrint<>(a, b);

	//3 ����ģ����Է�����������
	myPrint<>(a, b,10);

	//4 �������ģ���ܲ������õ�ƥ�䣬����ʹ�ú���ģ�壨������ʽ����ת����
	char c = 'c';
	char d = 'd';
	myPrint(c, d);

}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

