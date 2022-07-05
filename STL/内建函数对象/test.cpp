#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <functional> //内建函数头文件
#include <vector>
#include <algorithm>
using namespace std;

/*
template<class T> T negate<T>//取反仿函数  一元运算
*/

void test01()
{
	negate<int>n;
	cout << n(10) << endl;
}

//template<class T> T plus<T>//加法仿函数
void test02()
{
	plus<int>p;//两个数想加必须类型一样，所以给出一个就可以
	cout << p(10, 10) << endl;

}

//template<class T> bool greater<T>//大于
int compareInt(int v1, int v2)
{
	return v1 > v2;
}

void printVector(int val)
{
	cout << val << endl;
}

void test03()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(50);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);

	//从大到小排序
	//sort(v.begin(), v.end(), compareInt);
	sort(v.begin(), v.end(), greater<int>());
	//for_each(v.begin(), v.end(), printVector);
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

