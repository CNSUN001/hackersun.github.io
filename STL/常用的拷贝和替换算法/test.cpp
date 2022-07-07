#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include <algorithm>
#include <iterator>
using namespace std;

//copy算法 将容器内指定范围的元素拷贝到另一容器中
void test01()
{
	vector <int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());
	//for_each(v2.begin(), v2.end(), [](int val) {cout << val << " "; });
	//cout << endl;

	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout," "));
	cout << endl;

}

//replace算法 将容器内指定范围的旧元素修改为新元素
//replace_if(iterator beg, iterator end, _callback, newvalue) 按条件替换

class MyReplace
{
public:
	bool operator()(int val)
	{
		return val > 3;
	}
};

void test02()
{
	vector <int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//将容器中的3替换为3000
	replace(v.begin(), v.end(), 3, 3000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//将容器中所有大于3的都替换为 30000;
	replace_if(v.begin(), v.end(), MyReplace(), 30000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}

//swap交换
void test03()
{
	vector <int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2(10, 100);

	cout << "交换前：" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

