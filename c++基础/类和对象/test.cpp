#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

#if 0
//struct Person
//{
//	char name[64];
//	int age;
//
//	void PersonEat()
//	{
//		printf("%s�ڳԷ�\n", name);
//	}
//
//
//};
//
//
//struct Dog
//{
//	char name[64];
//	int age;
//
//	void dogEat()
//	{
//		printf("%s�ڹ���\n", name);
//	}
//
//};
//
//void test01()
//{
//	Person p;
//	strcpy(p.name, "����");
//	p.PersonEat();
//	
//}

//C++��װ ���� �������Ժ���Ϊ��Ϊһ�����壬�����������е�����

//�ڶ������� �������Ժ���Ϊ������Ȩ�޿���

//struct �� class ������

//class Ĭ��Ȩ����˽�� ��struct�ǹ���

//public ����Ȩ�� private ˽��Ȩ�� protected ����Ȩ��

//public ����Ȩ��
// ��Ա ���� ���� �����Է���

//private ˽��Ȩ��		��class�����Է��ʸ�class��privateȨ��
//��Ա ���� ���Է��� 

//protected ����Ȩ��   ��class���Է��ʸ�class��protectedȨ��
//��Ա ���� ���Է���

class  Person
{

	//����Ȩ��
public:
	char name[64];
	int age;


	void PersonEat()
	{
		printf("%s�ڳԷ�\n", name);
	}
};

struct Person2
{
public:
	string m_Name;//����1Ȩ��

protected:
	string m_Car;//����Ȩ��

private:
	int m_pwd;//˽��Ȩ��

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_pwd = 123456;

	}
};

void test02()
{
	Person2 p;
	p.m_Name = "����";
	//p.m_Car = "����"; ����Ȩ�� ������ʲ���
	//p.m_pwd = 123;//˽��Ȩ�� ���ⲻ�ɷ���

}

class Dog
{
	char name[64];
	int age;

	void dogEat()
	{
		printf("%s�ڹ���\n", name);
	}

};

void test01()
{
	Person p;
	strcpy(p.name, "����");
	p.PersonEat();

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//�����ѳ�Ա���ó�˽��
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//����lover
	void setLover(char *arr)
	{
		m_Lover = arr;
	}

	char* getLover()
	{
		return  m_Lover;
	}

private:
	string m_Name;//�ɶ���д
	int m_Age = 18;//ֻ��
	char *m_Lover = NULL;//ֻд

};

void test01()
{
	Person p;
	//��char*������ʽת��Ϊstring
	p.setName("����");
	cout << "������" << p.getName() << endl;

	//��ȡ����
	cout << "���䣺" << p.getAge() << endl;

	//����lover
	char arr[20] = "AB";
	p.setLover(arr);
	cout << "Lover��" << p.getLover() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

