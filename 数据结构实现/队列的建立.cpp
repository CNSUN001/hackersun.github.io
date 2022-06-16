#include <iostream>

//队列的顺序存储

#define Maxsize 50

typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;

//1 初始化队列
void InitQueue(SqQueue& Q)
{
	Q.rear = Q.front = 0; //初始化 队头 队尾指针指向0
}

//2 判断是否为空
bool QueueEmpty(SqQueue Q)
{
	if (Q.rear == Q.front)
		return true;
	else
		return false;
}

//3 入队
bool EnQueue(SqQueue& Q, int x)
{
	if ((Q.rear + 1)%MaxSize == Q.front)
	{
		return false; //队满报错
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%MaxSize;
	
	return true;
}

//4 出队
bool DeQueue(SqQueue& Q, int& x)
{
	if (Q.rear == Q.front)  //Q.rear == MaxSize 作为队列满的条件 是不行的 会导致front 前面仍然有空间出现假溢出
	{
		return false;
	}
	
	x = Q.data[Q.front];
	Q.front =(Q.front + 1)%MaxSize;
	return true;
}

//5 栈中元素个数
int NumQueue(SqQueue& Q)
{
	return (Q.rear - Q.front + MaxSize) % MaxSize;
}



//队列的链式存储结构

typedef struct     //链式队列节点
{
	int data;
	struct LinkNode* next;
}LinkNode;

typedef struct		//链式队列
{
	LinkNode* front, * rear;  //头指针和尾指针
}LinkQueue;

//1 初始化
void InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
//2 判断空
bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
//3 入队
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s; //把节点插入进来
	Q.rear = s;//更改rear指向
}
//4 出队
bool DeQueue(LinkQueue& Q, int& x)
{
	if (Q.front == Q.rear)
	{
		return false;
	}
	LinkNode* s = Q.front->next;
	x = s->data;
	Q.front->next = s->next;
	if (Q.rear == p)
	{
		Q.rear = Q.front; //若原队列只有一个结点，删除后变空
	}
	free(s);
	return true;
}

//双端队列