#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//实现通用排序
template<class T>//typename 和class一样
void mySort(T arr[],int len)
{
	int flag = 1;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int  temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}

template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	char charArray[] = "helloworld";
	int len = strlen(charArray);
	
	mySort(charArray, len);
	printArray(charArray, len);

	int intArray[] = { 5,7,1,4,2,3 };
	int len2 = sizeof(intArray)/sizeof(intArray[0]);
	mySort(intArray, len2);
	printArray(intArray, len2);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

