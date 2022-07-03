#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
using namespace std;

/*
3.8.2.1 map���캯��
map<T1, T2> mapTT;//mapĬ�Ϲ��캯��:
map(const map &mp);//�������캯��
3.8.2.2 map��ֵ����
map& operator=(const map &mp);//���صȺŲ�����
swap(mp);//����������������

3.8.2.3 map��С����
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��
3.8.2.4 map��������Ԫ�ز���
map.insert(...); //����������Ԫ�أ�����pair<iterator,bool>
map<int, string> mapStu;
// ��һ�� ͨ��pair�ķ�ʽ�������
mapStu.insert(pair<int, string>(3, "С��"));
// �ڶ��� ͨ��pair�ķ�ʽ�������
mapStu.inset(make_pair(-1, "У��"));
// ������ ͨ��value_type�ķ�ʽ�������
mapStu.insert(map<int, string>::value_type(1, "С��"));
// ������ ͨ������ķ�ʽ����ֵ
mapStu[3] = "С��";
mapStu[5] = "С��";
*/

void printMap(const map<int,int>& m)
{
	//map<int, int>::const_iterator it = m.begin(); it != m.end(); it++
	for (auto& it:m)
	{
		cout << "key = " << it.first << " value = " << it.second << endl;
		//cout << "key = " << it->first << " value = " << (*it).second<< endl;
	}
}

void test01()
{
	map<int, int> m; // һ����keyֵ �������� һ����valueֵ

	//��һ�ֲ��뷽ʽ
	pair<int, int>p1(1, 10);
	m.insert(p1);  //m.insert(pair<int,int>(1, 10)) ������ֵ

	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));

	//�����ֲ��뷽��
	m.insert(map<int, int>::value_type(3, 30));

	//������ ��̫���� ���������
	m[4] = 40;

	//m[5];

	//cout << m[10] << endl; 
	//������õ����֣�ʹ��δָ����key������һ��keyΪ��ֵ valueΪ0�����ݲ��뵽������

	printMap(m);
}


/*
3.8.2.5 mapɾ������
clear();//ɾ������Ԫ��
erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
erase(beg,end);//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
erase(keyElem);//ɾ��������keyΪkeyElem�Ķ��顣
*/
void test02()
{
	map<int, int> m; // һ����keyֵ �������� һ����valueֵ


	pair<int, int>p1(1, 10);
	m.insert(p1);  //m.insert(pair<int,int>(1, 10)) ������ֵ
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	//m.erase(3); //ɾ������keyֵ
	//m.erase(m.begin()); ɾ��������ָ���Ԫ�أ�������һ��Ԫ�صĵ�������
	m.erase(m.begin(), m.end());//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	printMap(m);
}

/*
3.8.2.6 map���Ҳ���
find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�������/�������ڣ�����map.end();
count(keyElem);//����������keyΪkeyElem�Ķ����������map��˵��Ҫô��0��Ҫô��1����multimap��˵��ֵ���ܴ���1��
lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
*/

void test03()
{
	map<int, int> m; // һ����keyֵ �������� һ����valueֵ
	pair<int, int>p1(1, 10);
	m.insert(p1);  //m.insert(pair<int,int>(1, 10)) ������ֵ
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	m.find(3);//���Ҽ�key�Ƿ����
	map<int, int>::iterator ret = m.find(3);
	if (ret != m.end())
	{
		cout << "�ҵ���keyֵ��" << ret->first << " value = " << ret->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//ͳ�� count
	int num =  m.count(4);
	cout << "keyΪ4�Ķ��������" << num << endl;

	//lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
	map<int, int>::iterator pos = m.lower_bound(3);
	if (pos != m.end())
	{
		cout << "�ҵ���lower_bound:: " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
	 pos = m.upper_bound(3);
	if (pos != m.end())
	{
		cout << "�ҵ���upper_bound:: " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	cout << "---------------------------------" << endl;
	//equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
	pair<map<int, int>::iterator, map<int, int>::iterator> ret2 = m.equal_range(3); 
	if (ret2.first != m.end())
	{
		cout << "�ҵ���lower_bound:: " << (ret2.first)->first << " value = " << (ret2.first)->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}



	if (ret2.first != m.end())
	{
		cout << "�ҵ���upper_bound:: " << (ret2.second)->first << " value = " << (ret2.second)->second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
	
}

class myCompareInt
{
public:
	bool operator ()(int v1, int v2)const
	{
		return  v1 > v2;
	}
};

void test04()
{
	map<int, int, myCompareInt> m;
	pair<int, int>p1(1, 10);
	m.insert(p1);  
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;
	for (map<int, int,myCompareInt>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << (*it).second << endl;
	}
}

int main()
{
	test01();
	//test02();
	//test03();
	//test04();
	system("pause");
	return EXIT_SUCCESS;
}

