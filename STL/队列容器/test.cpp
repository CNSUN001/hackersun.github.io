#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

//ֻ�ܷ��ʶ���Ԫ�أ����ṩ������Ҳ���ṩ������

class Person
{
public:
	Person(string name,int age):m_Name(name), m_Age(age)
	{}
	string m_Name;
	int m_Age ;
};

void test01()
{
	queue<Person> Q;//��������

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	//���
	Q.push(p1);
	Q.push(p2);
	Q.push(p3);
	Q.push(p4);

	cout << "size = " << Q.size() << endl;

	while(!Q.empty())
	{
		cout << "��ͷԪ�� --- ������" << Q.front().m_Name << " ���䣺" << Q.front().m_Age << endl;
		cout << "��βԪ�� --- ������" << Q.back().m_Name << " ���䣺" << Q.back().m_Age << endl;
		Q.pop();
	}
	cout << "size = " << Q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}


