
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <vector>
using namespace std;

//vector 动态增加大小不是在原空间之后续接新空间，而是找一块更大的内存空间，
//指向原vector的迭代器就失效了
//vector 单端数组

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v.capacity() << endl; //capacity的扩容 单次的量 是逐渐增大的
	}
}


//3.2.4.1 vector构造函数
//vector<T> v; //采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
//vector(n, elem);//构造函数将n个elem拷贝给本身。
//vector(const vector& vec);//拷贝构造函数。
//
////例子 使用第二个构造函数 我们可以...
//int arr[] = { 2,3,4,1,9 };
//vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));

//assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem);//将n个elem拷贝赋值给本身。
//vector& operator=(const vector& vec);//重载等号操作符
//swap(vec);// 将vec与本身的元素互换。



void printVector(vector<int> & v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//vector<int>v2;
	//v2 = {  1,2,3,4,5 };
	vector<int>v2(v1.begin(),v1.end());

	printVector(v2);

	//int arr[] = { 1,2,3,4,5,6 };
	//cout << sizeof(arr) / sizeof(int) << endl;
	//vector<int>v3(arr, arr + sizeof(arr) / sizeof(int));
	//printVector(v3);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//swap
	vector<int> v4(10, 100);
	printVector(v4);

	cout << "v3和v4互换" << endl;
	v3.swap(v4);
	printVector(v3);
	printVector(v4);

}


//3.2.4.3 vector大小操作
//	size();//返回容器中元素的个数
//empty();//判断容器是否为空
//resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
//capacity();//容器的容量
//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。


void test03()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空，大小为："<< v1.size() << endl;
	}

	v1.resize(10,100); //重新指定容器长度 //重载的第二个参数代表填充值
	printVector(v1);
	v1.resize(3);
	printVector(v1);
	

	//reserve 容器预留len个元素长度，预留位置不初始化，元素不可访问。


	//front();//返回容器中第一个数据元素
	//back();//返回容器中最后一个数据元素
	cout << "v1的front = " << v1.front() << endl;
	cout << "v1的back = " << v1.back() << endl;

}


//3.2.4.4 vector数据存取操作
//	at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常。
//operator[];//返回索引idx所指的数据，越界时，运行直接报错
void test04()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	try
	{
		//cout << v1[100] << endl;
		cout << v1.at(100) << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "异常捕获" << endl;;
	}
}


//3.2.4.5 vector插入和删除操作
//insert(const_iterator pos, int count, ele);//迭代器指向位置pos插入count个元素ele.
//push_back(ele); //尾部插入元素ele
//pop_back();//删除最后一个元素
//erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
//erase(const_iterator pos);//删除迭代器指向的元素
//clear();//删除容器中所有元素
void test05()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	v.insert(v.begin(), 2, 100);//迭代器指向位置pos插入count个元素ele.

	printVector(v);

	v.push_back(1000);//尾插
	printVector(v);

	v.pop_back();// 尾删
	printVector(v);

	v.erase(v.begin()); //删除第一个
	printVector(v);


	v.erase(v.begin(),v.end()); //全删 //等价v.clear();
	printVector(v);

}

// 案例1 巧用swap收缩内存
void test06()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;

	v.resize(3); //容量不会改变
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;

	
	//巧用swap收缩内存
	//代码解释：vector<int>(v)匿名对象 通过拷贝构造函数 
	//拷贝了一个新的对象(新的对象大小和容量均为拷贝对象有内容的部分即capcity=size)
	//统计swap(v)交换函数 v指向匿名对象实际内容 而匿名对象指向最初内容，之后后 匿名对象所指回收
	//这样就收缩了内存

	vector<int>(v).swap(v);  //第一个v是一个匿名对象
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;
}

//案例2 巧用reserve 预留空间
void test07()
{
	vector<int> v;
	v.reserve(100000);
	int num = 0;
	int* p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}


void test08()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//逆序遍历
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		cout << *it << endl;
	}

	//vector的迭代器是随机访问迭代器，支持跳跃访问
	vector<int>::iterator itBegin = v.begin();
	itBegin += 3;
	cout << *itBegin << endl;

	
	//list<int>L;
	//L.push_back(10);
	//L.push_back(20);
	//L.push_back(30);
	//list<int>::iterator itBegin2 = L.begin();
	//itBegin2 = itBegin2 +1; List的迭代器是不支持随机访问的
	//cout << *itBegin2 << endl;

}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	system("pause");
	return EXIT_SUCCESS;
}

