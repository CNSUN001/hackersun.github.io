#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//������׵�ַ����ջ�� ������Ϊջ����ҪƵ������ջ�ͳ�ջ�Ĳ�������β��������ɾ��Ч�ʸ�

//
//ʵ�ֽӿ�
// ��ʼ�� ��ջ  ��ջ  ����ջ��Ԫ�� ջ��С  �ж�ջ�Ƿ�Ϊ�� ����ջ

#define MAX 1024

struct SStack
{
	void* data[MAX];//ջ������

	int m_Size;//ջ��С
};

typedef void* SeqStack;

//��ʼ��ջ

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

//��ջ
void push_SeqStack()
{

}

//��ջ
void pop_SeqStack()
{

}

//����ջ��
void* top_SeqStack()
{

}

//����ջ�Ĵ�С
int size_SeqStack()
{

}

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_SeqStack()
{

}

//����ջ
void destroy_SeqStack()
{

}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}



