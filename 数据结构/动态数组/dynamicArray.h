#pragma once
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
DynamicArray* init_array(int capacity);


//删除数组， 按位置删除
void romoveByPos_DynamicArray(DynamicArray* array, int pos);

void  romoveValue_DynamicArray(DynamicArray* array, void* data, int(*myCompare)(void*, void*));

//销毁数组
void destroy_DynamicArray(DynamicArray* array);


//遍历数组
void foreach_DynamicArray(DynamicArray* array, void(*myPrint)(void*));
