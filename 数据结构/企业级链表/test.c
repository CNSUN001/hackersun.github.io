#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��ҵ�������ǽ��������ѡ��Ȩ���������û�������������������Ҫ�Ŀ��ٵ��ڴ�ռ�

//�ڵ�ṹ��
struct LinkNode
{
	struct LinkNode* next;
};

struct LList
{
	struct LinkNode pHeader;
	int m_size;
};

typedef void* LinkList;

//��ʼ������
LinkList init_Linklist()
{
	struct LList* myList = malloc(sizeof(struct LList));

	if (myList == NULL)
	{
		return NULL;
	}

	myList->pHeader.next = NULL;
	myList->m_size = 0;

	return myList;
}

//��ҵ�����˼·
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
	struct LList* mylist = list;
	if (pos < 0 || pos > mylist->m_size - 1)
	{
		//��Чλ��ֱ��β��
		pos = mylist->m_size;
	}
	//�û�ǰ�ĸ��ֽڣ���������ʹ��
	struct LinkNode* myNode = data;

	//�Ҳ���ڵ��ǰ���ڵ�
	struct LinkNode* pCurrent =&mylist->pHeader;
	for (int i = 0; i < pos; i++)
	{
		//pCurrent��ǰ���ڵ��λ��
		pCurrent = pCurrent->next;
	}

//����ָ��ָ��
myNode->next = pCurrent->next;
pCurrent->next = myNode;

//����������
mylist->m_size++;
}

//��������
void foreach_LinkList(LinkList list, void(*myForeach)(void*))
{
	if (list == NULL)
	{
		return;
	}
	struct LList* mylist = list;

	//��ʵ�����ݵĵ�һ���ڵ�
	struct LinkNode* myNode = mylist->pHeader.next;


	for (int i = 0; i < mylist->m_size; i++)
	{
		myForeach(myNode);
		myNode = myNode->next;
	}
}

//ɾ���ڵ� ��λ��ɾ��
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* mylist = list;

	if (pos<0 || pos >mylist->m_size - 1)
	{
		return;
	}
	struct LinkNode* pCurrent = &mylist->pHeader;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}
	struct LinkNode* pDel = pCurrent->next;
	pCurrent->next = pDel->next;

	//free(pDel); ����free����Ϊ�������û�ȥ����ģ���֪���ǲ��Ƕ��Ͽ��ٵ�

	mylist->m_size--;
}


//ɾ���ڵ� ��ֵɾ��
void removeByValue_LinkList(LinkList list, void* data, int (*compare)(void*, void*))
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* mylist = list;
	struct LinkNode* pPrev = &mylist->pHeader;
	struct LinkNode* pCurrent = pPrev->next;
	int flag = 1;
	for (int i = 0; i < mylist->m_size; i++)
	{
		if (compare(pCurrent, data))
		{
			flag = 0;
			pPrev->next = pCurrent->next;
			pCurrent = NULL;
			mylist->m_size--;
			break;
		}
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}
	if (flag)
	{
		printf("û���ҵ�\n");
	}
	
}

//����
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	list = NULL;
}

//����
struct Person
{
	void* node;//Ԥ���ĸ��ֽ�
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("������%s ���䣺%d\n", p->name, p->age);
}

int myComparePerson(void* data1,void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;
	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}


void test01()
{
	//��ʼ��
	LinkList mylist = init_Linklist();

	//��������
	struct Person p1 = { NULL,"aaa",10 };
	struct Person p2 = { NULL,"bbb",20 };
	struct Person p3 = { NULL,"ccc",30 };
	struct Person p4 = { NULL,"ddd",40 };
	struct Person p5 = { NULL,"eee",50 };

	//����ڵ�
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 0, &p5);

	//��������
	foreach_LinkList(mylist, myPrintPerson);
	//eee bbb ccc aaa ddd 
	
	//ɾ��aaa
	removeByPos_LinkList(mylist, 3);
	printf("---------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//ɾ��eee
	struct Person p = { NULL,"bbb",20 };
	printf("---------------------\n");
	removeByValue_LinkList(mylist, &p, myComparePerson);
	foreach_LinkList(mylist, myPrintPerson);

	//����
	destroy_LinkList(mylist);
	mylist = NULL;
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}