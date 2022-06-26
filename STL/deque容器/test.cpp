
//deque ˫�˿���   double-ended queue

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
/*
3.3.3.1 deque���캯��
deque<T> deqT;//Ĭ�Ϲ�����ʽ
deque(beg, end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
deque(n, elem);//���캯����n��elem����������
deque(const deque &deq);//�������캯����

3.3.3.2 deque��ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
deque& operator=(const deque &deq); //���صȺŲ�����
swap(deq);// ��deq�뱾���Ԫ�ػ���

3.3.3.3 deque��С����
deque.size();//����������Ԫ�صĸ���
deque.empty();//�ж������Ƿ�Ϊ��
deque.resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��,���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

void printDeque(const deque <int>& d)
{
	//iterator ��ͨ������
	//reverse_iterator ��ת������
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque <int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	deque<int>  d2;
	d2 = d;

	printDeque(d2);

	if (d2.empty())
	{
		cout << "d2Ϊ��" << endl;
	}
	else
	{
		cout << "d2��sizeΪ��" << d2.size() << endl;
	}
}


/*
3.3.3.4 deque˫�˲����ɾ������
push_back(elem);//������β�����һ������
push_front(elem);//������ͷ������һ������
pop_back();//ɾ���������һ������
pop_front();//ɾ��������һ������

3.3.3.5 deque���ݴ�ȡ
at(idx);//��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range��
operator[];//��������idx��ָ�����ݣ����idxԽ�磬���׳��쳣��ֱ�ӳ���
front();//���ص�һ�����ݡ�
back();//�������һ������
*/

void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);

	d.pop_back();//βɾ
	d.pop_front();//ͷɾ
	//200 100 10 20
	printDeque(d);

	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;
}

/*
3.3.3.6 deque�������
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
3.3.3.7 dequeɾ������
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*/

void test03()
{
	deque<int >d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//���� insert
	d.insert(++d.begin(), 2,1000);
	printDeque(d);
	//300 1000 1000 200 100 10 20 30
	//ɾ��erase
	//d.erase(d.begin());
	deque<int>::iterator it1 = d.begin();
	deque<int>::iterator it2 = it1;
	it1 = it1 + 1;
	it2 = it2 + 3;  //[beg,end)  ������ Ҫָ��Ҫɾ����λ�õ���һ��λ��
	d.erase(it1,it2);
	printDeque(d);

	//���
	d.clear();
	printDeque(d);

}

bool myCompare(int v1,int v2)
{
	return v1 > v2;
}

void test04()
{
	deque<int >d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//Ĭ�������С����
	sort(d.begin(), d.end());
	printDeque(d);

	sort(d.begin(), d.end(), myCompare);

	printDeque(d);


}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}

