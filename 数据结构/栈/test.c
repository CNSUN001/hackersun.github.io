#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//������׵�ַ����ջ�� ������Ϊջ����ҪƵ������ջ�ͳ�ջ�Ĳ�������β��������ɾ��Ч�ʸ�

//
//ʵ�ֽӿ�
// ��ʼ�� ��ջ  ��ջ  ����ջ��Ԫ�� ջ��С  �ж�ջ�Ƿ�Ϊ�� ����ջ

#define MAX 1024

struct SStack
{
	void* data[MAX];//ջ������

	int m_Size;//ջ��С
};

typedef void* SeqStack;

//��ʼ��ջ

SeqStack init_SeqStack()
{
	struct SStack* myStack = malloc(sizeof(struct SStack));
	if (myStack == NULL)
	{
		return NULL;
	}
	memset(myStack->data, 0, sizeof(void*)*MAX);

	myStack->m_Size = 0;

	return myStack;
}

//��ջ
void push_SeqStack(SeqStack stack,void*data)
{
	//��ջ�ı��� �� �����β��
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct SStack* mystack = stack;
	if (mystack->m_Size == MAX)
	{
		return;
	}
	mystack->data[mystack->m_Size] = data;
	mystack->m_Size++;
}

//��ջ
void pop_SeqStack(SeqStack stack)
{
	//��ջ�ı��� - �����βɾ
	if (stack == NULL)
	{
		return;
	}
	struct SStack* mystack = stack;
	if (mystack->m_Size == 0)
	{
		return;
	}
	mystack->data[mystack->m_Size - 1] = NULL;
	mystack->m_Size--;
}

//����ջ��
void* top_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	struct SStack* mystack = stack;
	if (mystack->m_Size == 0)
	{
		return NULL;
	}
	return mystack->data[mystack->m_Size - 1];
}

//����ջ�Ĵ�С
int size_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	struct SStack* mystack = stack;
	return mystack->m_Size;
}  

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;//����-1�����ջ
	}
	struct SStack* mystack = stack;
	if (mystack->m_Size == 0)
	{
		return 1;
	}
	return 0;
}

//����ջ
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return ;
	}
	free(stack);
	stack= NULL;
}

//����
struct Person
{
	char name[64];
	int age;
};

void test01()
{
	//��ʼ��ջ
	SeqStack myStack = init_SeqStack();

	//��������
	struct Person p1 = { "aaa", 10 };
	struct Person p2 = { "bbb", 20 };
	struct Person p3 = { "ccc", 30 };
	struct Person p4 = { "ddd", 40 };
	struct Person p5 = { "eee", 50 };

	//��ջ
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	printf("ջ��Ԫ�ظ���Ϊ��%d\n", size_SeqStack(myStack));
	while (isEmpty_SeqStack(myStack) == 0)//ջ��Ϊ�գ��鿴ջ��Ԫ�أ���ջ
	{
		struct Person* p = top_SeqStack(myStack);
		printf("����:%s ���䣺%d\n", p->name, p->age);
		pop_SeqStack(myStack);
	}
	printf("ջ��Ԫ�ظ���Ϊ��%d\n", size_SeqStack(myStack));
	//����ջ
	destroy_SeqStack(myStack);
}
int main()
{
	
	test01();

	system("pause");
	return EXIT_SUCCESS;
}



