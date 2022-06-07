#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造调用" << endl;
	}
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
	//如果子类中有指向堆区的属性，要利用虚析构技术 在delete的时候调用 子类的虚析构函数
	//virtual ~Animal()
	//{
	//	cout << "Animal析构调用" << endl;
	//}

	//纯虚析构（类内声明，类外实现）必须要实现
	//如果一个类中 有了 纯虚析构，那么这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal析构调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(char* name)
	{
		cout << "Cat构造调用" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}
	virtual void speak()
	{
		cout << this->m_Name << " 小猫在说话" << endl;
	}
	virtual ~Cat()                                       
	{
		cout << "Cat析构调用" << endl;

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

