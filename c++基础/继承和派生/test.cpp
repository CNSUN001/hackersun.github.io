#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承基本语法

//class News
//{
//public:
//	void header()
//	{
//		cout << "公共的头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共的底部" << endl;
//	}
//	void leftList()
//	{
//		cout << "公共的左侧列表" << endl;
//	}
//	void content()
//	{
//		cout << "新闻播报..." << endl;
//	}
//
//};
//
//class Sport
//{
//public:
//	void header()
//	{
//		cout << "公共的头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共的底部" << endl;
//	}
//	void leftList()
//	{
//		cout << "公共的左侧列表" << endl;
//	}
//	void content()
//	{
//		cout << "世界杯..." << endl;
//	}
//};


//利用继承 实现
//j继承优点，减少重复的代码，提高代码复用性
class BasePage
{
public:
	void header()
	{
		cout << "公共的头部" << endl;
	}
	void footer()
	{
		cout << "公共的底部" << endl;
	}
	void leftList()
	{
		cout << "公共的左侧列表" << endl;
	}
};

//class 子类：继承方式  父类
//News 子类  派生类
//BasePage 父类 基类
class News :public BasePage
{
public:
	void content()
	{
		cout << "新闻播报..." << endl;
	}
};

class Sport :public BasePage
{
public:
	void content()
	{
		cout << "世界杯..." << endl;
	}
};

void test01()
{
	News news;
	cout << "新闻页面内容入下：" << endl;
	news.header();
	news.footer();
	news.leftList();
	news.content();

	Sport sp;
	cout << "体育页面内容入下：" << endl;
	sp.header();
	sp.footer();
	sp.leftList();
	sp.content();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
//继承方式

//1 公共继承

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 100;//父类中公共权限，子类中变为 公共权限
		m_B = 100;//父类中保护权限，子类中变为 保护权限
		//m_C = 100;  父类中私有成员，子类无法访问
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;//在Son1中 m_A是公共权限 类外可以访问
	//s1.m_B = 100;//在Son1中 m_B是保护权限 类外不可以访问
}


//保护继承
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100; //父类中公共权限，子类中变为 保护权限
		m_B = 100; //父类中保护权限，子类中变为 保护权限

		//m_C = 100;  父类中私有成员，子类无法访问
	}
};
 
void test02()
{
	Son2 s;
	//s.m_A = 100;	//子类保护权限 无法访问
	//s.m_B = 100;	//子类保护权限 无法访问
	//s.m_C = 100; 子类本身没有访问权限

}

//私有继承

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 100; //父类中公共权限，子类中变为 私有权限
		m_B = 100; //父类中保护权限，子类中变为 私有权限

		//m_C = 100;  父类中私有成员，子类无法访问
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;//在son3中 已经变为私有权限，GrandSon3访问不到
		//m_B = 100;	
	}
};

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承中的对象模型

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //父类中私有属性，子类访问不到，是编译器给隐藏了
};

class Son :public Base
{
public:
	int m_D;  // 在develop command 查看对象模拟     
	//跳转盘符 D:
	// 跳转路径  cd +文件路径
	//cl(英文字母l) / d1（数字1） reportSingleClassLayoutSon test.cpp  
}; 

void test01()
{
	cout << "size of Son =" << sizeof(Son) << endl; //结果为16
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承的构造和析构

class Base1
{
public:
	Base1()
	{
		cout << "Base1构造函数调用" << endl;
	}
	~Base1()
	{
		cout << "Base1析构函数调用" << endl;
	}
};


class Other
{
public:
	Other()
	{
		cout << "Other构造函数调用" << endl;
	}
	~Other()
	{
		cout << "Other析构函数调用" << endl;
	}
};

class Son1 :public Base1
{
public:
	Son1()
	{
		cout << "Son1构造函数调用" << endl;
	}
	~Son1()
	{
		cout << "Son1析构函数调用" << endl;
	}

	Other other;
};



void test01()
{
	//Base1 b;
	Son1 b;  //先调用父类构造，再调用自身构造，析构顺序与构造相反
}


class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "Base2构造函数 调用" << endl;
	}
	int m_A;
};

class Son2 :public Base2
{
public:
	Son2(int a = 1000):Base2(a)  //利用初始化列表语法，显示调用父类中的其他构造函数
	{
		cout << "Son2构造函数调用" << endl;
	}
};

void test02()
{
	Son2 s;
	cout << s.m_A << endl;
}

//父类的所有构造函数是不会被子类继承下去的

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承中同名成员处理

class Base
{
public:
	Base()
	{
		this->m_A = 10;
	}
	void func()
	{
		cout << "Base中的func调用" << endl;
	}

	void func(int a)
	{
		cout << "Base中的func int调用" << endl;
	}
	int m_A;
};

class Son :public Base
{
public:

	Son()
	{
		this->m_A = 20;
	}

	void func()
	{
		cout << "Son中的func调用" << endl;
	}

	int m_A;

};

void test01()
{
	Son s1;

	cout << s1.m_A << endl;

	//可以利用作用域访问父类同名成员
	cout << s1.Base::m_A << endl;
}

void test02()
{
	Son s1;
	s1.func();
	s1.Base::func();

	//当子类重新定义了父类中同名成员函数，子类的成员会 隐藏掉父类所有重载版本的同名成员 
	s1.Base::func(10);

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
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//继承中的同名  静态成员处理

class Base
{
public:

	static void func()
	{
		cout << "Base中的func调用" << endl;
	}

	static int m_A;
};

int Base::m_A = 10;

class Son :public Base
{
public:

	static void func()
	{
		cout << "Son中的func调用" << endl;
	}

	static int m_A;
};
int Son::m_A = 20;

void test01()
{
	//1 通过对象访问
	Son s;
	cout << "m_A = " << s.m_A << endl;
	cout << "Base中m_A = " << s.Base::m_A << endl;

	//2 通过类名访问
	cout << "m_A = " << Son::m_A << endl;
	//通过类名的方式 访问 父类作用域下m_A静态成员变量
	cout << "m_A = " << Son::Base::m_A << endl;

}

void test02()
{
	//1 通过对象访问
	Son s;
	s.func();
	s.Base::func();

	//2 通过类名访问
	Son::func();
	Son::Base::func();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//多继承基本语法

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
 
class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		this->m_B = 20;
	}
	int m_B;
};

//多继承
class Son :public Base1, public Base2
{
public:
	int m_C;
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

