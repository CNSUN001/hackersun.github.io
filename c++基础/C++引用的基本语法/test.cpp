//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//

//&(引用)的用法   类型 & 别名 = 原名
//void test01()
//{
//	int a = 10;
//	int& b = a;
//
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
//void test02()
//{
//	int a = 10;
//	int& b = a;//引用必须初始化
//
//	//引用一旦初始化，就不可以引向其他变量
//
//	int c = 100;
//
//	b = c;//仅仅是赋值而已
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
////对数组建立引用
//void test03()
//{
//	//1 直接建立引用
//	int arr[10] = { 0 };
//	int(&pArr)[10] = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 100 + i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << pArr[i] << endl;
//	}
//
//	//2 先定义出数组类型，再通过类型 定义引用
//	typedef int(ARRAY_TYPE)[10];
//	//类型& 别名 = 原名
//	ARRAY_TYPE& pArr2 = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << pArr2[i] << endl;
//	}
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
//
////1 值传递 
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2 地址传递
//void mySwap02(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void mySwap03(int &a, int &b) //int &a = a
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////3 引用传递
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);
//	//mySwap02(&a, &b);
//	mySwap03(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
//int& func()
//{
//	int a =10;
//	return a;
//}
//
////引用主要事项
//void test02()
//{
//	//1 引用必须引一块合法内存空间
//	//int& a = 10;
//
//	//2 不要返回局部变量的引用
//	int& ref = func();
//	cout << "ref = " << ref << endl;//结束函数局部变量就会被释放
//	cout << "ref = " << ref << endl;
//
//}
//
//int& func2()
//{
//	static int a = 10;
//	return a;
//}
//
//void test03()
//{
//	int& ref = func2();
//
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	//当函数的返回值是引用，函数的调用可以作为左值
//	func2() = 1000;
//	cout << "ref = " << ref << endl;
//
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//引用的本质在C++内部实现是一个指针常量

//int& aRef = a;//自动转换为 int* const aRef = &a; 
//aRef = 20; //内部发现 *aRef = 20;

struct Person
{
	int age;
};

void allocateSpace(Person** p)
{
	*p = (Person*)malloc(sizeof(Person));
	if (*p == NULL)
	{
		return;
	}
	(*p)->age = 10;
}

void test01()
{
	Person* p = NULL;
	allocateSpace(&p);

	cout << "p.age = " << p->age << endl;
}


void allocateSpace2(Person* &pp )//通过引用解决
{
	pp = (Person*)malloc(sizeof(Person));
	if (pp == NULL)
	{
		return;
	}
	pp->age = 20;
}
void test02()
{
	Person* p = NULL;
	allocateSpace2(p);

	cout << "p.age = " << p->age << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//常量的引用
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void test01()
{
	// int &ref =10;
	const int& ref = 10; //加了const之后，相当于写成 int temp = 10; const int &ref = temp;
	//加了const实际引用的是一块临时的空间
	int* p = (int*)&ref;
	*p = 10000;

	cout << ref << endl;
}

//常量引用的使用场景  修饰函数中的形参，防止误操作
void showValue(const int &a)
{
	//a = 10000;
	//int* p = (int*)&a;
	//*p = 1000;
	cout << "a =  " << a << endl;
}
void test02()
{
	int a = 100;
	showValue(a);
}

int main()
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}

