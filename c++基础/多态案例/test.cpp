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

//���ԭ�򣺿���ԭ��
//����չ���п��� ���޸Ľ��йر�

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

//���ö�̬ʵ��
//����ά�� �޸� ���㲻��Ҫ����Դ����
class AbstractCalculator
{
public:
	AbstractCalculator():m_A(0),m_B(0)
	{}

	//���麯��
	//���һ���ౣ�����麯������ô�������޷�ʵ��������
	//����������� ����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	virtual int getResult() = 0;

	//virtual int getResult()
	//{
	//	return 0;
	//}
	int m_A;
	int m_B;
};

//�ӷ�������
class AddCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A + m_B;
	}
};

//����������
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A - m_B;
	}
};

//�˷�
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

	//AbstractCalculator abc;  	//���һ���ౣ�����麯������ô�������޷�ʵ�������� ������
	

	calculator->m_A = 10;
	calculator->m_B = 20;
	cout << calculator->getResult() << endl;

	delete calculator;

	calculator = new SubCalculator;
	calculator->m_A = 300;
	calculator->m_B = 100;
	cout << calculator->getResult() << endl;

	delete calculator;
	
	//Test t; //���麯��������Ҳ�� ������ �޷�ʵ��������
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//ģ�巽�������ģʽ

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
	
	//�涨����
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
		cout << "��ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�赹�뱭��" << endl;
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
		cout << "��Coffee" << endl;
	}
	virtual void PourInCup()
	{
		cout << "Coffee���뱭��" << endl;
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

