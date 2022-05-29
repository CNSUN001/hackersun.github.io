#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//+�����������

class Person
{
public:
	Person(int a,int b):m_A(a),m_B(b)
	{}

	//Person operator+(Person &p)//����+��һ���µĺ���
	//{
	//	Person temp(0, 0);
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;

	//	return temp;
	//}

	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ��
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

	Person p3 = p1 + p2;//ȫ���������Ա����ͬʱ���� ����ֶ�����

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
// ����<<���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p1);
public:
	Person(int a,int b): m_A(a),m_B(b)
	{}

	
	ostream& operator<<(ostream& cout)   //��Ա�����޷�ʵ��  cout<< p1���� 
	{
		cout << "m_A = " <<this->m_A << " m_B = " << this->m_B;
		return cout;
	}

private:
	int m_A;
	int m_B;
};

//����ȫ�ֺ���ʵ���������������

ostream& operator<<(ostream& cout, Person& p1)
{
	cout<< "m_A = " << p1.m_A << " m_B = " << p1.m_B ;
	return cout;
}


void test01()
{
	Person p1(10, 10);
	//p1 << cout << endl;   //��Ա�������÷�ʽ
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
//�����++����
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

	//ǰ��++
	MyInter& operator++()   //   int& a = a       int const * a = &a; 
	{
		this->m_Num++;
		return *this;
	}

	//����++
	MyInter operator++(int) //ռλ��������ֺ���++    ����++���ص���ֻ����ֵ��Ҫ������ת����
	{
		//�ȼ�¼��ʼ״̬
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
//ָ�������������         
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:

	Person(int age):m_Age(age)
	{
		cout << "Person���вι������" << endl;
	}

	void showAge()
	{
		cout << "����λ��" << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person����������" << endl;
	}

	int m_Age;
};

class SmartPoint
{
public:
	//SmartPoint(Person* person):m_person(person) {}
	
	//ͨ������ָ��ά�� ������������  
	SmartPoint(Person* person)
	{
		this->m_person = person;
	}

	//����->�����

	Person* operator->()
	{
		return this->m_person;
	}

	//����*�����
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

	//��������ָ�� ���� new������Person���ͷŲ���
	SmartPoint sp(new Person(18));

	sp->showAge();
	//sp.operator->()->showAge();//����sp->->showAge(); ��������λsp->showAge();


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
//��ֵ�����=������
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

	//����=
	Person& operator=(const Person& person)
	{
		//���ж�ԭ�������Ƿ��ж�������������ͷ���
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

//������ Ĭ�ϸ�һ�����������4������  1Ĭ�Ϲ��� 2���� 3�������죨ֵ������ 4operator= ��ֵ������

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
	cout << "����:" << p1.m_Name << " ����:" << p1.m_Age << endl;
	cout << "����:" << p2.m_Name << " ����:" << p2.m_Age << endl;

	cout << "����:" << p3.m_Name << " ����:" << p3.m_Age << endl;
	cout << "����:" << p4.m_Name << " ����:" << p4.m_Age << endl;


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif
