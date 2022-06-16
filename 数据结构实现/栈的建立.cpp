#include <iostream>
// 顺序栈的实现

#define MaxSize 50 //定义栈中元素最大个数

typedef struct
{
	int data[MaxSize];  //存放栈中元素
	int top;			//栈顶指针
}SqStack;

//栈顶指针：S.top, 初始时设置s．top = -1 栈顶元素：S.data[S.top]。
//进栈操作：栈不满时， 栈顶指针先加1, 再送值到栈顶元素。
//出栈操作：栈非空时， 先取栈顶元素值， 再将栈顶指针减1 。
//栈空条件：S.top == -1; 栈满条件：S .top == MaxSize - 1; 栈长：S.top + l。

//1 初始化
void InitStack(SqStack& S)
{
	S.top = -1;
}

//2 判栈空
bool StackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}

//3 入栈
bool Push(SqStack& S, int x)
{
	if (S.top == MaxSize - 1)	//栈满 报错
		return false;
	S.data[++S.top] = x;	//指针先加1，再入栈
	return true;
}

//4 出栈
bool Pop(SqStack& S, int& x)
{
	if (S.top == -1)	//栈空 报错
		return false;
	x = S.data[S.top--];
	return true;
}

//5 读栈顶元素
bool GetTop(SqStack& S, int& x)
{
	if (S.top == -1)	//栈空 报错
		return false;
	x = S.data[S.top];
	return true;
}


//栈的链式存储结构  使用带头节点的单链表来实现链表

typedef struct LinkedStackNode
{
	int data;					//数据域
	struct Linknode* next;		//指针域
}LinkedStackNode, *LinkedStack;


//1 链栈的初始化
LinkedStack Init_LinkedStack()
{
	LinkedStack top = (LinkedStackNode*)malloc(sizeof(LinkedStackNode));

	if (top != NULL)
	{
		top->next = NULL;
	}
	return top;
}

//2 判断链栈是否空
bool int LinkedStack_Empty(LinkedStack top)
{
	if (top->next == NULL)
		return true;
	else
		return false;
}

//3 入栈
bool Push_LinkedStack(LinkedStack top, int x)
{
	//LinkedStackNode* node = (LinkedStackNode*)malloc(sizeof(LinkedStackNode));
	LinkedStackNode* node = new LinkedStackNode;
	if (node == NULL)
	{
		return false;
	}
	else
	{
		node->data = x;
		node->next = top->next;
		top->next = node;
		return true;
	}
}

//3 出栈
bool Pop_LinkedStack(LinkedStack top, int& x)
{
	LinkedStackNode* node = top->next;
	if (top->next == NULL)
	{
		return false;
	}
	else
	{
		x = node->data;
		top->next = node->next;
		//free(node);
		delete node;
		node == NULL;
		return true;
	}
}

//4 访问栈顶数据元素

bool Get_LinkedStack(LinkedStack top, int& x)
{
	if (top->next == NULL)
	{
		return false;
	}
	else
	{
		x = top->next->data;
		return true;
	}
}