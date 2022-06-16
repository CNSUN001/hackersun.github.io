
#include <stdlib.h>
//单链表的定义
typedef struct LNode //定义单链表结点类型
{
	int data;			//数据域
	struct Lnode* next;		//指针域
} LNode, * LinkList;


//1 头插法建立单链表
LinkList List_HeadInsert(LinkList& L)
{
	LNode* s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));//创建头节点
	L->next = NULL;
	scnaf("%d", &x);
	while (x != 9999) //当x为9999时间退出
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s->next;
		scanf("%d", &x);
	}
	return L;
}


//2 尾插法建立单链表
LinkList List_HeadInsert(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//创建头节点
	LNode* s, *r = L;  //r用来维护尾节点
	scnaf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}

//3 按序号查找节点值
//顺着next指针往下找
LNode* GetElem(Linklist L, int i)
{
	int j = 1;
	LNode* p = L->next;//设置头节点
	if (i == 0)
	{
		return L;
	}
	if (i < 0)
	{
		return NULL;
	}
	for (; j < i; j++)
	{
		p = p->next;
	}
	return p;
}

//4 按值查找
//LNode* LocateGetElem(Linklist L, int value)
//{
//	LNode* p = L->next;//设置头节点
//	while (p != NULL )
//	{
//		if (p->data == value)
//		{
//			return p;
//			break;
//		}
//		else
//			p = p->next;
//	}
//	return NULL;
//}

LNode* LocateGetElem(Linklist L, int value)
{
	LNode* p = L->next;//设置头节点
	while (p != NULL && p->data!=e)
			p = p->next;
	return p;
}

//5 插入节点操作
void InsertFrond(Linklist L, int pos, int x)
{
	//找到前驱节点位置然后插入
	if (pos < 0)
	{
		return;
	}
	LNode* p = GetElem(L, pos - 1);
	LNode* s = (LinkList)malloc(sizeof(LNode));
	s->data = x;
	s->next = p->next;
	p->next = s;
}
//扩展 对某一节点后插入   插入到p的后面然后交换两者数据
void InsertBehand(Linklist L, int pos, int x)
{
	LNode* p = GetElem(L, pos - 1);
	LNode* s = (LinkList)malloc(sizeof(LNode));
	s->next = p->next;
	p->next = s;
	//交换数据
	int temp = p->data;
	p->data = x;
	s->data = temp;
}

//6 删除节点
bool DeleteNode(Linklist L, int pos)
{
	if (pos < 0)
	{
		return false;
	}
	LNode* p = GetElem(L, pos - 1);
	if (p == NULL)
	{
		return false;
	}
	LNode* q = p->next;
	p->next = q->next;
	free(q);
}
//扩展删除节点
//删除节点*p的操作可用删除*p的后继节点操作来实现，实质就是将其后继节点的值赋予其自身，然后删除后继
bool DeleteNode2(Linklist L, int pos)
{
	if (pos < 0)
	{
		return false;
	}
	LNode* p = GetElem(L, pos);
	if (p == NULL)
	{
		return false;
	}
	LNode* q = p->next;
	p->data = q->data; //和后继节点交换数据区域
	p->next = q->next; 
	free(q);
}




//双链表定义
typedef struct DNode
{
	int data;//数据域
	struct DNode* prior, * next;  //前驱动和后继指针
 }DNode,*DLinkList;


 //初始化双链表
bool InitDLinklist(DLinkList &L)
{
	 L = (DNode*)malloc(sizeof(DNode))
		if (L == NULL)
			return false;
	 L->prior = NULL;
	 L->next = NULL;
	 return ture;
}

//1 双链表插入 p节点之后插入s
bool InsertNextDode(DNode* p, DNode* s)
{
	if (p == NULL || s == NULL)
	{
		return false;
	}
	s->next = p->next;
	p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}

//p节点之前插入s
bool InsertNextDode(DNode* p, DNode* s)
{
	if (p == NULL || s == NULL)
	{
		return false;
	}
	s->next = p;
	s->prior = p->prior;
	p->prior = s;
	p->prior->next = s;

	return true;
}


//2 双链表的删除  删除p的后继节点q
bool DeleteDode(DNode* p)
{
	if (p == NULL)
	{
		return false;
	}
	DNode* q = p->next; 
	if (q == NULL)
	{
		return false;
	}
	p->next = q->next;
	if (q->next != NULL)
	q->next->prior = p;
	free(q);
	return true;
}


//循环单链表
//1 初始化一个循环单链表
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = L;
	return true;
}

//2 判空
bool Empty(LinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}

//3 判断结点p是否为为尾节点
bool isTail(LinkList L, LNode* p)
{
	if (p->next)
		return ture;
	else
		returnf false;
}


//循环双链表
//1 初始化循环双链表 
bool InitDLinkList(DLinkList& L)
{
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
	{
		return false;
	}
	L->next = L;
	L->prior = L;
}

//2  判空
bool Empty(DLinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}

//3 判断结点p是否为为尾节点
bool isTail(LinkList L, LNode* p)
{
	if (p->next == L)
		return true;
	else
		return false;
}


//静态链表结构类型

#define MaxSize 10 //静态链表的最大长度
typedef struct	//静态链表结构体的定义
{
	int data;  //存储数据元素
	int next;  //下一个元素的下表
} SLinkList[MaxSize];


//等价
#define MaxSize 10
struct Node
{
	int data;
	int next;
};
typedef struct Node SLinkList[MaxSize];