#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "test1.h"



//�������ر����ϱ����������������


//extern Cǳ��

//extern "C" void show();// ��ǰ���߱�������C�ķ�ʽȥ����
//ע�� ��CPP���������extern �Ͳ�������includeͷ�ļ�

void test01()
{
	show();//_Z4show;��ΪC++�к������ػ����κ�����������show��c�����ļ����������ʧ��
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

