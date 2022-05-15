#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��Ϊ��Ҫ��ͷβ�����в��������Զ�ͷ���߶�β������

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

//��ʼ��
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
//���
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
	//���� β��
	struct LQueue* myqueue = queue;

	struct QueueNode* myNode = data;

	//����ָ��ָ��
	myqueue->pTil->next = myNode;
	myNode->next = NULL;

	//�����µ�β�ڵ�
	myqueue->pTil = myNode;

	myqueue->m_size++;
}
//����
void pop_LinkQueue(LinkQueue queue)
{
	//ͷɾ
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
		myqueue->pTil = &myqueue->pHeader;//һ���ڵ��ʱ��Ҫ��β�ڵ㻹ԭ��ͷ
		myqueue->m_size--;
		return;
	}
	myqueue->pHeader.next = myqueue->pHeader.next->next;
	myqueue->m_size--;
}
//���ض��д�С
int size_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return -1;
	}
	struct LQueue* myqueue = queue;
	return myqueue->m_size;
}
//�ж��Ƿ�Ϊ��
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
//���ض�ͷ
void* front_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	struct LQueue* myqueue = queue;

	return myqueue->pHeader.next;
}

//���ض�β
void* back_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return NULL;
	}
	struct LQueue* myqueue = queue;

	return myqueue->pTil;
}
//����
void destroy_LinkQueue(LinkQueue queue)
{
	if (queue == NULL)
	{
		return ;
	}
	free(queue);
	queue = NULL;
}

//����
struct Person
{
	void* node;
	char name[64];
	int age;
};
void test1()
{
	//��ʼ������
	LinkQueue myQueue = init_LinkQueue();

	//׼������
	struct Person p1 = {NULL, "aaa", 10 };
	struct Person p2 = {NULL, "bbb", 20 };
	struct Person p3 = {NULL, "ccc", 30 };
	struct Person p4 = {NULL, "ddd", 40 };
							 

	//���
	push_LinkQueue(myQueue, &p1);
	push_LinkQueue(myQueue, &p2);
	push_LinkQueue(myQueue, &p3);
	push_LinkQueue(myQueue, &p4);
	printf("���д�СΪ��%d\n", size_LinkQueue(myQueue));
	while (isEmpty_LinkQueue(myQueue) == 0)
	{
		//���ʶ�ͷ
		struct Person* pFront = front_LinkQueue(myQueue);
		fprintf(stdout, "����Ԫ�� ������%s�����䣺%d\n",pFront->name,pFront->age);
		//���ʶ�β
		struct Person* pback = back_LinkQueue(myQueue);
		fprintf(stdout, "��βԪ�� ������%s�����䣺%d\n", pback->name, pback->age);

		pop_LinkQueue(myQueue);
	}
	printf("���д�СΪ��%d\n", size_LinkQueue(myQueue));
	destroy_LinkQueue(myQueue);
}
int main()
{
	test1();
	system("pause");
	return EXIT_SUCCESS;
}