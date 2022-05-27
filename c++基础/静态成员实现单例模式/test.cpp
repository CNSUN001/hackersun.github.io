#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//单例模式 主席类
//单例模式 通过一个类只能实例化唯一的一个对象
class ChairMan
{
public:
	static ChairMan* getInstance()
	{
		return singleMan;
	}

private:
	//将构造函数私有化，保证不能创建多个对象
	ChairMan(){};

	ChairMan(const ChairMan&) {};
private:
	//对外只提供只读接口
	static ChairMan* singleMan;//类内声明 类外初始化
};
ChairMan* ChairMan::singleMan = new ChairMan;

void test01()
{
	//ChairMan c1;
	//ChairMan c2;
	//ChairMan* c3 = new ChariMan;

	//ChairMan* c1 = ChairMan::singleMan;
	//ChairMan* c2 = ChairMan::singleMan;

	//if (c1 == c2)
	//{
	//	cout << " c1 = c2" << endl;
	//}
	//else
	//{
	//	cout << " c1 != c2" << endl;
	//}

	ChairMan* c1 = ChairMan::getInstance();
	ChairMan* c2 = ChairMan::getInstance();

	//ChairMan* c3 = new ChairMan(*c1);
	if (c1 == c2)
	{
		cout << " c1 = c2" << endl;
	}
	else
	{
		cout << " c1 != c2" << endl;
	}

	//if (c1 == c3)
	//{
	//	cout << " c1 = c3" << endl;
	//}
	//else
	//{
	//	cout << " c1 != c3" << endl;
	//}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//单例模式 打印机案例
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class Printer
{
public:
	static Printer* getInstance()
	{
		return printer;
	}
	void printText(string text)
	{
		m_Count++;
		cout << text << endl;
	}

	int m_Count = 0;

private:
	Printer() { m_Count = 0; };
	Printer(const Printer& p) {};

	static Printer* printer;
};

Printer* Printer::printer = new Printer;


void test01()
{
	Printer* p1 = Printer::getInstance();
	p1->printText("入职证明");
	p1->printText("离职证明");

	cout << "打印机使用次数：" << p1->m_Count << endl;

	Printer* p2 = Printer::getInstance();
	p2->printText("调休申请");
	cout << "打印机使用次数：" << p2->m_Count << endl;

}

int main()
{
	test01();
	//cout << "main函数调用" << endl;
	system("pause");
	return EXIT_SUCCESS;
}


