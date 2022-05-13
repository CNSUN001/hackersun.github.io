#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//数组的首地址，做栈底 ，是因为栈顶需要频繁做入栈和出栈的操作，对尾部做插入删除效率高

//
//实现接口
// 初始化 入栈  出栈  返回栈顶元素 栈大小  判断栈是否为空 销毁栈

#define MAX 1024

struct SStack
{
	void* data[MAX];//栈的数组

	int m_Size;//栈大小
};

typedef void* SeqStack;

//初始化栈

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

//入栈
void push_SeqStack(SeqStack stack,void*data)
{
	//入栈的本质 — 数组的尾插
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

//出栈
void pop_SeqStack(SeqStack stack)
{
	//出栈的本质 - 数组的尾删
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

//返回栈顶
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

//返回栈的大小
int size_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	struct SStack* mystack = stack;
	return mystack->m_Size;
}  

//判断栈是否为空
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;//返回-1代表空栈
	}
	struct SStack* mystack = stack;
	if (mystack->m_Size == 0)
	{
		return 1;
	}
	return 0;
}

//销毁栈
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return ;
	}
	free(stack);
	stack= NULL;
}

//测试
struct Person
{
	char name[64];
	int age;
};

void test01()
{
	//初始化栈
	SeqStack myStack = init_SeqStack();

	//创建数据
	struct Person p1 = { "aaa", 10 };
	struct Person p2 = { "bbb", 20 };
	struct Person p3 = { "ccc", 30 };
	struct Person p4 = { "ddd", 40 };
	struct Person p5 = { "eee", 50 };

	//入栈
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	printf("栈的元素个数为：%d\n", size_SeqStack(myStack));
	while (isEmpty_SeqStack(myStack) == 0)//栈不为空，查看栈顶元素，出栈
	{
		struct Person* p = top_SeqStack(myStack);
		printf("姓名:%s 年龄：%d\n", p->name, p->age);
		pop_SeqStack(myStack);
	}
	printf("栈的元素个数为：%d\n", size_SeqStack(myStack));
	//销毁栈
	destroy_SeqStack(myStack);
}
int main()
{
	
	test01();

	system("pause");
	return EXIT_SUCCESS;
}



