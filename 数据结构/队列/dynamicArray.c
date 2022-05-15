#include "dynamicArray.h"
#pragma warning(disable:6386)
//初始化数组
struct dynamicArray * init_DynamicArray(int capacity)
{
	if (capacity <= 0)
	{
		return NULL;
	}

	//给数组分配空间

	struct dynamicArray * array = malloc(sizeof(struct dynamicArray));
	if (array == NULL)
	{
		return NULL;
	}

	//给数组初始化
	array->pAddr = malloc(sizeof(void *)* capacity);
	array->m_capacity = capacity;
	array->m_size = 0;

	return array;
}

//插入数组
void insert_DynamicArray(struct dynamicArray * array, int pos, void * data)
{
	if (array == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	//无效位置  尾插
	if (pos < 0 || pos > array->m_size)
	{
		pos = array->m_size;
	}

	//判断是否满了，如果满动态扩展
	if (array->m_size == array->m_capacity)
	{
		//1、计算新空间大小
		int newCapacity = array->m_capacity * 2;

		//2、创建新空间
		void ** newSpace = malloc(sizeof(void *)* newCapacity);

		if (newSpace == NULL)
		{
			return;
		}

		//3、将原有数据拷贝到新空间下
		memcpy(newSpace, array->pAddr, sizeof(void *)* array->m_capacity);

		//4、释放原有内存空间
		free(array->pAddr);

		//5、更新新空间指向
		array->pAddr = newSpace;

		//6、更新新容量
		array->m_capacity = newCapacity;
	}

	//插入新元素

	//移动元素 进行插入新元素
	for (int i = array->m_size - 1; i >= pos; i--)
	{
		//数据向后移动
		array->pAddr[i + 1] = array->pAddr[i];
	}

	//将新元素 插入到指定位置上
	array->pAddr[pos] = data;
	//更新大小
	array->m_size++;
}


//遍历数组
void foreach_DynamicArray(struct dynamicArray * array, void(*myPrint)(void*))
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


//删除数组  按位置删除
void removeByPos_DynamicArray(struct dynamicArray * array, int pos)
{
	if (NULL == array)
	{
		return;
	}

	if (pos < 0 || pos > array->m_size - 1)
	{
		return;
	}

	//数据前移
	for (int i = pos; i < array->m_size - 1; i++)
	{
		array->pAddr[i] = array->pAddr[i + 1];
	}

	//更新数组大小
	array->m_size--;

}

//按值删除数据
void removeByValue_DynamicArray(struct dynamicArray * array, void * data, int(*myCompare)(void *, void *))
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
	{
		if (myCompare(array->pAddr[i], data))
		{
			//如果找到要删除的数据，i就是要删除的具体位置
			removeByPos_DynamicArray(array, i);
			break;
		}
	}

}

//销毁数组
void destroy_DynamicArray(struct dynamicArray* array)
{
	if (array == NULL)
	{
		return;
	}

	if (array->pAddr != NULL)
	{
		free(array->pAddr);
		array->pAddr = NULL;
	}


	free(array);
	array = NULL;
}

