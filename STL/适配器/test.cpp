#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

class Myprint:public binary_function<int,int,void>
{
public:
	void operator()(int val,int start)const
	{
		cout << "val = " << val << " start = " << start << " sum = " << val + start << endl;;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "�����ۼ�ֵ��" << endl;
	int num;
	cin >> num;
	
	//��������������
	for_each(v.begin(), v.end(), bind2nd(Myprint(),num));
	//for_each(v.begin(), v.end(), bind1st(Myprint(), num));


}
//1 ����bind2d���а�
//2 �̳� public binary_function<������1��int,������2��int,������ֵ��void>
//3 ��const


//2 ȡ��������
class GreaterThanFive:public unary_function<int,bool>
{
public:
	bool operator()(int val)const
	{
		return val > 5;
	}
};
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//һԪȡ��
	//vector<int>::iterator  pos = find_if(v.begin(), v.end(), not1(GreaterThanFive()));//not1//ȡ��
	vector<int>::iterator  pos = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(),5)));
	if (pos != v.end())
	{
		cout << "�ҵ�С��5��ֵ:" << *pos << endl;
	}
	else
	{ 
		cout << "δ�ҵ�" << endl;
	}

	//��Ԫȡ��
	sort(v.begin(), v.end(), not2(less<int>())); //less �������Ƚ� STL�Ѿ������˼̳�
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });
		
}

//1 ����not1ȡ��
//2 �̳�public unary_function<int,bool>
//3 ��const



//3 ����������
void myPrint3(int val,int start)
{
	cout << val + start << endl;
}
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//������ָ�� ����ɺ�������
	for_each(v.begin(), v.end(),(bind2nd(ptr_fun(myPrint3),1000)));  //ptr_fun����ͨ��������ɺ�������
}

//4 ��Ա����������
class Person
{
public:
	Person(string name, int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;

	void showPerson()
	{
		cout << "���֣�" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}
	void addAge()
	{
		this->m_Age += 100;
	}
};

//void myPrint4(Person &p)
//{ 
//	cout <<"���֣�" << p.m_Name <<" ���䣺" << p.m_Age << endl;
//}

void test04()
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
	//���� mem_fun_ref����
	for_each(v.begin(), v.end(), mem_fun_ref( &Person::showPerson));
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::addAge));
	cout << "--------------------" << endl;
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));

}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}

