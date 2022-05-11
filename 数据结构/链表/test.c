
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//节点结构体
struct LinkNode
{
	//数据域
	void* data;
	//指针区域
	struct LinkNode* next;
};

//链表结构体
struct LList
{
	//头节点
	struct LinkNode pHeader;

	//链表长度
	int m_size;
};

typedef void* LinkList;

//初始化链表
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

//插入链表
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
	//将list还原成 struct LList 数据类型
	struct LList* myList = list;
	if (pos<0 || pos > myList->m_size)
	{
		//无效位置直接尾插
		pos = myList->m_size;
	}
	//找到插入节点的前驱节点
	struct LinkNode* pCurrent = &myList->pHeader;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}
	//pCurrent 是要插入节点的前驱

	//创建新节点
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	if (newNode == NULL)
	{
		return;
	}
	newNode->data = data;
	newNode->next = NULL;

	//建立新的节点关系
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	//更新链表长度
	myList->m_size++;
}

//遍历链表
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


//删除链表按位置
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
	//找到删除节点的前驱
	struct LinkNode* pCurrent = &mylist->pHeader;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}

	//记录待删除的节点
	struct LinkNode* pDel = pCurrent->next;
	//重新建立关系
	pCurrent->next = pDel->next;
	
	free(pDel);
	pDel = NULL;
	mylist->m_size--;

}

//按值来删除链表
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
	//创建两个辅助指针
	struct LList* mylist = list;
	struct LinkNode* pPrev = &mylist->pHeader;
	struct LinkNode* pCurrent = pPrev->next;
	for (int i = 0; i < mylist->m_size; i++)
	{
		//两个指针的比较，利用回调，交换给用户
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

//清空链表
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

//返回链表长度
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}
	struct LList* mylist = list;
	return mylist->m_size;
}

//销毁链表
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

//测试

struct Person
{
	char name[64];
	int age;
};

//回调函数
void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("姓名：%s  年龄 ：%d\n", p->name, p->age);
}

int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}

void test01()
{
	//准备数据
	struct Person p1 = { "小一",18 };
	struct Person p2 = { "小二",18 };
	struct Person p3 = { "小三",18 };
	struct Person p4 = { "小四",18 };
	struct Person p5 = { "小五",18 };
	struct Person p6 = { "小六",18 };

	//初始化
	LinkList mylist = init_LinkList();
	printf("链表长度:%d\n", size_LinkList(mylist));

	//插入数据
	//小六 小四 小五 小二 小一 小三
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, -1, &p3);
	insert_LinkList(mylist, 0, &p4);
	insert_LinkList(mylist, 1, &p5);
	insert_LinkList(mylist, 0, &p6);

	printf("链表长度:%d\n", size_LinkList(mylist));



	//遍历
	foreach_LinkList(mylist, myPrintPerson);

	//测试删除
	removeByPos_LinkList(mylist, 4);
	printf("-----------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//按值删除
	struct Person p = { "小五",18 };
	removeByValue_LinkList(mylist, &p, myComparePerson);
	printf("-----------------------\n");
	foreach_LinkList(mylist, myPrintPerson);

	//测试清空
	clear_LinkList(mylist);

	//返回链表长度
	printf("链表长度:%d", size_LinkList(mylist));

	//销毁掉链表
	destory_Linklist(mylist);
	mylist = NULL;

}

int main()
{
	test01();
	
	return EXIT_SUCCESS;
}


