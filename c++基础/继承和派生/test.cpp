#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�̳л����﷨

//class News
//{
//public:
//	void header()
//	{
//		cout << "������ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ĵײ�" << endl;
//	}
//	void leftList()
//	{
//		cout << "����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "���Ų���..." << endl;
//	}
//
//};
//
//class Sport
//{
//public:
//	void header()
//	{
//		cout << "������ͷ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ĵײ�" << endl;
//	}
//	void leftList()
//	{
//		cout << "����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "���籭..." << endl;
//	}
//};


//���ü̳� ʵ��
//j�̳��ŵ㣬�����ظ��Ĵ��룬��ߴ��븴����
class BasePage
{
public:
	void header()
	{
		cout << "������ͷ��" << endl;
	}
	void footer()
	{
		cout << "�����ĵײ�" << endl;
	}
	void leftList()
	{
		cout << "����������б�" << endl;
	}
};

//class ���ࣺ�̳з�ʽ  ����
//News ����  ������
//BasePage ���� ����
class News :public BasePage
{
public:
	void content()
	{
		cout << "���Ų���..." << endl;
	}
};

class Sport :public BasePage
{
public:
	void content()
	{
		cout << "���籭..." << endl;
	}
};

void test01()
{
	News news;
	cout << "����ҳ���������£�" << endl;
	news.header();
	news.footer();
	news.leftList();
	news.content();

	Sport sp;
	cout << "����ҳ���������£�" << endl;
	sp.header();
	sp.footer();
	sp.leftList();
	sp.content();
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
//�̳з�ʽ

//1 �����̳�

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 100;//�����й���Ȩ�ޣ������б�Ϊ ����Ȩ��
		m_B = 100;//�����б���Ȩ�ޣ������б�Ϊ ����Ȩ��
		//m_C = 100;  ������˽�г�Ա�������޷�����
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;//��Son1�� m_A�ǹ���Ȩ�� ������Է���
	//s1.m_B = 100;//��Son1�� m_B�Ǳ���Ȩ�� ���ⲻ���Է���
}


//�����̳�
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100; //�����й���Ȩ�ޣ������б�Ϊ ����Ȩ��
		m_B = 100; //�����б���Ȩ�ޣ������б�Ϊ ����Ȩ��

		//m_C = 100;  ������˽�г�Ա�������޷�����
	}
};
 
void test02()
{
	Son2 s;
	//s.m_A = 100;	//���ౣ��Ȩ�� �޷�����
	//s.m_B = 100;	//���ౣ��Ȩ�� �޷�����
	//s.m_C = 100; ���౾��û�з���Ȩ��

}

//˽�м̳�

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 100; //�����й���Ȩ�ޣ������б�Ϊ ˽��Ȩ��
		m_B = 100; //�����б���Ȩ�ޣ������б�Ϊ ˽��Ȩ��

		//m_C = 100;  ������˽�г�Ա�������޷�����
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;//��son3�� �Ѿ���Ϊ˽��Ȩ�ޣ�GrandSon3���ʲ���
		//m_B = 100;	
	}
};

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //������˽�����ԣ�������ʲ������Ǳ�������������
};

class Son :public Base
{
public:
	int m_D;  // ��develop command �鿴����ģ��     
	//��ת�̷� D:
	// ��ת·��  cd +�ļ�·��
	//cl(Ӣ����ĸl) / d1������1�� reportSingleClassLayoutSon test.cpp  
}; 

void test01()
{
	cout << "size of Son =" << sizeof(Son) << endl; //���Ϊ16
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

//�̳еĹ��������

class Base1
{
public:
	Base1()
	{
		cout << "Base1���캯������" << endl;
	}
	~Base1()
	{
		cout << "Base1������������" << endl;
	}
};


class Other
{
public:
	Other()
	{
		cout << "Other���캯������" << endl;
	}
	~Other()
	{
		cout << "Other������������" << endl;
	}
};

class Son1 :public Base1
{
public:
	Son1()
	{
		cout << "Son1���캯������" << endl;
	}
	~Son1()
	{
		cout << "Son1������������" << endl;
	}

	Other other;
};



void test01()
{
	//Base1 b;
	Son1 b;  //�ȵ��ø��๹�죬�ٵ��������죬����˳���빹���෴
}


class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "Base2���캯�� ����" << endl;
	}
	int m_A;
};

class Son2 :public Base2
{
public:
	Son2(int a = 1000):Base2(a)  //���ó�ʼ���б��﷨����ʾ���ø����е��������캯��
	{
		cout << "Son2���캯������" << endl;
	}
};

void test02()
{
	Son2 s;
	cout << s.m_A << endl;
}

//��������й��캯���ǲ��ᱻ����̳���ȥ��

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�̳���ͬ����Ա����

class Base
{
public:
	Base()
	{
		this->m_A = 10;
	}
	void func()
	{
		cout << "Base�е�func����" << endl;
	}

	void func(int a)
	{
		cout << "Base�е�func int����" << endl;
	}
	int m_A;
};

class Son :public Base
{
public:

	Son()
	{
		this->m_A = 20;
	}

	void func()
	{
		cout << "Son�е�func����" << endl;
	}

	int m_A;

};

void test01()
{
	Son s1;

	cout << s1.m_A << endl;

	//����������������ʸ���ͬ����Ա
	cout << s1.Base::m_A << endl;
}

void test02()
{
	Son s1;
	s1.func();
	s1.Base::func();

	//���������¶����˸�����ͬ����Ա����������ĳ�Ա�� ���ص������������ذ汾��ͬ����Ա 
	s1.Base::func(10);

}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif



#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//�̳��е�ͬ��  ��̬��Ա����

class Base
{
public:

	static void func()
	{
		cout << "Base�е�func����" << endl;
	}

	static int m_A;
};

int Base::m_A = 10;

class Son :public Base
{
public:

	static void func()
	{
		cout << "Son�е�func����" << endl;
	}

	static int m_A;
};
int Son::m_A = 20;

void test01()
{
	//1 ͨ���������
	Son s;
	cout << "m_A = " << s.m_A << endl;
	cout << "Base��m_A = " << s.Base::m_A << endl;

	//2 ͨ����������
	cout << "m_A = " << Son::m_A << endl;
	//ͨ�������ķ�ʽ ���� ������������m_A��̬��Ա����
	cout << "m_A = " << Son::Base::m_A << endl;

}

void test02()
{
	//1 ͨ���������
	Son s;
	s.func();
	s.Base::func();

	//2 ͨ����������
	Son::func();
	Son::Base::func();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


//��̳л����﷨

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
 
class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		this->m_B = 20;
	}
	int m_B;
};

//��̳�
class Son :public Base1, public Base2
{
public:
	int m_C;
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

