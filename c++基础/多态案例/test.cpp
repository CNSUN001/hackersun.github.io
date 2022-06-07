#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_A + m_B;
		}
		else if (oper == "-")
		{
			return m_A - m_B;
		}
		else if (oper == "*")
		{
			return m_A * m_B;
		}

	}
	int m_A;
	int m_B;
};

//设计原则：开闭原则
//对扩展进行开放 对修改进行关闭

void test01()
{
	calculator c;
	c.m_A = 10;
	c.m_B = 10;
	cout << c.getResult("+") << endl;
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

//利用多态实现
//后续维护 修改 方便不需要更改源代码
class AbstractCalculator
{
public:
	AbstractCalculator():m_A(0),m_B(0)
	{}

	//纯虚函数
	//如果一个类保护纯虚函数，那么这个类就无法实例化对象
	//抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual int getResult() = 0;

	//virtual int getResult()
	//{
	//	return 0;
	//}
	int m_A;
	int m_B;
};

//加法计算器
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A + m_B;
	}
};

//减法计算器
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A - m_B;
	}
};

//乘法
class MulCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A * m_B;
	}
};

class Test : public AbstractCalculator
{
};

void test01()
{
	AbstractCalculator* calculator = new AddCalculator;

	//AbstractCalculator abc;  	//如果一个类保护纯虚函数，那么这个类就无法实例化对象 抽象类
	

	calculator->m_A = 10;
	calculator->m_B = 20;
	cout << calculator->getResult() << endl;

	delete calculator;

	calculator = new SubCalculator;
	calculator->m_A = 300;
	calculator->m_B = 100;
	cout << calculator->getResult() << endl;

	delete calculator;
	
	//Test t; //纯虚函数的子类也是 抽象类 无法实例化对象
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//模板方法是设计模式

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class AbstractDringing
{
public:
	//Boil
	virtual void Boil() = 0;
	//Brew
	virtual void Brew() = 0;
	//PourInCup
	virtual void PourInCup() = 0;
	
	//规定流程
	void MakeDring()
	{
		this->Boil();
		this->Brew();
		this->PourInCup();
	}
	 
};

class Tea
{
	virtual void Boil()
	{
		cout << "烧水" << endl;
	}
	virtual void Brew()
	{
		cout << "煮茶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "茶倒入杯子" << endl;
	}
};


class Coffee
{
	virtual void Boil()
	{
		cout << "Coffee" << endl;
	}
	virtual void Brew()
	{
		cout << "煮Coffee" << endl;
	}
	virtual void PourInCup()
	{
		cout << "Coffee倒入杯子" << endl;
	}
};
void test01(AbstractDringing* drink)
{
	drink->MakeDring();
}

void test02()
{
	test01((AbstractDringing*)new Tea);

	test01((AbstractDringing*)new Coffee);

}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

