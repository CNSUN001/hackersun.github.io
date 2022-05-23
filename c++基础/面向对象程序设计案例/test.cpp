#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����������࣬���������������������ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class Cube
{
//���ó����
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

//��ȡ�����
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

	//�����

	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//�����
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

	bool compaerCube(Cube& c) //�ñ����е����ݣ��������������ж� ������ֻ�ô�����һ��ֵ
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

//����ȫ�ֺ����ж������������Ƿ����
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
	cout << "c1����� = " << c1.calculateS() << endl;
	cout << "c1��� = " << c1.calculateV() << endl;


	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//����ȫ�ֺ���
	bool ret = compaerCube(c1, c2);
	if (ret)
	{
		cout << "c1 �� c2 ���" << endl;
	}
	else
		cout << "c1 �� c2 �����" << endl;

	//���ó�Ա�����ж�
	 ret = c1.compaerCube(c2);
	if (ret)
	{
		cout << "��Ա�����ж�c1 �� c2 ���" << endl;
	}
	else
		cout << "��Ա�����ж�c1 �� c2 �����" << endl;

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif




//2 ���Բ�Ĺ�ϵ
//���һ��Բ���ࣨAdvCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
//����Բ������Ϊx0, y0, �뾶Ϊr���������Ϊx1, y1��
//  1������Բ�ϣ�(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) == r * r
//  2������Բ�ڣ�(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) < r * r
//	3������Բ�⣺(x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) > r * r
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����
class Point
{
public:
	//����x,y
	void setX(int x)
	{
		m_X = x;
	}

	void setY(int y)
	{
		m_Y = y;
	}

	//��ȡx��y

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



//Բ��
class Circle
{

public :
	//���ð뾶
	void setR(int r)
	{
		m_R = r;
	}

	//��ȡ�뾶
	int getR()
	{
		return m_R;
	}

	//����Բ��
	void setCenter(Point p)
	{
		m_Center = p;
	}

	Point getCenter()
	{
		return m_Center;
	}

	//�жϵ��Բ�ľֲ�����
	void isINCircle(Point& p)
	{
		int distance = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) + (m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());

		int rDistance = m_R * m_R;

		if (distance == rDistance)
		{
			cout << "��Ա�����жϵ���Բ��" << endl;
		}
		else if (distance > rDistance)
		{
			cout << "��Ա�����жϵ���Բ��" << endl;
		}
		else
		{
			cout << "��Ա�����жϵ���Բ��" << endl;
		}
	}

private:
	int m_R;//�뾶
	Point m_Center;//Բ��
};


//����ȫ�ֺ���
void isINCircle(Circle &c, Point &p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
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

// �� �� Բ���ཨ����ļ���д ��::��������