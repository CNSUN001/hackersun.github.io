// set容器  
//Set的特性是。所有元素都会根据元素的键值自动被排序。
//Set的元素不像map那样可以同时拥有实值和键值，set的元素即是键值又是实值。
//Set不允许两个元素有相同的键值。

// multiset容器
//multiset特性及用法和set完全相同，唯一的差别在于它允许键值重复。
//set和multiset的底层实现是红黑树，红黑树为平衡二叉树的一种。



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>
#include <string>
using namespace std;


/*
3.7.2.1 set构造函数
set<T> st;//set默认构造函数：
mulitset<T> mst; //multiset默认构造函数:
set(const set &st);//拷贝构造函数
3.7.2.2 set赋值操作
set& operator=(const set &st);//重载等号操作符
swap(st);//交换两个集合容器
3.7.2.3 set大小操作
size();//返回容器中元素的数目
empty();//判断容器是否为空

3.7.2.4 set插入和删除操作
insert(elem);//在容器中插入元素。
clear();//清除所有元素
erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
erase(beg, end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
erase(elem);//删除容器中值为elem的元素。
*/

void printSet(const set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void printMultiset(const multiset<int>& s)
{
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	set<int>s;
	//插入自动排序
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	printSet(s);

	if (s.empty())
	{
		cout << "set空" << endl;
	}
	else
	{
		cout << "set不为空" << s.size() << endl;
	}

	s.erase(30); //直接删值
	printSet(s);

}

/*
3.7.2.5 set查找操作
find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key);//查找键key的元素个数,返回个数
lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
*/

void test02()
{
	set<int>s;
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	//若不存在，返回set.end();  string容器返回-1
	set<int>::iterator pos = s.find(30);
	if (pos != s.end())
	{
		cout << "找到元素:" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//查找元素个数 ,对于set而言不允许重复 cout的结果要么0 要么1
	int num = s.count(41);
	cout << "key的个数为：" << num << endl;

	//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
	set<int>::iterator pos2 = s.lower_bound(30);
	cout << "lower_bound(keyElem)找到>=30的元素:" << *pos2 << endl;

	//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
	set<int>::iterator pos3 = s.upper_bound(30);
	cout << "upper_bound(keyElem)找到>=30的元素:" << *pos3 << endl;

	//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
	pair<set<int>::iterator, set<int>::iterator>ret = s.equal_range(30);


	if (ret.first != s.end())//说明找到lower_bound
	{
		cout << "equal_range中lower_bound:" << *ret.first << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	if(ret.second!=s.end())
	{
		cout << "equal_range中upper_bound:" << *ret.second << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

//pair 创建
void test03()
{
	//pair 结构体
	pair<string, int>p("Tom", 10);
	cout << p.first << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry", 18);
	cout << p2.first << p2.second << endl;

}

void test04()
{
	//set容器不允许插入相同元素
	set<int> s;
	pair<set<int>::iterator , bool>ret = s.insert(10);

	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(10);

	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}

	printSet(s);


	//	multiset 允许插入重复的key值
	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	printMultiset(ms);

}

class myCompareInt
{
public:
	//仿函数 就是重载()
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test05()
{
	//set容器的排序规则要在插入之前指定
	set<int, myCompareInt>s;
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//对于自定义类型
class Person
{
public:
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;

	//重载<指定排序规则
	//bool operator<(const Person&p)const
	//{
	//	return  this->m_Age<p.m_Age;
	//}
};

//利用仿函数 指定自定义数据类型的排序规则
class myComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_Age < p2.m_Age;
	}
};

void test06()
{
	//利用仿函数 指定自定义数据类型的排序规则

	set<Person, myComparePerson> s;
	Person p1("aaa", 10);
	Person p2("bbb", 40);
	Person p3("ccc", 20);
	Person p4("ddd", 30);
	Person p5("eee", 50);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);

	for (set<Person, myComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << endl;
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

