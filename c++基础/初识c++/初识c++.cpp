#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>//��׼��������� i - input o - output�൱��stdio.h
using namespace std;//ʹ��  ��׼ �����ռ� 

//#include <math.h>
//#include <cmath>
//
//#include <time.h>
//#include<ctime>

//int main()
//{
//	//cout ��׼���������
//	//<< ���� ��C++�������µĺ��壬������cout��ƴ����������� ������ԭ��c�ļ�������
//	//endl ---- end line ˢ�»��������һ��� 
//	cout << "hello world"<< endl ;
//
//	system("pause");
//	return EXIT_SUCCESS;
//}




//˫ð�������������
//int atk = 1000;
//void test01()
//{
//	int atk = 2000;
//	std::cout << "atk = " << atk << std::endl;
//	//::���������� ���ǰ��ʲô������� ����ȫ�������� 
//	std::cout << "atk = " << ::atk << std::endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}





//namespace�����ռ�
//1  namespace ������Ƴ�ͻ
//2  �����ռ��� ���Էű������������ṹ�壬�ࡣ����
//3 �����ռ� ����Ҫ������ȫ����������
//4 �����ռ� ����Ƕ�������ռ�
//5 �����ռ��ǿ��ŵģ�������ʱ�������ռ�����µĳ�Ա
//6 �����ռ������������
//7 �����ռ���������

//#include "game1.h"
//
//void Chess::goAtk()
//{
//	cout << "chess attack" << endl;
//}




//using�����Լ�using����ָ��
//namespace KingGlory
//{
//	int sunwukongId = 1;
//}
//
//namespace LOL
//{
//	int sunwukongId = 3;
//}
//
//void test01()
//{
//	//int sunwukongId = 2;
//
//	//1 using ����
//	using KingGlory::sunwukongId;//���ֲ�����ֻ�ܴ�һ��
//
//	//��using������ �ͽ�ԭ��ͬʱ���֣��ͻ������������
//	cout << sunwukongId << endl;
//
//	//cout << KingGlory::sunwukongID << endl;
//}
//
//void test02()
//{
//	//int sunwukongId = 2;
//	//2 using����ָ��
//	using namespace KingGlory;
//	using namespace LOL;
//	//��using����ָ�� �� �ͽ�ԭ��ͬʱ���� ���� �ͽ�ԭ��
//	//cout << sunwukongId << endl;
//	//��using����ָ���ɶ������Ҫ������������
//	cout <<KingGlory:: sunwukongId << endl;
//	cout << LOL:: sunwukongId << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}




//C++��C����ǿ

//C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1 ȫ�ֱ��������ǿ
// ��C�в��ᱨ�� ��C++�ᱨ��
//int a;
//int a = 10;

//2 ���������ǿ ������ֵ��⣬�β����ͼ�⣬�������ò����������
int getRectS(int w, int h)
{
	return w * h;
}
void test01()
{
	printf("%d\n", getRectS( 10, 10));
}

//3 ����ת�������ǿ
void test02()
{
	char* p = (char*)malloc(64);
}

//4 struct��ǿ

struct Person
{
	int age;
	void func()//C++�£��ṹ������к���
	{
		age++;
	}
};

void test03()
{
	Person p; //�����ṹ�����ʱ�򣬿���ʡ��struct
	p.age = 100;
	p.func();
	cout << "p��age = " << p.age << endl;
}

//5 bool������չ  ��boolֻռһ���ֽڣ�
bool flag = true; //bool���� ���� ��ͼ� true  false


//6 ��Ŀ�������ǿ
void test04()
{
	int a = 10;
	int b = 20;
	
	printf("%d\n", a > b ? a : b);

	a > b ? a : b = 100;//C++�·��ص��Ǳ�����C�����·��ص���ֵ

	a > b ? a : *( & b) = 100; //�ȼ�C��д��

	printf("%d\n", a );
	printf("%d\n", b );
}

//7 const��ǿ
//ȫ��const �� C���Խ���һ��
const int m_A = 100; //�ܵ��������ı����������޸�ʧ��

void test05()
{
	//m_A = 200;
	//int* p = (int*)&m_A;
	
	//*p = 200;
	//�ֲ�const
	const int m_B = 100;
	//m_B =200;
	int* p = (int*)&m_B;
	*p = 200;
	cout << "m_B = " << m_B << endl;

	int arr[m_B]; //C++��const���εı��� ��Ϊ���������Գ�ʼ������
}
	
	


int main()
{
	//test03();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}




