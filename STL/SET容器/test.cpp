// set����  
//Set�������ǡ�����Ԫ�ض������Ԫ�صļ�ֵ�Զ�������
//Set��Ԫ�ز���map��������ͬʱӵ��ʵֵ�ͼ�ֵ��set��Ԫ�ؼ��Ǽ�ֵ����ʵֵ��
//Set����������Ԫ������ͬ�ļ�ֵ��

// multiset����
//multiset���Լ��÷���set��ȫ��ͬ��Ψһ�Ĳ�������������ֵ�ظ���
//set��multiset�ĵײ�ʵ���Ǻ�����������Ϊƽ���������һ�֡�



#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <set>
#include <string>
using namespace std;


/*
3.7.2.1 set���캯��
set<T> st;//setĬ�Ϲ��캯����
mulitset<T> mst; //multisetĬ�Ϲ��캯��:
set(const set &st);//�������캯��
3.7.2.2 set��ֵ����
set& operator=(const set &st);//���صȺŲ�����
swap(st);//����������������
3.7.2.3 set��С����
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��

3.7.2.4 set�����ɾ������
insert(elem);//�������в���Ԫ�ء�
clear();//�������Ԫ��
erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
erase(beg, end);//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
erase(elem);//ɾ��������ֵΪelem��Ԫ�ء�
*/

void printSet(const set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void printMultiset(const multiset<int>& s)
{
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	set<int>s;
	//�����Զ�����
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	printSet(s);

	if (s.empty())
	{
		cout << "set��" << endl;
	}
	else
	{
		cout << "set��Ϊ��" << s.size() << endl;
	}

	s.erase(30); //ֱ��ɾֵ
	printSet(s);

}

/*
3.7.2.5 set���Ҳ���
find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
count(key);//���Ҽ�key��Ԫ�ظ���,���ظ���
lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
*/

void test02()
{
	set<int>s;
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	//�������ڣ�����set.end();  string��������-1
	set<int>::iterator pos = s.find(30);
	if (pos != s.end())
	{
		cout << "�ҵ�Ԫ��:" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//����Ԫ�ظ��� ,����set���Բ������ظ� cout�Ľ��Ҫô0 Ҫô1
	int num = s.count(41);
	cout << "key�ĸ���Ϊ��" << num << endl;

	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
	set<int>::iterator pos2 = s.lower_bound(30);
	cout << "lower_bound(keyElem)�ҵ�>=30��Ԫ��:" << *pos2 << endl;

	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
	set<int>::iterator pos3 = s.upper_bound(30);
	cout << "upper_bound(keyElem)�ҵ�>=30��Ԫ��:" << *pos3 << endl;

	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
	pair<set<int>::iterator, set<int>::iterator>ret = s.equal_range(30);


	if (ret.first != s.end())//˵���ҵ�lower_bound
	{
		cout << "equal_range��lower_bound:" << *ret.first << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	if(ret.second!=s.end())
	{
		cout << "equal_range��upper_bound:" << *ret.second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

//pair ����
void test03()
{
	//pair �ṹ��
	pair<string, int>p("Tom", 10);
	cout << p.first << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry", 18);
	cout << p2.first << p2.second << endl;

}

void test04()
{
	//set���������������ͬԪ��
	set<int> s;
	pair<set<int>::iterator , bool>ret = s.insert(10);

	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);

	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}

	printSet(s);


	//	multiset ��������ظ���keyֵ
	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	printMultiset(ms);

}

class myCompareInt
{
public:
	//�º��� ��������()
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test05()
{
	//set�������������Ҫ�ڲ���֮ǰָ��
	set<int, myCompareInt>s;
	s.insert(10);
	s.insert(50);
	s.insert(30);
	s.insert(20);
	s.insert(40);

	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//�����Զ�������
class Person
{
public:
	Person(string name,int age):m_Name(name),m_Age(age)
	{}
	string m_Name;
	int m_Age;

	//����<ָ���������
	//bool operator<(const Person&p)const
	//{
	//	return  this->m_Age<p.m_Age;
	//}
};

//���÷º��� ָ���Զ����������͵��������
class myComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_Age < p2.m_Age;
	}
};

void test06()
{
	//���÷º��� ָ���Զ����������͵��������

	set<Person, myComparePerson> s;
	Person p1("aaa", 10);
	Person p2("bbb", 40);
	Person p3("ccc", 20);
	Person p4("ddd", 30);
	Person p5("eee", 50);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);

	for (set<Person, myComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << (*it).m_Name << "���䣺" << (*it).m_Age << endl;
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

