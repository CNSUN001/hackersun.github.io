#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;

/*
merge算法 容器元素合并，并存储到另一容器中
注意 : 两个容器必须是有序的,顺序要一致
*/

void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	vector<int>vTarget;//目标容器
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), [](int val) {cout << val << " "; });

}

//sort
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	sort(v1.begin(), v1.end(), greater<int>());
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " "; });
	cout << endl;

}

//random_shuffle算法 对指定范围内的元素随机调整次序
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
}

//reverse算法 反转指定范围的元素
void test04()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });

}

int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}

