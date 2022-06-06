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

	virtual int getResult()
	{
		return 0;
	}
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

void test01()
{
	AbstractCalculator* calculator = new AddCalculator;

	calculator->m_A = 10;
	calculator->m_B = 20;
	cout << calculator->getResult() << endl;

	delete calculator;

	calculator = new SubCalculator;
	calculator->m_A = 300;
	calculator->m_B = 100;
	cout << calculator->getResult() << endl;

	delete calculator;
	

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}



