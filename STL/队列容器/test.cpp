#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

//只能访问顶端元素，不提供遍历，也不提供迭代器

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
	queue<Person> Q;//队列容器

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	//入队
	Q.push(p1);
	Q.push(p2);
	Q.push(p3);
	Q.push(p4);

	cout << "size = " << Q.size() << endl;

	while(!Q.empty())
	{
		cout << "队头元素 --- 姓名：" << Q.front().m_Name << " 年龄：" << Q.front().m_Age << endl;
		cout << "队尾元素 --- 姓名：" << Q.back().m_Name << " 年龄：" << Q.back().m_Age << endl;
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


