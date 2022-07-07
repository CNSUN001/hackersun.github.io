#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
#include <algorithm>
#include <iterator>
using namespace std;

//copy�㷨 ��������ָ����Χ��Ԫ�ؿ�������һ������
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

//replace�㷨 ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if(iterator beg, iterator end, _callback, newvalue) �������滻

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
	//�������е�3�滻Ϊ3000
	replace(v.begin(), v.end(), 3, 3000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//�����������д���3�Ķ��滻Ϊ 30000;
	replace_if(v.begin(), v.end(), MyReplace(), 30000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}

//swap����
void test03()
{
	vector <int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2(10, 100);

	cout << "����ǰ��" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

