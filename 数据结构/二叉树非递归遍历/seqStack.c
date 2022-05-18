#include "seqStack.h"

struct SStack
{
	void * data[MAX];  //ջ������

	int m_Size; //ջ��С
};

//��ʼ��ջ
SeqStack init_SeqStack()
{
	struct SStack * myStack = malloc(sizeof(struct SStack));

	if (myStack == NULL)
	{
		return NULL;
	}

	//��ʼ������
	memset(myStack->data, 0, sizeof(void *)* MAX);

	//��ʼ��ջ��С
	myStack->m_Size = 0;

	return myStack;
}
//��ջ
void push_SeqStack(SeqStack stack, void * data)
{
	//��ջ����  --- ����β��
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct SStack * mystack = stack;
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
	//��ջ����  --- ����βɾ
	if (stack == NULL)
	{
		return;
	}

	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return;
	}

	mystack->data[mystack->m_Size - 1] = NULL;

	mystack->m_Size--;

}
//����ջ��
void * top_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return NULL;
	}

	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return NULL;
	}
	return mystack->data[mystack->m_Size - 1];
}
//����ջ��С
int size_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct SStack * mystack = stack;

	return mystack->m_Size;

}
//�ж�ջ�Ƿ�Ϊ��
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;//����-1������  ��ջ
	}

	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return 1;
	}

	return 0; //����0 ���� ���ǿ�ջ

}
//����ջ
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	free(stack);
	stack = NULL;
}
