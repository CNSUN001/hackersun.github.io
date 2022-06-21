#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//ת���Ƿǳ����õģ���������������⣬������ת��ָ��ʱ�����Ǻܿ��ܽ���ת����һ��������������ͣ������ƻ���������
//һ������£��������ã�������������ǳ����������


//1 ��̬����ת�� static_cast
void test01()
{
	//����������������ֱ��ת��
	char a = 'a';
	
	double d = static_cast<double>(a);

	cout << d << endl;
}

class Base{};
class Son:public Base{};
class Other{};

void tes02()
{
	Base* base = NULL;
	Son* son = NULL;

	//�﷨ static_cast<Ŀ������>��ԭ����
	//��baseת����Son* ��ת�� ����ת������ȫ
	Son* son2 = static_cast<Son* >(base);

	//��sonת��Base* ��ȫ
	Base* base2 = static_cast<Base*>(son);

	//��baseת����Other*
	//Other* other = static_cast<Other*>(base);
	
	//static_cast ֻ�и���֮ǰ����ת��


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
#endif


#if 0
//��̬����ת�� dynamic_castת���Ͻ��ܶ�

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base { virtual void func() {} };
class Son :public Base { virtual void func() {} };
class Other {};

void test01()
{
	//������������������֮��ת��
	//char c = 'c';
	//double d = dynamic_cast<double>(c);
}

void test04()
{
	Base* base = new Son;
	Son* son = NULL;
	//��baseתΪSon* ��ת�� ����ȫת��ʧ��   (��̬������ǰ�ȫ)
	Son* son2 = dynamic_cast<Son*>(base);

	//son תΪBase* ��ת�� ��ȫ
	Base* base2 = dynamic_cast<Base*>(son);

	//baseתOther*
	//Other* other = dynamic_cast<Other*>(base);
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}
#endif

//����ת��
//ע�� ������ֱ�ӶԷ�ָ��ͷ����õı���ʹ��const_cast������ȥֱ���Ƴ�����const
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// ����ָ��ת���ɷǳ���ָ��
void test01()
{
	const int* p = NULL;
	int* np = const_cast<int*>(p);

	int* pp = NULL;
	const int* npp = const_cast<const int*>(pp);

	const int a = 10; //���ܶԷ�ָ��ͷ����ý���ת�� ��һ����ջ�ϣ�һ���ڷ��ű�
	//int b = const_cast<int>(a);
}

// �ǳ�������ת��������
void test02()
{
	int num = 10;
	int& refNum = num;

	const int& refNum2 = const_cast<const int&>(refNum);
}

//���½���ת��(reinterpret_cast)
//���ȫ��һ��ת�����ƣ����п��ܳ����⡣
//��Ҫ���ڽ�һ���������ʹ�һ������ת��Ϊ��һ�����ͣ������Խ�һ��ָ��ת����һ��������Ҳ���Խ�һ������ת����һ��ָ��

void test06()
{
	int a = 10;
	int* p = reinterpret_cast<int*>(a);
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}



