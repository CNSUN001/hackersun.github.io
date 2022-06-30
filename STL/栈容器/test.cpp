#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
using namespace std;

//stack���ṩ����

/*
3.4.3.1 stack���캯��
stack<T> stkT;//stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ��
stack(const stack &stk);//�������캯��
3.4.3.2 stack��ֵ����
stack& operator=(const stack &stk);//���صȺŲ�����
3.4.3.3 stack���ݴ�ȡ����
push(elem);//��ջ�����Ԫ��
pop();//��ջ���Ƴ���һ��Ԫ��
top();//����ջ��Ԫ��
3.4.3.4 stack��С����
empty();//�ж϶�ջ�Ƿ�Ϊ��
size();//���ض�ջ�Ĵ�С
*/

void test01()
{
	stack<int> S;
	//��ջ
	S.push(10);
	S.push(20);
	S.push(30);
	S.push(40);

	cout << "size  = " << S.size() << endl;

	while(!S.empty())
	{
		//����ջ��Ԫ��
		cout << S.top() << endl;
		//��ջ
		S.pop();
	}
	cout << "size  = " << S.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

