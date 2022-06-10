#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//void mySwapInt(int& a, int& b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}


void mySwapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void mySwapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��ʵ��ͨ�ý�������
template<typename T>//T����һ��ͨ�õ��������ͣ����߱����������������ŵĺ����������T��Ҫ����
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap2()
{

}

void test01()
{
	int a = 10;
	int b = 20;
	//mySwapInt(a, b);
	//1  �Զ������Ƶ��������Ƶ���һ�µ�T�������ͣ��ſ�������ʹ��ģ��
	//mySwap(a, b);
	//2 ��ʾָ������
	mySwap<int>(a, b);
	cout << a << endl;
	cout << b << endl;

	
	double c = 3.14;
	double d = 1.1;
	mySwap(c, d);
	//mySwapDouble(c, d);
	cout << c << endl;
	cout << d << endl;

	mySwap2<int>();//������߱�����T�����Ͳſ��Ե���
}


int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

