#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��������̽

//1
//���� �� �������ݲ����ĺ��� �Ƿֿ��洢��

//vsĬ�϶�������8

class Person
{
public:
	int m_A;//ֻ�зǾ�̬��Ա���� �����������

	void func()  //��Ա����  �������������
	{}

	static int m_B;//��̬��Ա���� �������������

	static void func2()//��̬��Ա���� �������������
	{

	}

	double m_C;
};

int Person::m_B = 0;

void test01()
{
	Person p1;
	cout << sizeof(p1) << endl; //�����С��1�ֽ� ԭ����ÿ������Ӧ�����ڴ����ж�һ�޶��ĵ�ַ
}

//Ϊʲô��ͨ��Ա�������Է�����ͨ��Ա���� ���Ǿ�̬��Ա���������ԣ�
//thisָ��

int main()
{
	test01();

	Person p1;
	//func()����һ����ʽ��thisָ��˭����  thisָ��˭
	p1.func();
	
	Person p2;
	p2.func();

	system("pause");
	return EXIT_SUCCESS;
}
#endif

//this ָ���ʹ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		// ��;1 ��������Ƴ�ͻ
		this->age = age; 
	}

	//thisָ�� ��ʽ����ÿһ��������

	bool compareAge(Person &p)  
	{
		if (this->age == p.age)
		{
			return true;
		}
		return false;
	}

	Person& personAddPerson(Person& p)  //������ص���ֵ�Ͳ��Ƿ��صı���
	{
		this->age += p.age;
		return *this;  //*this���Ǳ���    ���return *this���ص��ǵ�ǰ����Ŀ�¡���߱�������������ΪA�� ���ǿ�¡�� ����������ΪA&�� ���Ǳ��� ����
	}

	int age;
};

void test01()
{
	//thisָ�� ָ�� �����õĳ�Ա���� �����Ķ���
	Person p1(18);

	cout << "p1������:" << p1.age << endl;

	Person p2(18);

	bool ret = p1.compareAge(p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}

	p1.personAddPerson(p2).personAddPerson(p2).personAddPerson(p2);//��ʽ���
	cout << "p1������:" << p1.age << endl;

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

