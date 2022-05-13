#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ͷ�ڵ����ջ��������Ƶ�������ɾ����ͷ�壩

//�ڵ�ṹ��
struct stackNode
{
	struct stackNode* next;
};

//ջ�Ľṹ��
struct LStack
{
	struct stackNode pHeader;
	int m_size;
};

typedef void* LinkStack;

//��ʼ��
LinkStack init_LinkStack()
{
	struct LStack* myStack = malloc(sizeof(struct LStack));
	if (myStack == NULL)
	{
		return NULL;
	}
	myStack->pHeader.next = NULL;
	myStack->m_size = 0;
	return myStack;
}

//��ջ
void push_LinkStack(LinkStack stack, void* data)
{
	if (stack == NULL )
	{
		return ;
	}
	if (data == NULL)
	{
		return;
	}
	struct LStack* mystack = stack;
	struct stackNode* pCurrent = data;
	//����ָ��
	pCurrent->next = mystack->pHeader.next;
	mystack->pHeader.next = pCurrent;
	
	mystack->m_size++;
}

//��ջ
void pop_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return;
	}
	struct LStack* mystack = stack;

	mystack->pHeader.next = mystack->pHeader.next->next;

	mystack->m_size--;
}

//����ջ��Ԫ��
void* top_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return NULL;
	}
	struct LStack* mystack = stack;
	if (mystack->m_size == 0)
	{
		return NULL;
	}
	return mystack->pHeader.next;
}

//����ջ����
int size_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	struct LStack* mystack = stack;
	return mystack->m_size;
}
//�ж��Ƿ�Ϊ��
int isEmpty_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return 0;
	}
}

//����

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}