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

//初始化数组
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
	array->m_capacity = 0;

	return array;
}

int main()
{
	return EXIT_SUCCESS; 
}