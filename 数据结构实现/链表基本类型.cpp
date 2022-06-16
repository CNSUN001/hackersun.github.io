
#include <stdlib.h>
//������Ķ���
typedef struct LNode //���嵥����������
{
	int data;			//������
	struct Lnode* next;		//ָ����
} LNode, * LinkList;


//1 ͷ�巨����������
LinkList List_HeadInsert(LinkList& L)
{
	LNode* s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));//����ͷ�ڵ�
	L->next = NULL;
	scnaf("%d", &x);
	while (x != 9999) //��xΪ9999ʱ���˳�
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s->next;
		scanf("%d", &x);
	}
	return L;
}


//2 β�巨����������
LinkList List_HeadInsert(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));//����ͷ�ڵ�
	LNode* s, *r = L;  //r����ά��β�ڵ�
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

//3 ����Ų��ҽڵ�ֵ
//˳��nextָ��������
LNode* GetElem(Linklist L, int i)
{
	int j = 1;
	LNode* p = L->next;//����ͷ�ڵ�
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

//4 ��ֵ����
//LNode* LocateGetElem(Linklist L, int value)
//{
//	LNode* p = L->next;//����ͷ�ڵ�
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
	LNode* p = L->next;//����ͷ�ڵ�
	while (p != NULL && p->data!=e)
			p = p->next;
	return p;
}

//5 ����ڵ����
void InsertFrond(Linklist L, int pos, int x)
{
	//�ҵ�ǰ���ڵ�λ��Ȼ�����
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
//��չ ��ĳһ�ڵ�����   ���뵽p�ĺ���Ȼ�󽻻���������
void InsertBehand(Linklist L, int pos, int x)
{
	LNode* p = GetElem(L, pos - 1);
	LNode* s = (LinkList)malloc(sizeof(LNode));
	s->next = p->next;
	p->next = s;
	//��������
	int temp = p->data;
	p->data = x;
	s->data = temp;
}

//6 ɾ���ڵ�
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
//��չɾ���ڵ�
//ɾ���ڵ�*p�Ĳ�������ɾ��*p�ĺ�̽ڵ������ʵ�֣�ʵ�ʾ��ǽ����̽ڵ��ֵ����������Ȼ��ɾ�����
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
	p->data = q->data; //�ͺ�̽ڵ㽻����������
	p->next = q->next; 
	free(q);
}




//˫������
typedef struct DNode
{
	int data;//������
	struct DNode* prior, * next;  //ǰ�����ͺ��ָ��
 }DNode,*DLinkList;


 //��ʼ��˫����
bool InitDLinklist(DLinkList &L)
{
	 L = (DNode*)malloc(sizeof(DNode))
		if (L == NULL)
			return false;
	 L->prior = NULL;
	 L->next = NULL;
	 return ture;
}

//1 ˫������� p�ڵ�֮�����s
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

//p�ڵ�֮ǰ����s
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


//2 ˫�����ɾ��  ɾ��p�ĺ�̽ڵ�q
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


//ѭ��������
//1 ��ʼ��һ��ѭ��������
bool InitList(LinkList& L)
{
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = L;
	return true;
}

//2 �п�
bool Empty(LinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}

//3 �жϽ��p�Ƿ�ΪΪβ�ڵ�
bool isTail(LinkList L, LNode* p)
{
	if (p->next)
		return ture;
	else
		returnf false;
}


//ѭ��˫����
//1 ��ʼ��ѭ��˫���� 
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

//2  �п�
bool Empty(DLinkList L)
{
	if (L->next == L)
		return true;
	else
		return false;
}

//3 �жϽ��p�Ƿ�ΪΪβ�ڵ�
bool isTail(LinkList L, LNode* p)
{
	if (p->next == L)
		return true;
	else
		return false;
}


//��̬����ṹ����

#define MaxSize 10 //��̬�������󳤶�
typedef struct	//��̬����ṹ��Ķ���
{
	int data;  //�洢����Ԫ��
	int next;  //��һ��Ԫ�ص��±�
} SLinkList[MaxSize];


//�ȼ�
#define MaxSize 10
struct Node
{
	int data;
	int next;
};
typedef struct Node SLinkList[MaxSize];