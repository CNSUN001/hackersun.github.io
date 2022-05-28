#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//全局函数作为友元
class Building
{
	friend void goodGay(Building* building);//声明让全局函数可以访问私有内容

public:
	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}
	string m_SittingRoom;//客厅
private:
	string m_BedRoom; //卧室
};

//好基友全局函数 可以访问Building的私有属性
void goodGay(Building* building)
{
	cout << "正在访问:" << building->m_SittingRoom << endl;
	cout << "正在访问:" << building->m_BedRoom << endl;

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
//类作为友元类
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
	//让goodGay类作为friend ，可以访问私有
	friend class GoodGay;
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

 //类外实现
GoodGay::GoodGay()
{
	this->m_buliding = new Building;
}

void GoodGay::visit()
{
	cout << "正在访问" << this->m_buliding->m_SittingRoom << endl;
	cout << "正在访问" << this->m_buliding->m_BedRoom << endl;

}

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";

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

//成员函数作为友元
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();//可以访问building

	void visit2();//不可以访问building

	Building* m_buliding;
};

class Building
{
	//让goodGay成员函数作为friend ，可以访问私有
	friend void GoodGay::visit();
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外实现
GoodGay::GoodGay()
{
	this->m_buliding = new Building;
}

void GoodGay::visit()
{
	cout << "正在访问" << this->m_buliding->m_SittingRoom << endl;
	cout << "正在访问" << this->m_buliding->m_BedRoom << endl;

}

void GoodGay::visit2()
{
	cout << "正在访问" << this->m_buliding->m_SittingRoom << endl;
	//cout << "正在访问" << this->m_buliding->m_BedRoom << endl;

}

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";

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