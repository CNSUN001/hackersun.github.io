#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "dynamicArray.h"



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

//插入元素
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
	//输入的位置大于现有的size
	if (pos > array->m_size)
	{
		pos = array->m_size;
	}
	//无效位置  尾插
	if (pos < 0 || pos > array->m_size)
	{
		pos = array->m_size;
	}
	//如果内存不够扩容
	if (array->m_size == array->m_capacity)
	{
		//用realloc方法
		//新空间大小
		//int newCapacity = array->m_capacity * 2;
		////扩容
		//void** newSpace = (void**)realloc(array->pAddr, sizeof(void*) * newCapacity);
		//if (newSpace != NULL)
		//{
		//	array->pAddr = newSpace;
		//	array->m_capacity = newCapacity;
		//	printf("增容成功\n");
		//}
		//else
		//{
		//	perror("insert_array");
		//	return;
		//}
		//插入新的元素

		//用malloc方法
		//1 计算新空间大小
		int newCapacity = array->m_capacity * 2;

		//2 创建新空间
		void** newSpace = malloc(sizeof(void*) * newCapacity);

		if (newSpace == NULL)
		{
			return;
		}

		//3 将原有数据拷贝
		memcpy(newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		//4 释放原有内存空间
		free(array->pAddr);

		//5 更新空间指向
		array->pAddr = newSpace;

		//6 更新容量
		array->m_capacity = newCapacity;

	}

	for (int i = array->m_size - 1; i >= pos; i--)
	{
		//向后移动
		array->pAddr[i + 1] = array->pAddr[i];
	}
	//插入指定位置
	array->pAddr[pos] = data;

	array->m_size++;

}




//删除数组， 按位置删除
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
			//找到要删除的数据，i就是要删除的具体位置
			romoveByPos_DynamicArray(array, i);
			break;
		}
}

//销毁数组
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

//遍历数组
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
