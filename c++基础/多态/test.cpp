//��̬

//��̬��̬�����Ǻ������أ�

//��̬��̬�Ͷ�̬��̬��������Ǻ�����ַ����󶨣���̬���ࣩ������󶨣���̬���ࣩ��

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual	void speak() //�麯��
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
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

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

