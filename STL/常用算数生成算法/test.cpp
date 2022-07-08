#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>	//accumulate�㷨��ͷ�ļ�
#include <iterator>
using namespace std;

//accumulate�㷨 ��������Ԫ���ۼ��ܺ�

void test01()
{
	vector<int>v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int num = accumulate(v.begin(), v.end(),1000);//����3�����ۼӵ���ʼֵ
	cout << num << endl;
}

//fill�㷨 �����������Ԫ��
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

