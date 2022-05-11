#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//企业级链表是将数据域的选择权力交还给用户，大大减少了链表所需要的开辟的内存空间

//节点结构体
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

//初始化链表
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

//企业版插入思路
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
		//无效位置直接尾插
		pos = mylist->m_size;
	}
	//用户前四个字节，我们用来使用
	struct LinkNode* myNode = data;

	//找插入节点的前驱节点
	struct LinkNode* pCurrent =&mylist->pHeader;
	for (int i = 0; i < pos; i++)
	{
		//pCurrent是前驱节点的位置
		pCurrent = pCurrent->next;
	}

//更改指针指向
myNode->next = pCurrent->next;
pCurrent->next = myNode;

//更新链表长度
mylist->m_size++;
}

//遍历链表
void foreach_LinkList(LinkList list, void(*myForeach)(void*))
{
	if (list == NULL)
	{
		return;
	}
	struct LList* mylist = list;

	//真实有数据的第一个节点
	struct LinkNode* myNode = mylist->pHeader.next;


	for (int i = 0; i < mylist->m_size; i++)
	{
		myForeach(myNode);
		myNode = myNode->next;
	}
}

//删除节点 按位置删除
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

	//free(pDel); 不能free，因为数据是用户去管理的，不知道是不是堆上开辟的

	mylist->m_size--;
}


//删除节点 按值删除
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
		printf("没有找到\n");
	}
	
}

//销毁
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	list = NULL;
}

//测试
struct Person
{
	void* node;//预留四个字节
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("姓名：%s 年龄：%d\n", p->name, p->age);
}

int myComparePerson(void* data1,void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;
	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}


void test01()
{
	//初始化
	LinkList mylist = init_Linklist();

	//创建数据
	struct Person p1 = { NULL,"aaa",10 };
	struct Person p2 = { NULL,"bbb",20 };
	struct Person p3 = { NULL,"ccc",30 };
	struct Person p4 = { NULL,"ddd",40 };
	struct Person p5 = { NULL,"eee",50 };

	//插入节点
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 0, &p5);

	//遍历链表
	foreach_LinkList(mylist, myPrintPerson);
	//eee bbb ccc aaa ddd 
	
	//删除aaa
	removeByPos_LinkList(mylist, 3);
	printf("---------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//删除eee
	struct Person p = { NULL,"bbb",20 };
	printf("---------------------\n");
	removeByValue_LinkList(mylist, &p, myComparePerson);
	foreach_LinkList(mylist, myPrintPerson);

	//销毁
	destroy_LinkList(mylist);
	mylist = NULL;
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}