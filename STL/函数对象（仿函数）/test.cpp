
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1.��������(�º���)��һ���࣬����һ��������
//2.��������(�º���)�����ˡ�() ��������ʹ������������һ�����á�


class MyPrint
{
public:
	void operator()(int num)
	{
		cout << num << endl;
		m_Count++;
	}

	int m_Count = 0;
};

void myPrint02(int num)
{
	cout << num << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint(100); //�º���������һ����Ķ���
	// myPrint.operator()(100);

	myPrint02(100);
}

//�������� ������ͨ�����ĸ������ӵ���Լ�״̬
void test02()
{
	MyPrint myPrint;
	myPrint(100);
	myPrint(100);
	myPrint(100);
	myPrint(100);

	cout << "���ô�����" << myPrint.m_Count << endl;
}

//�������������Ϊ��������

void doPrint(MyPrint m)
{

}

void test03()
{
	
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}




