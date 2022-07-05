//常用遍历算法
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//for_each
//for_each有返回值
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

