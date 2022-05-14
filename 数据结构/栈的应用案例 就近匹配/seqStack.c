#include "seqStack.h"

struct SStack
{
	void * data[MAX];  //栈的数组

	int m_Size; //栈大小
};

//初始化栈
SeqStack init_SeqStack()
{
	struct SStack * myStack = malloc(sizeof(struct SStack));

	if (myStack == NULL)
	{
		return NULL;
	}

	//初始化数组
	memset(myStack->data, 0, sizeof(void *)* MAX);

	//初始化栈大小
	myStack->m_Size = 0;

	return myStack;
}
//入栈
void push_SeqStack(SeqStack stack, void * data)
{
	//入栈本质  --- 数组尾插
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
//出栈
void pop_SeqStack(SeqStack stack)
{
	//出栈本质  --- 数组尾删
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
//返回栈顶
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
//返回栈大小
int size_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct SStack * mystack = stack;

	return mystack->m_Size;

}
//判断栈是否为空
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;//返回-1代表真  空栈
	}

	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return 1;
	}

	return 0; //返回0 代表 不是空栈

}
//销毁栈
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	free(stack);
	stack = NULL;
}
