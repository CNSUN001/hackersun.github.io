//���ñ����㷨
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//for_each
//for_each�з���ֵ
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << endl;
		m_Count++;
	}
	int m_Count = 0;
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	Myprint print = for_each(v.begin(), v.end(), Myprint());
	cout << "print.count = " << print.m_Count << endl;
}

//for_each���԰󶨲������
class MyPrint2 :public binary_function<int ,int,void>
{
public:
	void operator()(int val,int start)const
	{
		cout << val + start << endl;
	}
};

void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), bind2nd(MyPrint2(),1000));

}

//transform ����ָ����������Ԫ�ذ��˵���һ������
class MyTransform
{
public:
	int operator()(int val)
	{
		return val;
	}
};

void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>v2;
	
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), MyTransform());
	for_each(v2.begin(), v2.end(), Myprint());
}



int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

