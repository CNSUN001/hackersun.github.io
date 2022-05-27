#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����ģʽ ��ϯ��
//����ģʽ ͨ��һ����ֻ��ʵ����Ψһ��һ������
class ChairMan
{
public:
	static ChairMan* getInstance()
	{
		return singleMan;
	}

private:
	//�����캯��˽�л�����֤���ܴ����������
	ChairMan(){};

	ChairMan(const ChairMan&) {};
private:
	//����ֻ�ṩֻ���ӿ�
	static ChairMan* singleMan;//�������� �����ʼ��
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

//����ģʽ ��ӡ������
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
	p1->printText("��ְ֤��");
	p1->printText("��ְ֤��");

	cout << "��ӡ��ʹ�ô�����" << p1->m_Count << endl;

	Printer* p2 = Printer::getInstance();
	p2->printText("��������");
	cout << "��ӡ��ʹ�ô�����" << p2->m_Count << endl;

}

int main()
{
	test01();
	//cout << "main��������" << endl;
	system("pause");
	return EXIT_SUCCESS;
}


