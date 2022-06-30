#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

/*
3.6.4.1 list构造函数
list<T> lstT;//list采用采用模板类实现,对象的默认构造形式：
list(beg,end);//构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem);//构造函数将n个elem拷贝给本身。
list(const list &lst);//拷贝构造函数。
3.6.4.2 list数据元素插入和删除操作
push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。
*/

void printList(const list<int>&L)
{
	//正序遍历
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void reversePrintList(const list<int>& L)
{
	//逆序遍历
	for (list<int>::const_reverse_iterator it = L.rbegin(); it != L.rend(); it++)
	{
		cout << *it << endl;
	}
}
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	////printList(L1);
	////reversePrintList(L1);

	list<int>L2(L1);
	////printList(L2);

	list<int>L3(L1.begin(),L1.end());
	//reversePrintList(L3);

	//list是不是支持随机访问
	list<int>::iterator itBegin = L1.begin();
	//itBegin = itBegin + 1;// 不支持 只支持前进和后移
}

void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	printList(L1);

	L1.pop_back();//尾删
	L1.pop_front();//头删
	printList(L1);

}

void test03()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	//插入

	L1.insert(L1.begin(), 10000);
	printList(L1);

	list<int>::iterator it = L1.begin();
	
	L1.erase(it);
	printList(L1);



	//remove（elme） 删除所有与elem值匹配的值
	L1.remove(100);
	printList(L1);


}

void test04()
{
	//void assign(InputIterator first, OutputIterator last);
	//void assign(size_type n, value_type val);
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	list<int>L2;
	L2.assign(10, 100);
	L1.swap(L2);
	printList(L1);
}


/*
3.6.4.6 list反转排序
reverse();//反转链表，比如lst包含1,3,5元素，运行此方法后，lst就包含5,3,1元素。
sort(); //list排序
*/

bool myCompaer(int v1,int v2)
{
	return v1 > v2;
}

void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList(L1);

	L1.reverse();
	printList(L1);

	//排序 如果容器的迭代器支持随机访问，可以使用系统提供的标准算法
	//不支持的迭代器支持随机访问，内部会提供对应接口
	
	L1.sort(myCompaer);
	printList(L1);

}

class Person
{
public:
	Person(string name,int age,int height):m_Name(name),m_Age(age),m_Height(height)
	{}

	bool operator==(const Person& p)const  //后面在加个const
	{
		if (this->m_Name == p.m_Name&& this->m_Height == p.m_Height&& this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

bool myCompaerPerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height < p2.m_Height;
	}
	return p1.m_Age > p2.m_Age;
}

void test06()
{
	list<Person> L;
	Person p1("亚瑟", 40, 180);
	Person p2("赵云", 20, 160);
	Person p3("妲己", 30, 120);
	Person p4("孙悟空", 50, 200);
	Person p5("关羽", 10, 170);
	Person p6("刘备", 10, 165);
	Person p7("张飞", 10, 185);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	L.push_back(p7);

	//按照年龄进行降序   从大到下 , 如果年龄相等,按照身高升序
	//对于自定义数据类型，必须要指定排序规则
	L.sort(myCompaerPerson);
	
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}

	//要重载 == 	bool operator==(const Person& p)const
	L.remove(p4);

	cout << "删除后" << endl;
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return EXIT_SUCCESS;
}

