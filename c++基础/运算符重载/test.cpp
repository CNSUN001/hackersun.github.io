#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//+运算符号重载

class Person
{
public:
	Person(int a,int b):m_A(a),m_B(b)
	{}

	//Person operator+(Person &p)//赋予+了一个新的含义
	//{
	//	Person temp(0, 0);
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;

	//	return temp;
	//}

	int m_A;
	int m_B;
};

//全局函数实现
Person operator+(Person &p1,Person &p2)
{
	Person temp(0, 0);
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

void test01()
{
	Person p1(10, 10);
	Person p2(20, 20);

	//Person p3 = p1.operator+(p2);

	Person p3 = p1 + p2;//全局如果跟成员函数同时存在 会出现二义性

	cout << p3.m_A << p3.m_B << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#if 0
// 左移<<运算符重载
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p1);
public:
	Person(int a,int b): m_A(a),m_B(b)
	{}

	
	ostream& operator<<(ostream& cout)   //成员函数无法实现  cout<< p1功能 
	{
		cout << "m_A = " <<this->m_A << " m_B = " << this->m_B;
		return cout;
	}

private:
	int m_A;
	int m_B;
};

//利用全局函数实现左移运算符重载

ostream& operator<<(ostream& cout, Person& p1)
{
	cout<< "m_A = " << p1.m_A << " m_B = " << p1.m_B ;
	return cout;
}


void test01()
{
	Person p1(10, 10);
	//p1 << cout << endl;   //成员函数调用方式
	cout << p1<<endl;
	
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#if 0
//运算符++重载
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyInter
{
	friend ostream& operator<<(ostream& cout, MyInter& p);
public:
	MyInter()
	{
		m_Num = 0;
	}

	//前置++
	MyInter& operator++()   //   int& a = a       int const * a = &a; 
	{
		this->m_Num++;
		return *this;
	}

	//后置++
	MyInter operator++(int) //占位运算符区分后置++    后置++返回的是只可能值，要返回中转变量
	{
		//先记录初始状态
		MyInter temp = *this;

		this->m_Num++;

		return temp;
	}
private:
	int m_Num ;
};

ostream& operator<<(ostream& cout,MyInter& myInt)   
{
	cout << myInt.m_Num;
	return cout;
}

void test01()
{
	MyInter myInt;
	cout << ++(++myInt) << endl;

	cout << myInt << endl;

}

void test02()
{
	
	MyInter myInt;

	cout << myInt++ << endl;
	cout << myInt << endl;

}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#if 0
//指针运算符的重载         
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	Person(int age):m_Age(age)
	{
		cout << "Person的有参构造调用" << endl;
	}

	void showAge()
	{
		cout << "年龄位：" << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person的析构调用" << endl;
	}

	int m_Age;
};

class SmartPoint
{
public:
	//SmartPoint(Person* person):m_person(person) {}
	
	//通过智能指针维护 堆上数据销毁  
	SmartPoint(Person* person)
	{
		this->m_person = person;
	}

	//重载->运算符

	Person* operator->()
	{
		return this->m_person;
	}

	//重载*运算符
	Person& operator*()
	{
		return *m_person;
	}


	~SmartPoint()
	{
		if (this->m_person)
		{
			delete this->m_person;
			this->m_person = NULL;
		}
	}

private:
	Person* m_person;
};

void test01()
{
	//Person p(100);
	//Person* p = new Person(18);
	//(*p).showAge();
	//p->showAge();
	//delete p;

	//利用智能指针 管理 new出来的Person的释放操作
	SmartPoint sp(new Person(18));

	sp->showAge();
	//sp.operator->()->showAge();//本质sp->->showAge(); 编译器简化位sp->showAge();


	(*sp).showAge();
	
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//赋值运算符=的重载
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(char* name, int age)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
		this->m_Age = age;
	}

	Person(const Person& person)
	{
		this->m_Name = new char[strlen(person.m_Name) + 1];
		strcpy(this->m_Name, person.m_Name);
		this->m_Age = person.m_Age;
	}

	//重载=
	Person& operator=(const Person& person)
	{
		//先判断原来堆区是否有东西，如果有先释放了
		if (this->m_Name != NULL)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}

		this->m_Name = new char[strlen(person.m_Name) + 1];
		strcpy(this->m_Name, person.m_Name);
		this->m_Age = person.m_Age;
		return *this;
	}

	~Person()
	{
		if (this->m_Name != NULL)
		{
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}

	char* m_Name;
	int m_Age;
};

//编译器 默认给一个类至少添加4个函数  1默认构造 2析构 3拷贝构造（值拷贝） 4operator= （值拷贝）

void test01()
{
	Person p1("Tom",10);
	p1.m_Age = 10;

	Person p2("Jerry",19);

	Person p3("",0);

	p3 = p2 = p1;

	//p3.operator=(p2.operator=(p1));


	Person p4 = p3;

	//p2 = p1;
	cout << "姓名:" << p1.m_Name << " 年龄:" << p1.m_Age << endl;
	cout << "姓名:" << p2.m_Name << " 年龄:" << p2.m_Age << endl;

	cout << "姓名:" << p3.m_Name << " 年龄:" << p3.m_Age << endl;
	cout << "姓名:" << p4.m_Name << " 年龄:" << p4.m_Age << endl;


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif
