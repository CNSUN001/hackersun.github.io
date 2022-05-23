#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//设计立方体类，求出立方体表面积和体积，分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
//设置长宽高
public:
	void setL(int l)
	{
		m_L = l;
	}
	void setW(int w)
	{
		m_W = w;
	}
	void setH(int h)
	{
		m_H = h;
	}

//获取长宽高
	int getL()
	{
		return m_L;
	}

	int getW()
	{
		return m_W;
	}

	int getH()
	{
		return m_H;
	}

	//求面积

	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//求体积
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	bool compaerCube(Cube& c) //用本身有的数据，跟外来数据做判断 ，所以只用传进来一个值
	{
		if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H)
		{
			return true;
		}
		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;

};

//利用全局函数判断两个立方体是否相等
bool compaerCube(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

void test01()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "c1表面积 = " << c1.calculateS() << endl;
	cout << "c1体积 = " << c1.calculateV() << endl;


	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//利用全局函数
	bool ret = compaerCube(c1, c2);
	if (ret)
	{
		cout << "c1 与 c2 相等" << endl;
	}
	else
		cout << "c1 与 c2 不相等" << endl;

	//利用成员函数判断
	 ret = c1.compaerCube(c2);
	if (ret)
	{
		cout << "成员函数判断c1 与 c2 相等" << endl;
	}
	else
		cout << "成员函数判断c1 与 c2 不相等" << endl;

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif




//2 点和圆的关系
//设计一个圆形类（AdvCircle），和一个点类（Point），计算点和圆的关系。
//假如圆心坐标为x0, y0, 半径为r，点的坐标为x1, y1：
//  1）点在圆上：(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) == r * r
//  2）点在圆内：(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) < r * r
//	3）点在圆外：(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) > r * r
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//点类
class Point
{
public:
	//设置x,y
	void setX(int x)
	{
		m_X = x;
	}

	void setY(int y)
	{
		m_Y = y;
	}

	//获取x，y

	int getX()
	{
		return m_X;
	}

	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};



//圆类
class Circle
{

public :
	//设置半径
	void setR(int r)
	{
		m_R = r;
	}

	//获取半径
	int getR()
	{
		return m_R;
	}

	//设置圆心
	void setCenter(Point p)
	{
		m_Center = p;
	}

	Point getCenter()
	{
		return m_Center;
	}

	//判断点和圆的局部函数
	void isINCircle(Point& p)
	{
		int distance = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) + (m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());

		int rDistance = m_R * m_R;

		if (distance == rDistance)
		{
			cout << "成员函数判断点在圆上" << endl;
		}
		else if (distance > rDistance)
		{
			cout << "成员函数判断点在圆外" << endl;
		}
		else
		{
			cout << "成员函数判断点在圆内" << endl;
		}
	}

private:
	int m_R;//半径
	Point m_Center;//圆心
};


//利用全局函数
void isINCircle(Circle &c, Point &p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

}

void test01()
{
	Point p;
	p.setX(10);
	p.setY(10);

	Circle c;
	Point pCenter;
	pCenter.setX(10);
	pCenter.setY(0);
	c.setCenter(pCenter);
	c.setR(10);

	isINCircle(c, p);
	c.isINCircle(p);
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

// 点 和 圆的类建议份文件编写 用::分作用域