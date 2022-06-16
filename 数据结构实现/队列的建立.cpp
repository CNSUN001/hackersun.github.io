#include <iostream>

//���е�˳��洢

#define Maxsize 50

typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;

//1 ��ʼ������
void InitQueue(SqQueue& Q)
{
	Q.rear = Q.front = 0; //��ʼ�� ��ͷ ��βָ��ָ��0
}

//2 �ж��Ƿ�Ϊ��
bool QueueEmpty(SqQueue Q)
{
	if (Q.rear == Q.front)
		return true;
	else
		return false;
}

//3 ���
bool EnQueue(SqQueue& Q, int x)
{
	if ((Q.rear + 1)%MaxSize == Q.front)
	{
		return false; //��������
	}
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%MaxSize;
	
	return true;
}

//4 ����
bool DeQueue(SqQueue& Q, int& x)
{
	if (Q.rear == Q.front)  //Q.rear == MaxSize ��Ϊ������������ �ǲ��е� �ᵼ��front ǰ����Ȼ�пռ���ּ����
	{
		return false;
	}
	
	x = Q.data[Q.front];
	Q.front =(Q.front + 1)%MaxSize;
	return true;
}

//5 ջ��Ԫ�ظ���
int NumQueue(SqQueue& Q)
{
	return (Q.rear - Q.front + MaxSize) % MaxSize;
}



//���е���ʽ�洢�ṹ

typedef struct     //��ʽ���нڵ�
{
	int data;
	struct LinkNode* next;
}LinkNode;

typedef struct		//��ʽ����
{
	LinkNode* front, * rear;  //ͷָ���βָ��
}LinkQueue;

//1 ��ʼ��
void InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}
//2 �жϿ�
bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
//3 ���
void EnQueue(LinkQueue& Q, int x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s; //�ѽڵ�������
	Q.rear = s;//����rearָ��
}
//4 ����
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
		Q.rear = Q.front; //��ԭ����ֻ��һ����㣬ɾ������
	}
	free(s);
	return true;
}

//˫�˶���