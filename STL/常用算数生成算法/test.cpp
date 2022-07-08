#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>	//accumulate算法的头文件
#include <iterator>
using namespace std;

//accumulate算法 计算容器元素累计总和

void test01()
{
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int num = accumulate(v.begin(), v.end(),1000);//参数3代表累加的起始值
	cout << num << endl;
}

//fill算法 向容器中添加元素
void test02()
{
	vector<int>v;
	v.resize(10);
	fill(v.begin(), v.end(), 100);
	//copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

