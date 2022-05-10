#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "dynamicArray.h"



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
	array->pAddr = (void**)malloc(sizeof(void*) * capacity);
	if (array->pAddr == NULL)
	{
		perror("init_array");
		return NULL;
	}
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
		//int newCapacity = array->m_capacity * 2;
		////����
		//void** newSpace = (void**)realloc(array->pAddr, sizeof(void*) * newCapacity);
		//if (newSpace != NULL)
		//{
		//	array->pAddr = newSpace;
		//	array->m_capacity = newCapacity;
		//	printf("���ݳɹ�\n");
		//}
		//else
		//{
		//	perror("insert_array");
		//	return;
		//}
		//�����µ�Ԫ��

		//��malloc����
		//1 �����¿ռ��С
		int newCapacity = array->m_capacity * 2;

		//2 �����¿ռ�
		void** newSpace = malloc(sizeof(void*) * newCapacity);

		if (newSpace == NULL)
		{
			return;
		}

		//3 ��ԭ�����ݿ���
		memcpy(newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		//4 �ͷ�ԭ���ڴ�ռ�
		free(array->pAddr);

		//5 ���¿ռ�ָ��
		array->pAddr = newSpace;

		//6 ��������
		array->m_capacity = newCapacity;

	}

	for (int i = array->m_size - 1; i >= pos; i--)
	{
		//����ƶ�
		array->pAddr[i + 1] = array->pAddr[i];
	}
	//����ָ��λ��
	array->pAddr[pos] = data;

	array->m_size++;

}




//ɾ�����飬 ��λ��ɾ��
void romoveByPos_DynamicArray(DynamicArray* array, int pos)
{
	if (array == NULL)
	{
		return;
	}
	if (pos< 0 || pos> array->m_size - 1)
	{
		return;
	}
	for (int i = pos; i < array->m_size - 1; i++)
	{
		array->pAddr[i] = array->pAddr[i + 1];
	}
	array->m_size--;
}

void  romoveValue_DynamicArray(DynamicArray* array, void* data, int(*myCompare)(void*, void*))
{
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	for (int i = 0; i < array->m_size; i++)
		if (myCompare(array->pAddr[i], data))
		{
			//�ҵ�Ҫɾ�������ݣ�i����Ҫɾ���ľ���λ��
			romoveByPos_DynamicArray(array, i);
			break;
		}
}

//��������
void destroy_DynamicArray(DynamicArray* array)
{

	if (array != NULL)
	{
		if (array->pAddr != NULL)
		{
			free(array->pAddr);
			array->pAddr = NULL;
		}
		free(array);
		array = NULL;
	}
	else 
	{
		return;
	}
	
}

//��������
void foreach_DynamicArray(DynamicArray* array, void(*myPrint)(void*))
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
