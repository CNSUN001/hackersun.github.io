
//��׼�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<iomanip>//���Ʒ���ʽ����� ͷ�ļ�
using namespace std;

void test01()
{
	//cout.put('h').put('e');

	//char buf[] = "hello world";
	//cout.write(buf, strlen(buf));

	cout << "hello world" << endl;
}

//1 ͨ������Ա���� ��ʽ�����
void test02()
{
	int number = 99;
	cout.width(20); //ָ�����Ϊ20
	cout.fill('*'); //���
	cout.setf(ios::left);  //�����
	cout.unsetf(ios::dec); //ж��ʮ����
	cout.setf(ios::hex);  //��װʮ������
	cout.setf(ios::showbase);  //��ʾ����
	cout.unsetf(ios::hex);  //ж��ʮ������
	cout.setf(ios::oct);   //��װ�˽���
	cout << number << endl;
}

//2 ʹ�ÿ��Ʒ� ��ʽ�����
void test03()
{
	int number = 99;
	cout << setw(20)     //���ÿ��
		<< setfill('~')  //�������
		<< setiosflags(ios::showbase)  //��ʾ����
		<< setiosflags(ios::left)  //���������
		<< hex   //��ʾʮ������
		<< number
		<< endl;

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

