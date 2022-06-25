#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>//标准算法头文件
#include <string>
using namespace std;

//原生指针也是迭代器
void test01()
{
	int arr[5] = { 1,2,3,4,5 };

	//原生指针可以作迭代器
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
	vector<int>v;//创建一个vector容器，容器存放int类型

	//插入元素
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);

	////遍历元素  iterator 迭代器
	//vector<int>::iterator itBegin = v.begin(); //v.begin()启始迭代器，指向第一个数据

	//vector<int>::iterator itEnd = v.end();// v.end()结束迭代器，指向最后一个元素下一个位置

	////第一种遍历
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//第三种遍历
	for_each(v.begin(), v.end(), myPrint);
}


//自定义数据类型
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
		cout <<"姓名：" << (*it).m_Name<<"年龄："<< it->m_Age << endl;
	}
}

//存放自定义类型指针
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
		cout << "姓名：" <<(*it)->m_Name << "年龄：" << (*it)->m_Age << endl;
	}
}

//容器嵌套容器
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

	//将小容器放入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it ---- vector<int>  *it就是<>里的东西
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

