//��̬

//��̬��̬�����Ǻ������أ�

//��̬��̬�Ͷ�̬��̬��������Ǻ�����ַ����󶨣���̬���ࣩ������󶨣���̬���ࣩ��


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
		virtual void speak() //�麯��   vfptr-�麯��ָ�� v-virtual  f-function ptr-pointer ָ���麯����vftable��
	{
		//������д�Ḳ�Ǹ����麯������ĵ�ַ
		cout << "������˵��" << endl;
	}
		virtual void eat(int a)
		{
			cout << "�����ڳԷ�" << endl;
		}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
	virtual void eat(int a)
	{
		cout << "Сè�ڳԷ�" << endl;
	}
}; 

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//��̬��̬������������
//1 ���м̳еĹ�ϵ
//2 ���������麯����������д�����麯��
//3 �����ָ������� ָ������Ķ���

//�����и��ӹ�ϵ�������ָ࣬��������ã��ǿ���ֱ��ת����
void doSpeak(Animal& animal) //Animal& animal =cat;
{
	//��ַ��󶨣���̬����
	animal.speak();
	//��������Сè˵�������ʱ������ַ�Ͳ�����Ͱ󶨺ã����������н׶���ȥ�󶨵�ַ�����ڵ�ַ��󶨣��ж�̬����
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof (Animal) << endl;

	Animal* animal = new Cat;
	animal->speak();
	//�����õ��麯����*(int*)animal
	((void(*)())(*(int*)*(uintptr_t*)animal))();    //typedef unsigned int uintptr_t;

	((void(*)())(* (int*)(*(int*)animal)))();
	//C/C++Ĭ�ϵ��ù��� _cdecl
	//��ʵ���ù��� _stdcall
	//typedef void(_stdcall*FUNPOINT)(int);
	//(FUNPOINT(*((int*)*(int*)animal+1)))(10);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
