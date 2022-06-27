#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
using namespace std;

/*
有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//1. 创建五名选手，放到vector中
//2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3. sort算法对deque容器中分数排序，pop_back pop_front去除最高和最低分
//4. deque容器遍历一遍，累加分数，累加分数/d.size()
//5. person.score = 平均分
*/

class Player
{
public:
	Player(string name,int score):m_Name(name),m_Score(score)
	{}
	string m_Name;
	int m_Score; //平均分
};

void creatPlayer(vector<Player>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Player player(name, score);
		v.push_back(player);
	}
}

void setScore(vector<Player>& v)
{
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it  类型是Player
		deque<int> d;//存放打分容器
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 40 + 60;//60 - 99
			d.push_back(score);
				
		}
		//cout << it->m_Name << "打分情况" << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//排序
		sort(d.begin(), d.end());

		d.pop_back();//最高分
		d.pop_front();//最低分

		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		//平均分
		int avg = sum / d.size();

		it->m_Score = avg;
	}

}

void showScore(vector<Player>& v)
{
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << (*it).m_Name << " 平均成绩: " << it->m_Score << endl;
	}
}

int main()
{
	//设置随机数
	srand((unsigned int) time(NULL));
	//1 创建5个选手
	vector<Player> v;
	creatPlayer(v);
	//for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名: " << (*it).m_Name << " 成绩: " << it->m_Score << endl;
	//}
	
	//2 打分
	setScore(v);

	//3 显示平均分
	showScore(v);
	system("pause");
	return EXIT_SUCCESS;
}

