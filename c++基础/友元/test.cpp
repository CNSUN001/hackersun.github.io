#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ȫ�ֺ�����Ϊ��Ԫ
class Building
{
	friend void goodGay(Building* building);//������ȫ�ֺ������Է���˽������

public:
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}
	string m_SittingRoom;//����
private:
	string m_BedRoom; //����
};

//�û���ȫ�ֺ��� ���Է���Building��˽������
void goodGay(Building* building)
{
	cout << "���ڷ���:" << building->m_SittingRoom << endl;
	cout << "���ڷ���:" << building->m_BedRoom << endl;

}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//����Ϊ��Ԫ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();

	Building* m_buliding;
};

class Building
{
	//��goodGay����Ϊfriend �����Է���˽��
	friend class GoodGay;
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

 //����ʵ��
GoodGay::GoodGay()
{
	this->m_buliding = new Building;
}

void GoodGay::visit()
{
	cout << "���ڷ���" << this->m_buliding->m_SittingRoom << endl;
	cout << "���ڷ���" << this->m_buliding->m_BedRoom << endl;

}

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";

}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//��Ա������Ϊ��Ԫ
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();//���Է���building

	void visit2();//�����Է���building

	Building* m_buliding;
};

class Building
{
	//��goodGay��Ա������Ϊfriend �����Է���˽��
	friend void GoodGay::visit();
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

//����ʵ��
GoodGay::GoodGay()
{
	this->m_buliding = new Building;
}

void GoodGay::visit()
{
	cout << "���ڷ���" << this->m_buliding->m_SittingRoom << endl;
	cout << "���ڷ���" << this->m_buliding->m_BedRoom << endl;

}

void GoodGay::visit2()
{
	cout << "���ڷ���" << this->m_buliding->m_SittingRoom << endl;
	//cout << "���ڷ���" << this->m_buliding->m_BedRoom << endl;

}

Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";

}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}