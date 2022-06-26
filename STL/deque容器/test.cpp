
//deque 双端开口   double-ended queue

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
/*
3.3.3.1 deque构造函数
deque<T> deqT;//默认构造形式
deque(beg, end);//构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem);//构造函数将n个elem拷贝给本身。
deque(const deque &deq);//拷贝构造函数。

3.3.3.2 deque赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
deque& operator=(const deque &deq); //重载等号操作符
swap(deq);// 将deq与本身的元素互换

3.3.3.3 deque大小操作
deque.size();//返回容器中元素的个数
deque.empty();//判断容器是否为空
deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置,如果容器变短，则末尾超出容器长度的元素被删除。
*/

void printDeque(const deque <int>& d)
{
	//iterator 普通迭代器
	//reverse_iterator 反转迭代器
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque <int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	deque<int>  d2;
	d2 = d;

	printDeque(d2);

	if (d2.empty())
	{
		cout << "d2为空" << endl;
	}
	else
	{
		cout << "d2的size为：" << d2.size() << endl;
	}
}


/*
3.3.3.4 deque双端插入和删除操作
push_back(elem);//在容器尾部添加一个数据
push_front(elem);//在容器头部插入一个数据
pop_back();//删除容器最后一个数据
pop_front();//删除容器第一个数据

3.3.3.5 deque数据存取
at(idx);//返回索引idx所指的数据，如果idx越界，抛出out_of_range。
operator[];//返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。
front();//返回第一个数据。
back();//返回最后一个数据
*/

void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);

	d.pop_back();//尾删
	d.pop_front();//头删
	//200 100 10 20
	printDeque(d);

	cout << "第一个元素为：" << d.front() << endl;
	cout << "最后一个元素为：" << d.back() << endl;
}

/*
3.3.3.6 deque插入操作
insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
3.3.3.7 deque删除操作
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
*/

void test03()
{
	deque<int >d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//插入 insert
	d.insert(++d.begin(), 2,1000);
	printDeque(d);
	//300 1000 1000 200 100 10 20 30
	//删除erase
	//d.erase(d.begin());
	deque<int>::iterator it1 = d.begin();
	deque<int>::iterator it2 = it1;
	it1 = it1 + 1;
	it2 = it2 + 3;  //[beg,end)  开区间 要指向要删除的位置的下一个位置
	d.erase(it1,it2);
	printDeque(d);

	//清空
	d.clear();
	printDeque(d);

}

bool myCompare(int v1,int v2)
{
	return v1 > v2;
}

void test04()
{
	deque<int >d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//默认排序从小到大
	sort(d.begin(), d.end());
	printDeque(d);

	sort(d.begin(), d.end(), myCompare);

	printDeque(d);


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

