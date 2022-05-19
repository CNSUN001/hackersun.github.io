#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct dynamicArray
{
	void** pAddr;

	int m_Capacity;

	int m_Size;
};

struct dynamicArray* init_dynamicArray(int capacity)
{
	struct dynamicArray* array = malloc(sizeof(struct dynamicArray));

	if (array == NULL)
	{
		return NULL;
	}

	array->m_Capacity = capacity;
	array->m_Size = 0;
	array->pAddr = malloc(sizeof(void*) * capacity);

	if (array->pAddr == NULL)
	{
		return NULL;
	}

	return array;
}

void insert_dynamicArray(struct dynamicArray* arr, int pos, void* data)
{
	if (arr == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	if (pos < 0 || pos > arr->m_Size)
	{
		pos = arr->m_Size;
	}

	if (arr->m_Size >= arr->m_Capacity)
	{
		int newCapacity = arr->m_Capacity * 2;

		void** newSpace = malloc(sizeof(void*) * newCapacity);

		memcpy(newSpace, arr->pAddr, sizeof(void*) * arr->m_Capacity);

		free(arr->pAddr);

		arr->pAddr = newSpace;

		arr->m_Capacity = newCapacity;
	}

	for (int i = arr->m_Size - 1; i >= pos; i--)
	{
		arr->pAddr[i + 1] = arr->pAddr[i];
	}
	arr->pAddr[pos] = data;
	arr->m_Size++;
}
