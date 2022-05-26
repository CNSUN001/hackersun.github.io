#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone 的有参函数调用" << endl;
		m_PhoneName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	string m_PhoneName;
};

class Game
{
public:
	Game(string gGame)
	{
		cout << "Game 的有参函数调用" << endl;
		m_GameName = gGame;
	}
	~Game()
	{
		cout << "Game的析构函数调用" << endl;
	}
	string m_GameName;
};

class Person
{
public:
	Person(string name,string pName,string gName):m_Name(name),m_Phone(pName),m_Game(pName)
	{
		cout << "Person 的有参函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	string m_Name;
	Phone m_Phone;
	Game m_Game;
};

void test01()
{
	Person p("张三", "apple", "lol");
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

