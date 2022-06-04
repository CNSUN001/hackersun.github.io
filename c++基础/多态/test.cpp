//多态

//静态多态（就是函数重载）

//静态多态和动态多态的区别就是函数地址是早绑定（静态联编）还是晚绑定（动态联编）。

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual	void speak() //虚函数
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//动态多态产生的条件：
//1 先有继承的关系
//2 父类中有虚函数，子类重写父类虚函数
//3 父类的指针或引用 指向子类的对象

//对于有父子关系的两个类，指针或者引用，是可以直接转换的
void doSpeak(Animal& animal) //Animal& animal =cat;
{
	//地址早绑定，静态联编
	animal.speak();
	//如果想调用小猫说话，这个时候函数地址就不能早就绑定好，而是在运行阶段再去绑定地址，属于地址晚绑定，叫动态联编
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

