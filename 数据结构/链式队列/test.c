#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//因为需要在头尾都进行操作，所以对头或者队尾都可以

struct QueueNode
{
	struct QueueNode* next;
};

struct LQueue
{
	struct QueueNode pHeader;
	int m_size;
	struct QueueNode* pTil;
};
typedef void* LinkQueue;

//初始化
LinkQueue init_LinkQueue()
{
	struct LQueue* myQueue = malloc(sizeof(struct LQueue));
	if (myQueue == NULL)
	{
		return NULL;
	}
	myQueue->pHeader.next = NULL;

	myQueue->m_size = 0;

	myQueue->pTil = &myQueue->pHeader;
	return  myQueue;

}
//入队
void push_LinkQueue(LinkQueue queue, void* data)
{
	if (queue == NULL)
	{
		return ;
	}
	if (data == NULL)
	{
		return;
	}
	//本质 尾插
	struct LQueue* myqueue = queue;

	struct QueueNode* myNode = data;

	//更改指针指向
	myqueue->pTil->next = myNode;
	myNode->next = NULL;

	//更新新的尾节点
	myqueue->pTil = myNode;

	myqueue->m_size++;
}
//出队
void pop_LinkQueue(LinkQueue queue)
{
	//头删
	if (queue == NULL)
	{
		return;
	}
	struct LQueue* myqueue = queue;
	if (myqueue->m_size == 0)
	{
		return;
	}
	if (myqueue->m_size == 1)
	{
		myqueue->pHeader.next = NULL;
		myqueue->pTil = &myqueue->pHeader;//一个节点的时候，要将尾节点还原到头
		myqueue->m_size--;
		return;
	}
	myqueue->pHeader.next = myqueue->pHeader.next->next;
	myqueue->m_size--;
}
//返回队列大小
int size_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return -1;
	}
	struct LQueue* myqueue = queue;
	return myqueue->m_size;
}
//判断是否为空
int isEmpty_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return -1;
	}
	struct LQueue* myqueue = queue;
	if (myqueue->m_size == 0)
	{
		return 1;
	}
	return 0;
}
//返回队头
void* front_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	struct LQueue* myqueue = queue;

	return myqueue->pHeader.next;
}

//返回队尾
void* back_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	struct LQueue* myqueue = queue;

	return myqueue->pTil;
}
//销毁
void destroy_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return ;
	}
	free(queue);
	queue = NULL;
}

//测试
struct Person
{
	void* node;
	char name[64];
	int age;
};
void test1()
{
	//初始化队列
	LinkQueue myQueue = init_LinkQueue();

	//准备数据
	struct Person p1 = {NULL, "aaa", 10 };
	struct Person p2 = {NULL, "bbb", 20 };
	struct Person p3 = {NULL, "ccc", 30 };
	struct Person p4 = {NULL, "ddd", 40 };
							 

	//入队
	push_LinkQueue(myQueue, &p1);
	push_LinkQueue(myQueue, &p2);
	push_LinkQueue(myQueue, &p3);
	push_LinkQueue(myQueue, &p4);
	printf("队列大小为：%d\n", size_LinkQueue(myQueue));
	while (isEmpty_LinkQueue(myQueue) == 0)
	{
		//访问队头
		struct Person* pFront = front_LinkQueue(myQueue);
		fprintf(stdout, "队首元素 姓名：%s，年龄：%d\n",pFront->name,pFront->age);
		//访问队尾
		struct Person* pback = back_LinkQueue(myQueue);
		fprintf(stdout, "队尾元素 姓名：%s，年龄：%d\n", pback->name, pback->age);

		pop_LinkQueue(myQueue);
	}
	printf("队列大小为：%d\n", size_LinkQueue(myQueue));
	destroy_LinkQueue(myQueue);
}
int main()
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}