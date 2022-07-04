#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//一元谓词

class GreaterThan20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterThan20());
	if (ret != v.end())
	{
		cout << "找到大于20的数字为：" << *ret << endl;
	}
}

//二元谓词
void myPrintInt(int val)
{
	cout << val << " ";
}

class MyCompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	sort(v.begin(), v.end()); //从小到大

	for_each(v.begin(), v.end(), myPrintInt);
	cout << endl;

	sort(v.begin(), v.end(), MyCompare()); //从大到小
	for_each(v.begin(), v.end(), myPrintInt);
	cout << endl;


	//lambda表达式  []代表lambda表达式标志  [](){}
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

