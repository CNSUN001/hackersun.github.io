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
		int newCapacity = array->m_capacity * 2;
		//扩容
		void** newSpace =(void**) realloc(array->pAddr, sizeof (void*)*newCapacity);
		if (newSpace != NULL)
		{
			array->pAddr = newSpace;
			array->m_capacity = newCapacity;
			printf("增容成功\n");
		}
		else
		{
			perror("insert_array");
		}
		//插入新的元素

		//用malloc方法
		//1 计算新空间大小
		//int newCapacity = array->m_capacity * 2;

		////2 创建新空间
		//void** newSpace = malloc(sizeof(void*) * newCapacity);

		//if (newSpace == NULL)
		//{
		//	return;
		//}

		////3 将原有数据拷贝
		//memcpy(newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		////4 释放原有内存空间
		//free(array->pAddr);

		////5 更新空间指向
		//array->pAddr = newSpace;

		////6 更新容量
		//array->m_capacity = newCapacity;

	}
		int i = 0;
		for (i = array->m_size - 1; i >= pos; i--)
		{
			//向后移动
			array->pAddr[i+1] = array->pAddr[i];
		}
		//插入指定位置
		array->pAddr[pos] = data;

		array->m_size++;
	
}

//遍历数组
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

//测试
struct Person
{
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("姓名： %s 年龄：%d\n", p->name, p->age);

}


int main()
{
	//初始化动态数组
	DynamicArray* array = init_array(5); 

	//准备数据
	struct Person p1 = { "小一",18 };
	struct Person p2 = { "小二",18 };
	struct Person p3 = { "小三",18 };
	struct Person p4 = { "小四",18 };
	struct Person p5 = { "小五",18 };
	struct Person p6 = { "小六",18 };

	printf("插入数据前： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);

	//插入数据
	insert_array(array, 0, &p1);
	insert_array(array, 0, &p2);
	insert_array(array, 1, &p3);
	insert_array(array, 0, &p4);
	insert_array(array, -1, &p5);
	insert_array(array, 2, &p6);

	printf("插入数据后： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);

	// 小四 小二 小六 小三 小一 小五

	//遍历数据
	foreach_DynamicArray(array, myPrintPerson);
	

	system("pause"); 
	return EXIT_SUCCESS; 
}