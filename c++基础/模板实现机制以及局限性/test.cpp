//1 �����������ǰѺ���ģ�崦����ܹ������κ����͵ĺ���
//2 ����ģ��ͨ���������Ͳ�����ͬ�ĺ���
//3 ��������Ժ���ģ��������α��룬�������ĵط���ģ����뱾����б��룬�ڵ��õĵط��Բ����滻��Ĵ�����б���


//ģ�������
//�������ʵ��ʱ�����˸�ֵ���� a = b������TΪ���飬���ּ���Ͳ�������
//ͬ���������������Ϊ�ж���� if (a > b), ��T����ǽṹ�壬�ü���Ҳ������



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;
};

//��ʾ�������� �Ա� ����
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}

//���صķ���
//bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	return false;
//}

//���þ��廯������ʵ�ֶ��Զ����������� �ṩ����ģ��
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
		return false;
}

void test01()
{
	//int a = 10;
	//int b = 10;
	//bool ret = myCompare(a, b);
	//cout << ret << endl;
	Person p1("Tom", 19);
	Person p2("Tom", 19);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}


 