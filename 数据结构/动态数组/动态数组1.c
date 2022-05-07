#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DynamicArray
{
	void** pAddr;
	int m_capacity;
	int m_size;

}DynamicArray;

//��ʼ������
DynamicArray* init_array(int capacity)
{
	if (capacity == 0)
	{
		return NULL;
	}
	DynamicArray* array = (DynamicArray*)malloc(sizeof(DynamicArray)); 
	if (array == 0)
	{
		return NULL;
	}
	array->pAddr =(void**) malloc(sizeof(void*) * capacity);
	array->m_size = 0;
	array->m_capacity = capacity;

	return array;
}

//����Ԫ��
void insert_array(DynamicArray* array, int pos, void* data)
{
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	//�����λ�ô������е�size
	if (pos > array->m_size)
	{
		pos = array->m_size;
	}
	//��Чλ��  β��
	if (pos < 0 || pos > array->m_size)
	{
		pos = array->m_size;
	}
	//����ڴ治������
	if (array->m_size == array->m_capacity)
	{
		//��realloc����
		//�¿ռ��С
		int newCapacity = array->m_capacity * 2;
		//����
		void** newSpace =(void**) realloc(array->pAddr, sizeof (void*)*newCapacity);
		if (newSpace != NULL)
		{
			array->pAddr = newSpace;
			array->m_capacity = newCapacity;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("insert_array");
		}
		//�����µ�Ԫ��

		//��malloc����
		//1 �����¿ռ��С
		//int newCapacity = array->m_capacity * 2;

		////2 �����¿ռ�
		//void** newSpace = malloc(sizeof(void*) * newCapacity);

		//if (newSpace == NULL)
		//{
		//	return;
		//}

		////3 ��ԭ�����ݿ���
		//memcpy(newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		////4 �ͷ�ԭ���ڴ�ռ�
		//free(array->pAddr);

		////5 ���¿ռ�ָ��
		//array->pAddr = newSpace;

		////6 ��������
		//array->m_capacity = newCapacity;

	}
		int i = 0;
		for (i = array->m_size - 1; i >= pos; i--)
		{
			//����ƶ�
			array->pAddr[i+1] = array->pAddr[i];
		}
		//����ָ��λ��
		array->pAddr[pos] = data;

		array->m_size++;
	
}

//��������
void foreach_DynamicArray(DynamicArray* array,void(*myPrint)(void*))
{
	if (array == NULL)
	{
		return;
	}
	if (myPrint == NULL)
	{
		return;
	}
	for (int i = 0; i < array->m_size; i++)
	{
		myPrint(array->pAddr[i]);
	}
}

//����
struct Person
{
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("������ %s ���䣺%d\n", p->name, p->age);

}


int main()
{
	//��ʼ����̬����
	DynamicArray* array = init_array(5); 

	//׼������
	struct Person p1 = { "Сһ",18 };
	struct Person p2 = { "С��",18 };
	struct Person p3 = { "С��",18 };
	struct Person p4 = { "С��",18 };
	struct Person p5 = { "С��",18 };
	struct Person p6 = { "С��",18 };

	printf("��������ǰ�� ������%d  ��С��%d\n", array->m_capacity, array->m_size);

	//��������
	insert_array(array, 0, &p1);
	insert_array(array, 0, &p2);
	insert_array(array, 1, &p3);
	insert_array(array, 0, &p4);
	insert_array(array, -1, &p5);
	insert_array(array, 2, &p6);

	printf("�������ݺ� ������%d  ��С��%d\n", array->m_capacity, array->m_size);

	// С�� С�� С�� С�� Сһ С��

	//��������
	foreach_DynamicArray(array, myPrintPerson);
	

	system("pause"); 
	return EXIT_SUCCESS; 
}