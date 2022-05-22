#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

#if 0
//struct Person
//{
//	char name[64];
//	int age;
//
//	void PersonEat()
//	{
//		printf("%s在吃饭\n", name);
//	}
//
//
//};
//
//
//struct Dog
//{
//	char name[64];
//	int age;
//
//	void dogEat()
//	{
//		printf("%s在狗粮\n", name);
//	}
//
//};
//
//void test01()
//{
//	Person p;
//	strcpy(p.name, "老王");
//	p.PersonEat();
//	
//}

//C++封装 理念 ，将属性和行为作为一个整体，来表现生活中的事物

//第二个理念 ，将属性和行为，加以权限控制

//struct 和 class 的区别

//class 默认权限是私有 和struct是公有

//public 公共权限 private 私有权限 protected 保护权限

//public 公共权限
// 成员 类内 类外 都可以访问

//private 私有权限		子class不可以访问父class的private权限
//成员 类内 可以访问 

//protected 保护权限   子class可以访问父class的protected权限
//成员 类内 可以访问

class  Person
{

	//公共权限
public:
	char name[64];
	int age;


	void PersonEat()
	{
		printf("%s在吃饭\n", name);
	}
};

struct Person2
{
public:
	string m_Name;//公共1权限

protected:
	string m_Car;//保护权限

private:
	int m_pwd;//私有权限

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_pwd = 123456;

	}
};

void test02()
{
	Person2 p;
	p.m_Name = "李四";
	//p.m_Car = "奔驰"; 保护权限 类外访问不到
	//p.m_pwd = 123;//私有权限 类外不可访问

}

class Dog
{
	char name[64];
	int age;

	void dogEat()
	{
		printf("%s在狗粮\n", name);
	}

};

void test01()
{
	Person p;
	strcpy(p.name, "老王");
	p.PersonEat();

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//尽量把成员设置成私有
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	//设置lover
	void setLover(char *arr)
	{
		m_Lover = arr;
	}

	char* getLover()
	{
		return  m_Lover;
	}

private:
	string m_Name;//可读可写
	int m_Age = 18;//只读
	char *m_Lover = NULL;//只写

};

void test01()
{
	Person p;
	//将char*类型隐式转换为string
	p.setName("张三");
	cout << "姓名：" << p.getName() << endl;

	//获取年龄
	cout << "年龄：" << p.getAge() << endl;

	//设置lover
	char arr[20] = "AB";
	p.setLover(arr);
	cout << "Lover：" << p.getLover() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

