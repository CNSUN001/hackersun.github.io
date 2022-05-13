#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//头节点端做栈顶，利于频繁插入和删除（头插）

//节点结构体
struct stackNode
{
	struct stackNode* next;
};

//栈的结构体
struct LStack
{
	struct stackNode pHeader;
	int m_size;
};

typedef void* LinkStack;

//初始化
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

//入栈
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
	//更改指向
	pCurrent->next = mystack->pHeader.next;
	mystack->pHeader.next = pCurrent;
	
	mystack->m_size++;
}

//出栈
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

//返回栈顶元素
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

//返回栈个数
int size_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	struct LStack* mystack = stack;
	return mystack->m_size;
}
//判断是否为空
int isEmpty_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return 0;
	}
}

//销毁

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}