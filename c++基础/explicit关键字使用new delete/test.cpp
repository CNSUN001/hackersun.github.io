
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString(char* str)
	{

	}

	explicit MyString(int len) //explicit��ֹ����ʽ���������
	{

	}
};

void test01()
{
	MyString str("abcd");

	MyString str2(10);

	MyString str3 = 10;//�������Ϊ"10"

}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//new delete

//malloc  ȱ�� 
//1  ����Ա����ȷ�����󳤶�
//2  malloc����һ��void*���ȣ�C++����ǿת
//3  malloc��������ʧ�ܣ������жϷ���ֵ
//4	 malloc��Ҫ�û�������ʼ��                                                 

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person���캯������" << endl;
	}

	Person(int a)
	{
		cout << "Person�вι��캯������" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
};


//malloc �� new����
//malloc �� free ���ڿ⺯��    new �� delete ���������
//malloc ������ù��캯��  new����ù��캯��
//malloc ����void* C++��Ҫǿת  new���ش��������ָ��

void test01()
{
	Person* p = new Person;
	delete p;
}

//ע������ ��Ҫ��void*ȥ����new�����Ķ���,����void*�޷�������������
void test02()
{
	void* p = new Person;
	delete p;
	//delete (Person*)p;
}

//����new��������
void test03()
{
	//int* pInt = new int[10];
	//double* pD = new double[10];

	//�����������飬һ������Ĭ�Ϲ��캯��
	//Person* pPerson = new Person[10];

	////�ͷ�����ʱ�� ��Ҫ��[]
	//delete []pPerson;

	//ջ�Ͽ��٣�����û��Ĭ�Ϲ���
	Person pArray[2] = { Person(10),Person(20) };

}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

