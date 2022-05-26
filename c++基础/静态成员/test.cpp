
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 ��̬��Ա���� static

class Person
{

	//1. ��̬static��Ա������ͬ�ڷǾ�̬������
	//��ֻ�����౾����������ÿһ������ʵ����
	//��̬����������ļ��ض��������ڡ���֮�෴���ǷǾ�̬��Ա��
	//���ǵ��ҽ���ʵ��������֮��Ŵ��ڡ�Ҳ����˵����̬��Ա����������ǰ��
	//�Ǿ�̬��Ա���������ں󣬲������þ�̬����ȥ����һ�������ڵĶ�����

	//2. �ڷ��ʷǾ�̬������ʱ��
	//	�õ���thisָ�룻��static��̬����û��thisָ�룬
	//	���Ծ�̬����Ҳȷʵû�а취���ʷǾ�̬��Ա��
public:
	//1 ��̬��Ա����������׶ξͷ������ڴ�
	//���������������ʼ��
	//��̬��Ա����  ���ж��󶼹���ͬһ������
	static int m_A;

private:
	static int m_B;//˽�г�Ա����

	//2 ��̬��Ա����
	//���ж�����ͬһ��func����
public:
	static void func()
	{
		m_C = 100; //��̬��Ա���� �����ܷ��ʷǾ�̬��Ա����
		m_A = 100;//��̬��Ա���� �ܷ��ʾ�̬��Ա����
		cout << "func�ĵ���" << endl;
	}

	int m_C;
};

int Person::m_A = 0;

int Person::m_B = 1;

void test01()
{
	//1 ͨ���������
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;
	cout << p1.m_A << endl;
	
	//2 ͨ����������
	cout << Person::m_A << endl;

	//��̬��Ա���� Ҳ���з���Ȩ�޵ģ�˽��Ȩ��������ʲ���
	//cout << Person::m_B << endl;

}

void test02()
{
	//ͨ������
	Person p1;
	p1.func();
	//ͨ������
	Person::func();
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}



