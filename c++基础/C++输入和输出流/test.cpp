

//C++���������
//��׼���� ���� ��׼��� ��Ļ
//�����ȵ������� �����������


//��׼������
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//cin.get() //һ��ֻ�ܶ�ȡһ���ַ�
//cin.get(һ������) //��һ���ַ�
//cin.get(��������) //���Զ��ַ���
//cin.getline()
//cin.ignore()
//cin.peek()
//cin.putback()

void test01()
{
	//���� as ���a s
	char c = cin.get();

	cout << "c = " << c << endl;//a


	 c = cin.get();
	
	cout << "c = " << c << endl;//s
	
	c = cin.get();

	cout << "c = " << c << endl;//�õ����з�

	c = cin.get();

	cout << "c = " << c << endl;//�ȴ��´�����
}


//cin.get(��������) 
void test02()
{
	char buf[1024] = { 0 };
	cin.get(buf, 1024);//������д��buf

	char c = cin.get();
	//���з������ڻ�����
	if (c == '\n')
	{
		cout << "���з������ڻ�����" << endl;
	}
	else
	{
		cout << "���з����ڻ�����" << endl;

	}

	cout << buf << endl;
}

//cin.get(��������) //���Զ��ַ���
void test03()
{
	char buf[1024] = {0};
	cin.getline(buf, 1024);
	//cin.getline��ȡ�ַ�����ʱ�򣬻��з����ڻ�����������û�б�buf���� ��������
	char c = cin.get();
	if (c == '\n')
	{
		cout << "���з������ڻ�����" << endl;
	}
	else
	{
		cout << "���з����ڻ�����" << endl;
	}

	cout << buf << endl;
}


//cin.ignore() Ĭ�Ϻ���1���ַ����������x���������x���ַ�
void test04()
{
	cin.ignore(2);
	char c = cin.get();
	cout << "c = " << c << endl;
}

//cin.peek() ͵��
void test05()
{
	char c = cin.peek();
	//����һ�۵�һ���ַ�����û��ȡ��
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

}

void test06()
{
	char c = cin.get();
	cin.putback(c);
	char buf[1024] = { 0 };
	cin.getline(buf, 1024);
	cout << buf << endl;
}

//����1
//�ж��û�������������ַ�����������
void test07()
{
	cout << "����" << endl;
	char c = cin.peek();
	if (c >= '0' && c <= '9')
	{
		int num;
		cin >> num;
		cout << "����������֣�" << num << endl;
	}
	else
	{
		char buf[1024] = { 0 };
		cin >> buf;
		cout << "�ַ�����" << buf << endl;
	}
}

//����2
//�û����� 0-10 ���֣��������������������
void test08()
{
	cout << "������0-10" << endl;
	int num = 1;

	while (true)
	{
		cin >> num;
		if (num >= 0 && num <= 10)
		{
			if (cin.fail() == 1)
			{
				//��ջ����� ���Ʊ�־λ
				cin.clear();
				cin.sync();
				cin.ignore();//���������и�/nҪ���Ե�
				cout << "����������������" << endl;
				cout << "cin.fail() = " << cin.fail() << endl;
				continue;

			}
			cout << "������ȷ ֵΪ��" << num << endl;
			break;
		}
	
		cout << "����������������" << endl;
	}

}





int main()
{
	//test01();
	//test02(); 
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();
	
	system("pause");
	return EXIT_SUCCESS;
}

