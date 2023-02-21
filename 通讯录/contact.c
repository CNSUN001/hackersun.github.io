#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��̬�汾 ��ʼ��
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	//memset(); �ڴ�����
//	memset(pc->data, 0, sizeof(pc->data));//�������
//}

//��̬�汾 ��ʼ��
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}

void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}

//��̬�汾������ϵ��
//void AddContact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("����������:>");
//	scanf("%s",pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}

//��̬�汾������ϵ
void AddContact(Contact* pc)
{
	if (pc->sz == pc ->capacity)
	{
		//����
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��\n");
			return;
		}
	}
	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s",pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}

static int FindByName(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}	
	}
	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME];
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	//1.����Ҫɾ���Ķ���
	//��/û��
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����󲻴���\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];////���һ��Ԫ�ص��±���sz - 1
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void ModifyContact( Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���Ҷ��󲻴���\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
	}
	printf("�޸ĳɹ�\n");
}

void SearchContact(const Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���Ҷ��󲻴���\n");
		return;
	}
	else
		//��ӡ����
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
		pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
	

}

static int compare(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(pc->data)[0], compare);
	//��ӡ����
	PrintContact(pc);
}

void PrintContact(const Contact* pc)
{	
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����","����","�Ա�","�绰","��ַ" );
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}