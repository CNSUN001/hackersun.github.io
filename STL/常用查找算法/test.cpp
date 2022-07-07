#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

/*
find�㷨 ����Ԫ��
@param beg ������ʼ������
@param end ��������������
@param value ���ҵ�Ԫ��
@return ���ز���Ԫ�ص�λ��


find_if�㷨 ��������
@param beg ������ʼ������
@param end ��������������
@param  callback �ص���������ν��(����bool���͵ĺ�������)
@return bool ���ҷ���true ����false
*/

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>  ::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end())
	{
		cout << "�ҵ���Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

class Person
{
public:
	Person(string name, int age) :m_Name(name), m_Age(age)
	{}
	string m_Name;
	int m_Age;
	bool operator==(const Person &p)const
	{
			return this->m_Age == p.m_Age && this->m_Name == p.m_Name;
	}

};

void test02()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator pos = find(v.begin(), v.end(),p2);
	if (pos != v.end())
	{
		cout << "������" << (*pos).m_Name << " ���䣺" << pos->m_Age << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

class MyCompaerPerson:public binary_function< Person*, Person*,bool>
{
public:
	bool operator()( Person *p,const Person *p2)const
	{
		return p->m_Name == p2->m_Name && p->m_Age == p2->m_Age;
	}
};

void test03()
{
	vector<Person *>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	Person* p = new Person("bbb", 20);
	vector<Person*>::iterator pos = find_if(v.begin(), v.end(), bind2nd(MyCompaerPerson(),p));
	if (pos != v.end())
	{
		cout << "������" << (*pos)->m_Name << " ���䣺" << (*pos)->m_Age << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

}

//adjacent_find�㷨 ���������ظ�Ԫ��
void test04()
{
	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(300);
	v.push_back(300);
	v.push_back(6);
	v.push_back(3);

	vector<int>::iterator ret = adjacent_find(v.begin(), v.end()); //���ص��ǵ�һ��
	if (ret != v.end())
	{
		cout << "�ҵ������ڵ��ظ�Ԫ�أ�" << *ret << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}


void test05()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ccc", 30);
	Person p5("ddd", 40);
	Person p6("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);

	vector<Person>::iterator ret = adjacent_find(v.begin(), v.end());
	if (ret != v.end())
	{
		cout << "�ҵ������ڵ��ظ�Ԫ�أ�" << ret->m_Age<<"-------" << ret->m_Name << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

/*
binary_search�㷨 ���ֲ��ҷ�
ע��: �����������в�����
*/

void test06()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret)
	{
		cout << "��������2" << endl;
	}
	else
	{
		cout << "δ�ҵ�����2" << endl;
	}
}


/*
count_if�㷨 ͳ��Ԫ�س��ִ���
@param beg ������ʼ������
@param end ��������������
@param  value�ص���������ν��(����bool���͵ĺ�������)
@return int����Ԫ�ظ���
*/

class GreaterThan3
{
public:
	bool operator()(int val)
	{
		return val >= 3;
	}
};



void test07()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	int num = count(v.begin(), v.end(), 3);
	cout << "3�ĸ���Ϊ" << num << endl;

	//ͳ�ƴ��ڵ���3�ĸ���
	num = count_if(v.begin(), v.end(), GreaterThan3());

	cout << "���ڵ���3�ĸ���Ϊ��" << num << endl;
	
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05;
	//test06();
	test07();
	system("pause");
	return EXIT_SUCCESS;
}

