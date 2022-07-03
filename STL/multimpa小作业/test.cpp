#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <ctime>;
using namespace std;


/*
//公司今天招聘了5个员工，5名员工进入公司之后，需要指派员工在那个部门工作
//人员信息有: 姓名 年龄 电话 工资等组成
//通过Multimap进行信息的插入 保存 显示
//分部门显示员工信息 显示全部员工信息
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
	//	cout << "姓名：" << it->m_Name << " 工资：" << it->m_money << endl;
	//}
	for (auto &it : v)
	{
		cout << "姓名：" << it.m_Name << " 工资：" << it.m_money << endl;
	}
}

void creatWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		worker.m_money = rand() % 10000 + 10000;//10000 - 19999

		v.push_back(worker);
	}
}

void setGroup(vector<Worker>&v,multimap<int, Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//随机产生部门编号 0 1 2
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
		cout << "部门：" << (*it).first << " 成员姓名：" << ((*it).second).m_Name << " 工资：" << ((*it).second).m_money << endl;
	}*/
	cout << "财务部门人员信息如下：" << endl;
	multimap<int, Worker>::const_iterator pos = m.find(CAIWU);
	int num = m.count(CAIWU);
	int index = 0;

	if (pos == m.end())
	{
		cout << "该部门没有成员" << endl;
	}
	for (; pos != m.end()&&index < num; pos++,index++)
	{
		cout << " 成员姓名：" << ((*pos).second).m_Name << " 工资：" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "人力部门人员信息如下：" << endl;
	 pos = m.find(RENLI);
	 num = m.count(RENLI);
	 index = 0;

	 if (pos == m.end())
	 {
		 cout << "该部门没有成员" << endl;
	 }

	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << " 成员姓名：" << ((*pos).second).m_Name << " 工资：" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "研发部门人员信息如下：" << endl;
	pos = m.find(YANFA);
	num = m.count(YANFA);
	index = 0;

	if (pos == m.end())
	{
		cout << "该部门没有成员" << endl;
	}
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << " 成员姓名：" << ((*pos).second).m_Name << " 工资：" << ((*pos).second).m_money << endl;
	}

	cout << "--------------------------" << endl;
	cout << "财务部门员工信息如下：" << endl;


}

int main()
{
	srand((unsigned)time(NULL));
	vector<Worker>v;
	

	//1 创建5名员工
	creatWorker(v);

	//2 员工分组
	multimap<int, Worker> m;
	setGroup(v, m);

	//3 分部门显示员工
	showWorker(m);


	//测试
	//printTest(v);

	system("pause");
	return EXIT_SUCCESS;
}

