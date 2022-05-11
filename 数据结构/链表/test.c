
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
	return myList;
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


//ɾ������λ��
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* mylist = list;
	if (pos<0 || pos>mylist->m_size - 1)
	{
		return;
	}
	//�ҵ�ɾ���ڵ��ǰ��
	struct LinkNode* pCurrent = &mylist->pHeader;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}

	//��¼��ɾ���Ľڵ�
	struct LinkNode* pDel = pCurrent->next;
	//���½�����ϵ
	pCurrent->next = pDel->next;
	
	free(pDel);
	pDel = NULL;
	mylist->m_size--;

}

//��ֵ��ɾ������
void removeByValue_LinkList(LinkList list, void* data,int(*myCompare)(void*,void*))
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	//������������ָ��
	struct LList* mylist = list;
	struct LinkNode* pPrev = &mylist->pHeader;
	struct LinkNode* pCurrent = pPrev->next;
	for (int i = 0; i < mylist->m_size; i++)
	{
		//����ָ��ıȽϣ����ûص����������û�
		if (myCompare(pCurrent->data, data))
		{
			pPrev->next = pCurrent->next;
			free(pCurrent);
			pCurrent = NULL;

			mylist->m_size--;
			break;
		}
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}
	
}

//�������
void clear_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}

	struct LList* mylist = list;
	
	struct LinkNode* pCurrent = mylist->pHeader.next;
	for (int i = 0; i < mylist->m_size; i++)
	{
		struct LinkNode* pNext = pCurrent->next;

		free(pCurrent);
		pCurrent = pNext;
	}
	mylist->pHeader.next = NULL;
	mylist->m_size = 0;
}

//����������
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}
	struct LList* mylist = list;
	return mylist->m_size;
}

//��������
void destory_Linklist(LinkList list)
{
	if (list == NULL)
	{
		return ;
	}
	clear_LinkList(list);

	free(list);

	list = NULL;

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

int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
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
	printf("������:%d\n", size_LinkList(mylist));

	//��������
	//С�� С�� С�� С�� Сһ С��
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, -1, &p3);
	insert_LinkList(mylist, 0, &p4);
	insert_LinkList(mylist, 1, &p5);
	insert_LinkList(mylist, 0, &p6);

	printf("������:%d\n", size_LinkList(mylist));



	//����
	foreach_LinkList(mylist, myPrintPerson);

	//����ɾ��
	removeByPos_LinkList(mylist, 4);
	printf("-----------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//��ֵɾ��
	struct Person p = { "С��",18 };
	removeByValue_LinkList(mylist, &p, myComparePerson);
	printf("-----------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//�������
	clear_LinkList(mylist);

	//����������
	printf("������:%d", size_LinkList(mylist));

	//���ٵ�����
	destory_Linklist(mylist);
	mylist = NULL;

}

int main()
{
	test01();
	
	return EXIT_SUCCESS;
}


