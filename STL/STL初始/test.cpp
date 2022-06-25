#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>//��׼�㷨ͷ�ļ�
#include <string>
using namespace std;

//ԭ��ָ��Ҳ�ǵ�����
void test01()
{
	int arr[5] = { 1,2,3,4,5 };

	//ԭ��ָ�������������
	int* p = arr;

	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i] << endl;
		cout << *(p++) << endl;
	}

}

void myPrint(int val)
{
	cout << val << endl;
}

void test02()
{
	vector<int>v;//����һ��vector�������������int����

	//����Ԫ��
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);

	////����Ԫ��  iterator ������
	//vector<int>::iterator itBegin = v.begin(); //v.begin()��ʼ��������ָ���һ������

	//vector<int>::iterator itEnd = v.end();// v.end()������������ָ�����һ��Ԫ����һ��λ��

	////��һ�ֱ���
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//�����ֱ���
	for_each(v.begin(), v.end(), myPrint);
}


//�Զ�����������
class Person
{
public:
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;
};

void test03()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it --- Person
		cout <<"������" << (*it).m_Name<<"���䣺"<< it->m_Age << endl;
	}
}

//����Զ�������ָ��
void test04()
{
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it ==== Person*
		cout << "������" <<(*it)->m_Name << "���䣺" << (*it)->m_Age << endl;
	}
}

//����Ƕ������
void test05()
{
	vector<vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(1 + i);
		v2.push_back(10 + i);
		v3.push_back(100 + i);
	}

	//��С�������뵽��������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it ---- vector<int>  *it����<>��Ķ���
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}

}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}

