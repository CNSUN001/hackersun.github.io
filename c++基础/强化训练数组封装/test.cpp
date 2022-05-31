#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "myArray.h"

void test01()
{
	MyArray arr;
	for (int i = 0; i < 10; i++)
	{
		arr.pushBack(i);
	}

	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr.getData(i) << endl;
	}

	MyArray arr2(arr);
	for (int i = 0; i < arr2.getSize(); i++)
	{
		cout << arr2.getData(i) << endl;
	}

	arr2.setData(0, 1000);
	  
	arr[0] = 1000;
	cout << arr[0] << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

