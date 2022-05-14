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
		return -1;
	}
	struct LStack* mystack = stack;
	if (mystack->m_size == 0)
	{
		return 1;
	}
	return 0;
}

//销毁
void destroy_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return ;
	}
	free(stack);
	stack = NULL;
}
//测试
struct Person
{
	void* node;
	char name[64];
	int age;
};

void test01()
{
	//初始化栈
	LinkStack myStack = init_LinkStack();

	//创建数据
	struct Person p1 = { NULL, "aaa", 10 };
	struct Person p2 = { NULL, "bbb", 20 };
	struct Person p3 = { NULL, "ccc", 30 };
	struct Person p4 = { NULL, "ddd", 40 };
	struct Person p5 = { NULL, "eee", 50 };

	//入栈
	push_LinkStack(myStack, &p1);
	push_LinkStack(myStack, &p2);
	push_LinkStack(myStack, &p3);
	push_LinkStack(myStack, &p4);
	push_LinkStack(myStack, &p5);

	printf("链式存储-- 栈的元素个数为：%d\n", size_LinkStack(myStack));

	while (isEmpty_LinkStack(myStack) == 0) //栈不为空，查看栈顶元素，出栈
	{
		struct Person* p = top_LinkStack(myStack);
		printf("姓名：%s 年龄：%d\n", p->name, p->age);

		//出栈
		pop_LinkStack(myStack);
	}

	printf("链式存储-- 栈的元素个数为：%d\n", size_LinkStack(myStack));

	//销毁栈
	destroy_LinkStack(myStack);
}
int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}