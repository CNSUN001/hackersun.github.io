#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void print(std::initializer_list<int > vals) //std::initializer_list< > ֧�ֳ�ʼ��
{
	//auto = initializer_list<int >::iterator  auto �Զ�����ת�� 
	for (auto p = vals.begin(); p != vals.end(); ++p)
	{
		std::cout << *p << endl;
	}
}

void test01()
{
	print({ 12,3,5,7,11,13,17 });
}

//�� ָ��ʵ�θ��� �� ָ��һ����ʼֵ �Ĺ��캯����ctor��ͬʱ���ڣ�ѡ����г�ֵ�İ汾
class P
{
public:
	P(int, int){};
	P(std::initializer_list<int>){};
};

void test02()
{
	P p(77, 5);  //P(int, int)
	P q{ 77,5 };//P(std::initializer_list<int>)
	P r{ 77,5,42 }; //P(std::initializer_list<int>)
	P s = { 77,5 }; //P(std::initializer_list<int>)
}


//explicit�ؼ�������������Ĺ��캯���������εĹ��캯�����࣬
//���ܷ�����Ӧ����ʽ����ת����ֻ������ʾ�ķ�ʽ��������ת��

class P2
{
public:
	P2(int a,int b){}

	explicit P2(int a, int b, int c) {}

	int a, b, c;
};

void test02()
{
	P2 x(77, 5);
	P2 y{ 77,5 };
	P2 z{ 77,5,42 };
	P2 v = { 77,5 };
	//P2 w = { 77,5,42 }; //����ʹ�ñ��Ϊ����ʽ���Ĺ��캯��

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

