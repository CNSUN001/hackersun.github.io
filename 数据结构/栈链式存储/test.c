#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ͷ�ڵ����ջ��������Ƶ�������ɾ����ͷ�壩

//�ڵ�ṹ��
struct stackNode
{
	struct stackNode* next;
};

//ջ�Ľṹ��
struct LStack
{
	struct stackNode pHeader;
	int m_size;
};

typedef void* LinkStack;

//��ʼ��
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

//��ջ
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
	//����ָ��
	pCurrent->next = mystack->pHeader.next;
	mystack->pHeader.next = pCurrent;
	
	mystack->m_size++;
}

//��ջ
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

//����ջ��Ԫ��
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

//����ջ����
int size_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}
	struct LStack* mystack = stack;
	return mystack->m_size;
}

//�ж��Ƿ�Ϊ��
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

//����
void destroy_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return ;
	}
	free(stack);
	stack = NULL;
}
//����
struct Person
{
	void* node;
	char name[64];
	int age;
};

void test01()
{
	//��ʼ��ջ
	LinkStack myStack = init_LinkStack();

	//��������
	struct Person p1 = { NULL, "aaa", 10 };
	struct Person p2 = { NULL, "bbb", 20 };
	struct Person p3 = { NULL, "ccc", 30 };
	struct Person p4 = { NULL, "ddd", 40 };
	struct Person p5 = { NULL, "eee", 50 };

	//��ջ
	push_LinkStack(myStack, &p1);
	push_LinkStack(myStack, &p2);
	push_LinkStack(myStack, &p3);
	push_LinkStack(myStack, &p4);
	push_LinkStack(myStack, &p5);

	printf("��ʽ�洢-- ջ��Ԫ�ظ���Ϊ��%d\n", size_LinkStack(myStack));

	while (isEmpty_LinkStack(myStack) == 0) //ջ��Ϊ�գ��鿴ջ��Ԫ�أ���ջ
	{
		struct Person* p = top_LinkStack(myStack);
		printf("������%s ���䣺%d\n", p->name, p->age);

		//��ջ
		pop_LinkStack(myStack);
	}

	printf("��ʽ�洢-- ջ��Ԫ�ظ���Ϊ��%d\n", size_LinkStack(myStack));

	//����ջ
	destroy_LinkStack(myStack);
}
int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}