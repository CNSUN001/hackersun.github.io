#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>//�ļ���
#include <string>
using namespace std;

void test01()
{
	//д�ļ� o --���
	ofstream ofs("./test.text", ios::out | ios::trunc);

	//ofs.open("./test.text", ios::out | ios::trunc); ���ô򿪷�ʽ�Լ�·��

	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	};
	ofs << "�����������" << endl;
	ofs << "���䣺999" << endl;

	//�ر�
	ofs.close();
}

void test02()
{
	//���ļ�
	ifstream ifs;
	ifs.open("./test.text", ios::in );

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	};

	//��һ�ַ�ʽ��ȡ
	//char buf[1024] = { 0 };
	//while (ifs >> buf) //����>>������һ���ж�����
	//{
	//	cout << buf << endl;
	//}

	//�ڶ��ַ�ʽ��ȡ
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//		cout << buf << endl;
	//}

	//�����ַ�ʽ��ȡ
	//string buf;
	//while (getline(ifs,buf)) 
	//{
	//cout << buf << endl;
	//}

	//�����ֲ��Ƽ�
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	//�ر�
	ifs.close();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

