#include "person.cpp" //����.h�ļ��ᱨ�� ��Ϊ��ģ��ĺ�������һ��ʼ�ʹ����ģ�����.h�ļ���������ʱ������ 
//������ģ�岻������ļ���д


void test01()
{
	Person<string, int>P("Jerry", 20);
	P.showPerson();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

