#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone ���вκ�������" << endl;
		m_PhoneName = pName;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	string m_PhoneName;
};

class Game
{
public:
	Game(string gGame)
	{
		cout << "Game ���вκ�������" << endl;
		m_GameName = gGame;
	}
	~Game()
	{
		cout << "Game��������������" << endl;
	}
	string m_GameName;
};

class Person
{
public:
	Person(string name,string pName,string gName):m_Name(name),m_Phone(pName),m_Game(pName)
	{
		cout << "Person ���вκ�������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	string m_Name;
	Phone m_Phone;
	Game m_Game;
};

void test01()
{
	Person p("����", "apple", "lol");
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

