
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString(char* str)
	{

	}

	explicit MyString(int len) //explicit防止用隐式法构造对象
	{

	}
};

void test01()
{
	MyString str("abcd");

	MyString str2(10);

	MyString str3 = 10;//可能误解为"10"

}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//new delete

//malloc  缺点 
//1  程序员必须确定对象长度
//2  malloc返回一个void*长度，C++必须强转
//3  malloc可能申请失败，必须判断返回值
//4	 malloc需要用户对它初始化                                                 

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person构造函数调用" << endl;
	}

	Person(int a)
	{
		cout << "Person有参构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};


//malloc 和 new区别
//malloc 和 free 属于库函数    new 和 delete 属于运算符
//malloc 不会调用构造函数  new会调用构造函数
//malloc 返回void* C++下要强转  new返回创建对象的指针

void test01()
{
	Person* p = new Person;
	delete p;
}

//注意事项 不要用void*去接收new出来的对象,利用void*无法调用析构函数
void test02()
{
	void* p = new Person;
	delete p;
	//delete (Person*)p;
}

//利用new开辟数组
void test03()
{
	//int* pInt = new int[10];
	//double* pD = new double[10];

	//堆区开辟数组，一点会调用默认构造函数
	//Person* pPerson = new Person[10];

	////释放数组时候 需要加[]
	//delete []pPerson;

	//栈上开辟，可以没有默认构造
	Person pArray[2] = { Person(10),Person(20) };

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

