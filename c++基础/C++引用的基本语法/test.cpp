#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//&(引用)的用法   类型 & 别名 = 原名
void test01()
{
	int a = 10;
	int& b = a;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void test02()
{
	int a = 10;
	int& b = a;//引用必须初始化

	//引用一旦初始化，就不可以引向其他变量

	int c = 100;

	b = c;//仅仅是赋值而已

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

//对数组建立引用
void test03()
{
	//1 直接建立引用
	int arr[10] = { 0 };
	int(&pArr)[10] = arr;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << pArr[i] << endl;
	}

	//2 先定义出数组类型，再通过类型 定义应用
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

