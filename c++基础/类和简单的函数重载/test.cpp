#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#if 0
//���һ����

//class + ����

const double PI = 3.14;
class Circle
{
public://����Ȩ��

	//���еĺ��� ��Ϊ ��Ա���� ����Ա������

	//��Բ�ܳ�
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

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


	//���еı��� ��Ϊ��Ա���� ��Ա����
	
	//�뾶
	int m_R;
};

void test01()
{
	Circle c1;//ͨ���� ������һ������   ʵ��������

	//��c1�뾶��ֵ
	//c1.m_R = 10;
	c1.setR(10);

	cout << "�뾶Ϊ��" << c1.m_R << endl;
	cout << "�뾶Ϊ��" << c1.getR() << endl;
	cout << "�ܳ�Ϊ��" << c1.calculateZC() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//���һ��ѧ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <string>

class Student
{
public:

	//��������
	void setName(string name)
	{
		m_Name = name;
	}

	//����ѧ��
	void setId(int id)
	{
		m_Id = id;
	}

	//��ʾ��Ϣ
	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ�" << m_Id << endl;
	}

	string m_Name;

	int m_Id = 0;

};

void test01()
{
	Student s1;
	s1.m_Name = "����";
	s1.m_Id = 1;
	cout << "������" << s1.m_Name << " ѧ�ţ�" << s1.m_Id << endl;

	Student s2;
	s2.setName("����");
	s2.setId(2);
	s2.showStudent();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//����C���ȱ�ݣ�C++��������������

//��ȱ��1 ����������ű�֤��������
#define  MYADD(x,y) x+y
void test01()
{
	int a = 10;
	int b = 20; 
	int ret = MYADD(a, b) * 20;
	cout << ret << endl;//410
}
//��ȱ��2 ����ʹ�������ţ���Щ������Ȼ��Ԥ�ڲ���
#define MYCOMPARE(a,b) (((a) < (b)) ? (a) : (b))
void test02()
{
	int a = 10;
	int b = 20;
	int ret = MYCOMPARE(++a, b);//Ԥ��11 �����Ϊ12 ��Ϊ�����ֻ���滻
	cout << ret << endl;

}

//��������������Ǻ�����Ψһ��ͬ�����������������ʵ��ĵط���Ԥ�������һ��չ����
//��Ϊ�����Ǻ���������˺��ȱ�ݣ�ͬʱ�߱�������ƣ��Կռ任ʱ�䣬���ʵ��ĵط�չ��

//����������������ʵ�ֱ���ͬʱ�ӹؼ���inline ������������

//����������������ֻ�Ǹ�������һ�����飬��������һ����������ֽ��顣��ʹû������������������ô������Ҳ���ܽ��˺�������������
 
inline void func();
inline void func() {};


//���ڲ��ĳ�Ա���� �ں���ǰ����ʽ�ļ���inline

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
//������Ĭ�ϲ�����ռλ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ע��������һ��λ������Ĭ�ϲ�������ô�����λ���𣬴����ұ߶�������Ĭ��ֵ
//int func (int a ,int b = 10;int c = 20)

int func(int a = 10, int b = 10)
{
	return a + b ;
}

void test01()
{
	cout << func() << endl;
	cout << func(20) << endl;
}

//������������ʵ�֣�ֻ����һ���ṩĬ�ϲ�����������ͬʱ��Ĭ�ϲ���
void myFunc(int a = 10, int b = 20);
void myFunc(int a , int b ) {};



//ռλ����  ֻдһ�����ͽ���ռλ������ʱ�����Ҫ����ռλֵ
void func2(int a,int = 1)
{

}

void test02()
{
	func2(20);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�ص� ��������

//������������
//1 ��ͬһ�������� 
//2 ������������ͬ
//3 �������������͡�˳��ͬ
// 

//C++����������
void func()
{
	cout << "func()����" << endl;
}

void func(int a)
{
	cout << "func(int a)����" << endl;
}

void func(double a)
{
	cout << "func(double)����" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)����" << endl;
}

void func(double a,int b)
{
	cout << "func(double b,int a)����" << endl;
}

//int func(int a)
//{
//	cout << "func(int a)����" << endl;
//}

//����ֵ��������Ϊ�������ص�����  

void test01()
{
	func();
	func(1);
	func(1, 3.14);
}

//���������� ���õ������汾
void myFunc(int& a)
{
	cout << "myfunc(int &a)����" << endl;
}

void myFunc(const int& a)
{
	cout << "myfunc(const int &a)����" << endl;
}

void test02()
{
	int a = 10;
	myFunc(a);
	myFunc(10);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

