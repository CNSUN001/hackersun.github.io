#include <iostream>
// ˳��ջ��ʵ��

#define MaxSize 50 //����ջ��Ԫ��������

typedef struct
{
	int data[MaxSize];  //���ջ��Ԫ��
	int top;			//ջ��ָ��
}SqStack;

//ջ��ָ�룺S.top, ��ʼʱ����s��top = -1 ջ��Ԫ�أ�S.data[S.top]��
//��ջ������ջ����ʱ�� ջ��ָ���ȼ�1, ����ֵ��ջ��Ԫ�ء�
//��ջ������ջ�ǿ�ʱ�� ��ȡջ��Ԫ��ֵ�� �ٽ�ջ��ָ���1 ��
//ջ��������S.top == -1; ջ��������S .top == MaxSize - 1; ջ����S.top + l��

//1 ��ʼ��
void InitStack(SqStack& S)
{
	S.top = -1;
}

//2 ��ջ��
bool StackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}

//3 ��ջ
bool Push(SqStack& S, int x)
{
	if (S.top == MaxSize - 1)	//ջ�� ����
		return false;
	S.data[++S.top] = x;	//ָ���ȼ�1������ջ
	return true;
}

//4 ��ջ
bool Pop(SqStack& S, int& x)
{
	if (S.top == -1)	//ջ�� ����
		return false;
	x = S.data[S.top--];
	return true;
}

//5 ��ջ��Ԫ��
bool GetTop(SqStack& S, int& x)
{
	if (S.top == -1)	//ջ�� ����
		return false;
	x = S.data[S.top];
	return true;
}


//ջ����ʽ�洢�ṹ  ʹ�ô�ͷ�ڵ�ĵ�������ʵ������

typedef struct LinkedStackNode
{
	int data;					//������
	struct Linknode* next;		//ָ����
}LinkedStackNode, *LinkedStack;


//1 ��ջ�ĳ�ʼ��
LinkedStack Init_LinkedStack()
{
	LinkedStack top = (LinkedStackNode*)malloc(sizeof(LinkedStackNode));

	if (top != NULL)
	{
		top->next = NULL;
	}
	return top;
}

//2 �ж���ջ�Ƿ��
bool int LinkedStack_Empty(LinkedStack top)
{
	if (top->next == NULL)
		return true;
	else
		return false;
}

//3 ��ջ
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

//3 ��ջ
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

//4 ����ջ������Ԫ��

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