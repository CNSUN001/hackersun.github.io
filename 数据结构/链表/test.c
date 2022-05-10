
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ڵ�ṹ��
struct LinkNode
{
	//������
	void* data;
	//ָ������
	struct LinkNode* next;
};

//����ṹ��
struct LList
{
	//ͷ�ڵ�
	struct LinkNode pHeader;

	//������
	int m_size;
};

typedef void* LinkList;

//��ʼ������
LinkList init_LinkList()
{
	struct LList* myList = (struct LList*)malloc(sizeof(struct LList));
	if (myList == NULL)
	{
		return NULL;
	}
	myList->pHeader.data = NULL;
	myList->pHeader.next = NULL;
	myList->m_size = 0;
}

//��������
void insert_LinkList(LinkList list, int pos, void* data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	//��list��ԭ�� struct LList ��������
	struct LList* myList = list;
	if (pos<0 || pos > myList->m_size)
	{
		//��Чλ��ֱ��β��
		pos = myList->m_size;
	}
	//�ҵ�����ڵ��ǰ���ڵ�
	struct LinkNode* pCurrent = &myList->pHeader;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}
	//pCurrent ��Ҫ����ڵ��ǰ��

	//�����½ڵ�
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	if (newNode == NULL)
	{
		return;
	}
	newNode->data = data;
	newNode->next = NULL;

	//�����µĽڵ��ϵ
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	//����������
	myList->m_size++;
}

//��������
void foreach_LinkList(LinkList list,void(*myForeach)(void*))
{
	if (list == NULL)
	{
		return;
	}
	struct LList* mylist = list;

	struct LinkNode* pCurrent = mylist->pHeader.next;
	for (int i = 0; i < mylist->m_size; i++)
	{
		myForeach(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}





//����

struct Person
{
	char name[64];
	int age;
};

//�ص�����
void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("������%s  ���� ��%d\n", p->name, p->age);
}

void test01()
{
	//׼������
	struct Person p1 = { "Сһ",18 };
	struct Person p2 = { "С��",18 };
	struct Person p3 = { "С��",18 };
	struct Person p4 = { "С��",18 };
	struct Person p5 = { "С��",18 };
	struct Person p6 = { "С��",18 };

	//��ʼ��
	LinkList mylist = init_LinkList();

	//��������
	//С�� С�� С�� С�� Сһ С��
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, -1, &p3);
	insert_LinkList(mylist, 0, &p4);
	insert_LinkList(mylist, 1, &p5);
	insert_LinkList(mylist, 0, &p6);

	//����
	foreach_LinkList(mylist, myPrintPerson);

}

int main()
{
	test01();
	system("pauss");
	return EXIT_SUCCESS;
}


