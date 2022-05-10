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

//��ʼ������
DynamicArray* init_array(int capacity);


//ɾ�����飬 ��λ��ɾ��
void romoveByPos_DynamicArray(DynamicArray* array, int pos);

void  romoveValue_DynamicArray(DynamicArray* array, void* data, int(*myCompare)(void*, void*));

//��������
void destroy_DynamicArray(DynamicArray* array);


//��������
void foreach_DynamicArray(DynamicArray* array, void(*myPrint)(void*));
