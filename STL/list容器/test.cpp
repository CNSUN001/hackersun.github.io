#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

/*
3.6.4.1 list���캯��
list<T> lstT;//list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
list(beg,end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
list(n,elem);//���캯����n��elem����������
list(const list &lst);//�������캯����
3.6.4.2 list����Ԫ�ز����ɾ������
push_back(elem);//������β������һ��Ԫ��
pop_back();//ɾ�����������һ��Ԫ��
push_front(elem);//��������ͷ����һ��Ԫ��
pop_front();//��������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
*/

void printList(const list<int>&L)
{
	//�������
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void reversePrintList(const list<int>& L)
{
	//�������
	for (list<int>::const_reverse_iterator it = L.rbegin(); it != L.rend(); it++)
	{
		cout << *it << endl;
	}
}
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	////printList(L1);
	////reversePrintList(L1);

	list<int>L2(L1);
	////printList(L2);

	list<int>L3(L1.begin(),L1.end());
	//reversePrintList(L3);

	//list�ǲ���֧���������
	list<int>::iterator itBegin = L1.begin();
	//itBegin = itBegin + 1;// ��֧�� ֻ֧��ǰ���ͺ���
}

void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	printList(L1);

	L1.pop_back();//βɾ
	L1.pop_front();//ͷɾ
	printList(L1);

}

void test03()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	//����

	L1.insert(L1.begin(), 10000);
	printList(L1);

	list<int>::iterator it = L1.begin();
	
	L1.erase(it);
	printList(L1);



	//remove��elme�� ɾ��������elemֵƥ���ֵ
	L1.remove(100);
	printList(L1);


}

void test04()
{
	//void assign(InputIterator first, OutputIterator last);
	//void assign(size_type n, value_type val);
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	list<int>L2;
	L2.assign(10, 100);
	L1.swap(L2);
	printList(L1);
}


/*
3.6.4.6 list��ת����
reverse();//��ת��������lst����1,3,5Ԫ�أ����д˷�����lst�Ͱ���5,3,1Ԫ�ء�
sort(); //list����
*/

bool myCompaer(int v1,int v2)
{
	return v1 > v2;
}

void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList(L1);

	L1.reverse();
	printList(L1);

	//���� ��������ĵ�����֧��������ʣ�����ʹ��ϵͳ�ṩ�ı�׼�㷨
	//��֧�ֵĵ�����֧��������ʣ��ڲ����ṩ��Ӧ�ӿ�
	
	L1.sort(myCompaer);
	printList(L1);

}

class Person
{
public:
	Person(string name,int age,int height):m_Name(name),m_Age(age),m_Height(height)
	{}

	bool operator==(const Person& p)const  //�����ڼӸ�const
	{
		if (this->m_Name == p.m_Name&& this->m_Height == p.m_Height&& this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

bool myCompaerPerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height < p2.m_Height;
	}
	return p1.m_Age > p2.m_Age;
}

void test06()
{
	list<Person> L;
	Person p1("��ɪ", 40, 180);
	Person p2("����", 20, 160);
	Person p3("槼�", 30, 120);
	Person p4("�����", 50, 200);
	Person p5("����", 10, 170);
	Person p6("����", 10, 165);
	Person p7("�ŷ�", 10, 185);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	L.push_back(p7);

	//����������н���   �Ӵ��� , ����������,�����������
	//�����Զ����������ͣ�����Ҫָ���������
	L.sort(myCompaerPerson);
	
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������ " << (*it).m_Name << " ���䣺 " << it->m_Age << " ��ߣ� " << it->m_Height << endl;
	}

	//Ҫ���� == 	bool operator==(const Person& p)const
	L.remove(p4);

	cout << "ɾ����" << endl;
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������ " << (*it).m_Name << " ���䣺 " << it->m_Age << " ��ߣ� " << it->m_Height << endl;
	}
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return EXIT_SUCCESS;
}

