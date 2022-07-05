#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

class Myprint:public binary_function<int,int,void>
{
public:
	void operator()(int val,int start)const
	{
		cout << "val = " << val << " start = " << start << " sum = " << val + start << endl;;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << "输入累加值：" << endl;
	int num;
	cin >> num;
	
	//函数对象适配器
	for_each(v.begin(), v.end(), bind2nd(Myprint(),num));
	//for_each(v.begin(), v.end(), bind1st(Myprint(), num));


}
//1 利用bind2d进行绑定
//2 继承 public binary_function<（参数1）int,（参数2）int,（返回值）void>
//3 加const


//2 取反适配器
class GreaterThanFive:public unary_function<int,bool>
{
public:
	bool operator()(int val)const
	{
		return val > 5;
	}
};
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//一元取反
	//vector<int>::iterator  pos = find_if(v.begin(), v.end(), not1(GreaterThanFive()));//not1//取反
	vector<int>::iterator  pos = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(),5)));
	if (pos != v.end())
	{
		cout << "找到小于5的值:" << *pos << endl;
	}
	else
	{ 
		cout << "未找到" << endl;
	}

	//二元取反
	sort(v.begin(), v.end(), not2(less<int>())); //less 两个数比较 STL已经做好了继承
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });
		
}

//1 利用not1取反
//2 继承public unary_function<int,bool>
//3 加const



//3 函数适配器
void myPrint3(int val,int start)
{
	cout << val + start << endl;
}
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//将函数指针 适配成函数对象
	for_each(v.begin(), v.end(),(bind2nd(ptr_fun(myPrint3),1000)));  //ptr_fun将普通函数适配成函数对象
}

//4 成员函数适配器
class Person
{
public:
	Person(string name, int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;

	void showPerson()
	{
		cout << "名字：" << this->m_Name << " 年龄：" << this->m_Age << endl;
	}
	void addAge()
	{
		this->m_Age += 100;
	}
};

//void myPrint4(Person &p)
//{ 
//	cout <<"名字：" << p.m_Name <<" 年龄：" << p.m_Age << endl;
//}

void test04()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	//利用 mem_fun_ref适配
	for_each(v.begin(), v.end(), mem_fun_ref( &Person::showPerson));
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::addAge));
	cout << "--------------------" << endl;
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));

}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}

