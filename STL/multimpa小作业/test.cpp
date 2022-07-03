#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <ctime>;
using namespace std;


/*
//��˾������Ƹ��5��Ա����5��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//��Ա��Ϣ��: ���� ���� �绰 ���ʵ����
//ͨ��Multimap������Ϣ�Ĳ��� ���� ��ʾ
//�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ
*/

enum{CAIWU,RENLI,YANFA};

class Worker
{
public:
	//Worker(string name,int money)
	string m_Name;
	int m_money = 0;
};

void printTest(const vector<Worker>& v)
{
	//for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << it->m_Name << " ���ʣ�" << it->m_money << endl;
	//}
	for (auto &it : v)
	{
		cout << "������" << it.m_Name << " ���ʣ�" << it.m_money << endl;
	}
}

void creatWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_money = rand() % 10000 + 10000;//10000 - 19999

		v.push_back(worker);
	}
}

void setGroup(vector<Worker>&v,multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű�� 0 1 2
		int dId = rand() % 3;
		m.insert(make_pair(dId, *it));
	}
	//for (auto& it : v)
	//{
	//	int dId = rand() % 3;
	//	m.insert(make_pair(dId, it));
	//}

}

void showWorker(const multimap<int, Worker>& m)
{
	/*for (multimap<int, Worker>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "���ţ�" << (*it).first << " ��Ա������" << ((*it).second).m_Name << " ���ʣ�" << ((*it).second).m_money << endl;
	}*/
	cout << "��������Ա��Ϣ���£�" << endl;
	multimap<int, Worker>::const_iterator pos = m.find(CAIWU);
	int num = m.count(CAIWU);
	int index = 0;

	if (pos == m.end())
	{
		cout << "�ò���û�г�Ա" << endl;
	}
	for (; pos != m.end()&&index < num; pos++,index++)
	{
		cout << " ��Ա������" << ((*pos).second).m_Name << " ���ʣ�" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "����������Ա��Ϣ���£�" << endl;
	 pos = m.find(RENLI);
	 num = m.count(RENLI);
	 index = 0;

	 if (pos == m.end())
	 {
		 cout << "�ò���û�г�Ա" << endl;
	 }

	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << " ��Ա������" << ((*pos).second).m_Name << " ���ʣ�" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "�з�������Ա��Ϣ���£�" << endl;
	pos = m.find(YANFA);
	num = m.count(YANFA);
	index = 0;

	if (pos == m.end())
	{
		cout << "�ò���û�г�Ա" << endl;
	}
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << " ��Ա������" << ((*pos).second).m_Name << " ���ʣ�" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "������Ա����Ϣ���£�" << endl;


}

int main()
{
	srand((unsigned)time(NULL));
	vector<Worker>v;
	

	//1 ����5��Ա��
	creatWorker(v);

	//2 Ա������
	multimap<int, Worker> m;
	setGroup(v, m);

	//3 �ֲ�����ʾԱ��
	showWorker(m);


	//����
	//printTest(v);

	system("pause");
	return EXIT_SUCCESS;
}

