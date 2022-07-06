
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <vector>
using namespace std;

//vector ��̬���Ӵ�С������ԭ�ռ�֮�������¿ռ䣬������һ�������ڴ�ռ䣬
//ָ��ԭvector�ĵ�������ʧЧ��
//vector ��������

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v.capacity() << endl; //capacity������ ���ε��� ���������
	}
}


//3.2.4.1 vector���캯��
//vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem);//���캯����n��elem����������
//vector(const vector& vec);//�������캯����
//
////���� ʹ�õڶ������캯�� ���ǿ���...
//int arr[] = { 2,3,4,1,9 };
//vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));

//assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem);//��n��elem������ֵ������
//vector& operator=(const vector& vec);//���صȺŲ�����
//swap(vec);// ��vec�뱾���Ԫ�ػ�����



void printVector(vector<int> & v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//vector<int>v2;
	//v2 = {  1,2,3,4,5 };
	vector<int>v2(v1.begin(),v1.end());

	printVector(v2);

	//int arr[] = { 1,2,3,4,5,6 };
	//cout << sizeof(arr) / sizeof(int) << endl;
	//vector<int>v3(arr, arr + sizeof(arr) / sizeof(int));
	//printVector(v3);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//swap
	vector<int> v4(10, 100);
	printVector(v4);

	cout << "v3��v4����" << endl;
	v3.swap(v4);
	printVector(v3);
	printVector(v4);

}


//3.2.4.3 vector��С����
//	size();//����������Ԫ�صĸ���
//empty();//�ж������Ƿ�Ϊ��
//resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num, elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á����������̣���ĩβ����������>�ȵ�Ԫ�ر�ɾ����
//capacity();//����������
//reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�


void test03()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ�գ���СΪ��"<< v1.size() << endl;
	}

	v1.resize(10,100); //����ָ���������� //���صĵڶ��������������ֵ
	printVector(v1);
	v1.resize(3);
	printVector(v1);
	

	//reserve ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�


	//front();//���������е�һ������Ԫ��
	//back();//�������������һ������Ԫ��
	cout << "v1��front = " << v1.front() << endl;
	cout << "v1��back = " << v1.back() << endl;

}


//3.2.4.4 vector���ݴ�ȡ����
//	at(int idx); //��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range�쳣��
//operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
void test04()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	try
	{
		//cout << v1[100] << endl;
		cout << v1.at(100) << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "�쳣����" << endl;;
	}
}


//3.2.4.5 vector�����ɾ������
//insert(const_iterator pos, int count, ele);//������ָ��λ��pos����count��Ԫ��ele.
//push_back(ele); //β������Ԫ��ele
//pop_back();//ɾ�����һ��Ԫ��
//erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
//erase(const_iterator pos);//ɾ��������ָ���Ԫ��
//clear();//ɾ������������Ԫ��
void test05()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	v.insert(v.begin(), 2, 100);//������ָ��λ��pos����count��Ԫ��ele.

	printVector(v);

	v.push_back(1000);//β��
	printVector(v);

	v.pop_back();// βɾ
	printVector(v);

	v.erase(v.begin()); //ɾ����һ��
	printVector(v);


	v.erase(v.begin(),v.end()); //ȫɾ //�ȼ�v.clear();
	printVector(v);

}

// ����1 ����swap�����ڴ�
void test06()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;

	v.resize(3); //��������ı�
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;

	
	//����swap�����ڴ�
	//������ͣ�vector<int>(v)�������� ͨ���������캯�� 
	//������һ���µĶ���(�µĶ����С��������Ϊ�������������ݵĲ��ּ�capcity=size)
	//ͳ��swap(v)�������� vָ����������ʵ������ ����������ָ��������ݣ�֮��� ����������ָ����
	//�������������ڴ�

	vector<int>(v).swap(v);  //��һ��v��һ����������
	cout << "v.capacity = " << v.capacity() << endl;
	cout << "v.size = " << v.size() << endl;
}

//����2 ����reserve Ԥ���ռ�
void test07()
{
	vector<int> v;
	v.reserve(100000);
	int num = 0;
	int* p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}


void test08()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//�������
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		cout << *it << endl;
	}

	//vector�ĵ�������������ʵ�������֧����Ծ����
	vector<int>::iterator itBegin = v.begin();
	itBegin += 3;
	cout << *itBegin << endl;

	
	//list<int>L;
	//L.push_back(10);
	//L.push_back(20);
	//L.push_back(30);
	//list<int>::iterator itBegin2 = L.begin();
	//itBegin2 = itBegin2 +1; List�ĵ������ǲ�֧��������ʵ�
	//cout << *itBegin2 << endl;

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
	//test08();
	system("pause");
	return EXIT_SUCCESS;
}

