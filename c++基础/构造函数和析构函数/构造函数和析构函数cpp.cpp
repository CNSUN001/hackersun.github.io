
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public://�������������Ҫ������ȫ��������

	//���캯��
	//û�з���ֵ ����дvoid
	//������ �� ������ͬ
	//�����в��������Է�������
	//���캯�� �б������Զ�����һ�� �����ֶ�����
	Person()//������ʱ�����
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	//��������
	//û�з���ֵ ����дvoid
	//������ �� ������ͬ ������ǰ��~
	//�����Կ����в����������Է�������
	//�������� �б������Զ�����һ�� �����ֶ�����

	~Person()//ջ�ͷŵ�ʱ�����
	{
		cout << "Person��������������" << endl;
	}
};

void test01()
{
	//Person p;
}

int main()
{
	//test01();
	Person p;
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;




#if 0
//���캯���ķ���
//���ղ������ࣺ�޲ι�����вι���
//�������ͷ��ࣺ��ͨ���캯�� �������캯��

class Person
{
public:
	//���ղ�������
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int a)
	{
		m_Age = a;
		cout << "Person���вι��캯������" << endl;
	}

	//�������캯��
	Person(const Person &p)//�ڸ��βδ���ֵʱ�����ٴε��ÿ������캯��
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	//��������
	~Person()
	{
		cout << "Person���������캯������" << endl;
	}

	int m_Age = 0;
 };


//���캯���ĵ���
void test01()
{
	//Person p;

	////1 ���ŷ�
	//Person p1(10);
	//Person p2(p);

	//ע������һ
	//��Ҫ�����ŷ� �����޲ι��캯��  //Person p3();//����������������������� void func()
	
	//2 ��ʾ��
	//Person p3 = Person(10);//�вι���
	//Person p4 = Person(p3);//��������

	//Person(10);//��������  �ص� ��ǰ��ִ����� �������ͷ�

	//cout << "aaa" << endl;

	//ע�������
	//��Ҫ�ÿ������캯�� ��ʼ�� ��������
	//Person(p3); ������������ȥ��������Ϊ��p3�����ʵ����������Ѿ���p3�ͻ��ض���

	//3 ��ʽ��
	Person p5 = 10; // Person p5 = Person(10);
	Person p6 = p5;
}

int main()
{
	//Person p(18);
	//Person p2(p);
	//cout << "p2����" << p2.m_Age << endl;

	test01();
	system("pause");
	return EXIT_SUCCESS;
}

//class Test
//{
//public:
//	Test() {};
//	Test(const Test& t)
//	{
//		cout << "Test Copy Constructor!" << endl;
//	}
//};
//
//void test(Test t){}
//
//int main() {
//
//	Test t;
//
//	test(t);//�����"Test Copy Constructor!"
//
//}
#endif

#if 0 
//�������캯���ĵ���ʱ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	//���ղ�������
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int a)
	{
		m_Age = a;
		cout << "Person���вι��캯������" << endl;
	}

	//�������캯��
	Person(const Person& p)//�ڸ��βδ���ֵʱ�����ٴε��ÿ������캯��
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	//��������
	~Person()
	{
		cout << "Person���������캯������" << endl;
	}

	int m_Age = 0;
};

//1 ���Ѿ������õĶ�������ʼ���µĶ���
void test01()
{
	Person p1(18);

	Person p2= Person(p1);  //Person p2(p1);Person p2= p1;
	cout << "p2������" << p2.m_Age << endl;
}

//2 ֵ���ݵķ�ʽ ������������ֵ
void doWork(Person p) //ֵ���ݱ�����ǵ��ÿ������캯��
{

}
void test02()
{
	Person p1(100);
	doWork(p1);
}

//3 ��ֵ�ķ�ʽ���ؾֲ�����
Person doWork2()
{
	Person p;
	return p;
}
void test03()
{
	Person p = doWork2();
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//���캯���ĵ��ù���
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//1 ���������һ�������������������  Ĭ�Ϲ��죨��ʵ�֣�  ������������ʵ�֣�  �������캯����ֵ������
//2 ����ֽ��ṩ���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯��������Ȼ�ṩ�������캯��
class Person
{
public:
	//Person()
	//{
	//	cout << "Ĭ�Ϲ��캯������" << endl;
	//}
	Person(int age)
	{
		m_Age = age;
		cout << "�вι��캯������" << endl;
	}
	//Person(const Person& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "�������캯������" << endl;
	//}
	~Person()
	{
		cout << "������������" << endl;
	}
	int m_Age = 0;
};

void test01()
{
	Person p1(1);
	p1.m_Age = 20;
	Person p2(p1);
	cout << "p2���� = " << p2.m_Age << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif
