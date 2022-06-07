#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal�������" << endl;
	}
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
	//�����������ָ����������ԣ�Ҫ�������������� ��delete��ʱ����� ���������������
	//virtual ~Animal()
	//{
	//	cout << "Animal��������" << endl;
	//}

	//������������������������ʵ�֣�����Ҫʵ��
	//���һ������ ���� ������������ô�����Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal��������" << endl;
}

class Cat :public Animal
{
public:
	Cat(char* name)
	{
		cout << "Cat�������" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}
	virtual void speak()
	{
		cout << this->m_Name << " Сè��˵��" << endl;
	}
	virtual ~Cat()                                       
	{
		cout << "Cat��������" << endl;

		if (this->m_Name)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
	}
	char* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

