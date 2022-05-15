#pragma  once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//��̬����ṹ��
struct dynamicArray
{
	void ** pAddr; //ά����ʵ�ڶ��������������ָ��

	int m_capacity;  // ��������

	int m_size;   //�����С
};

//��ʼ������
struct dynamicArray * init_DynamicArray(int capacity);

//��������
void insert_DynamicArray(struct dynamicArray * array, int pos, void * data);


//��������
void foreach_DynamicArray(struct dynamicArray * array, void(*myPrint)(void*));


//ɾ������  ��λ��ɾ��
void removeByPos_DynamicArray(struct dynamicArray * array, int pos);

//��ֵɾ������
void removeByValue_DynamicArray(struct dynamicArray * array, void * data, int(*myCompare)(void *, void *));


//��������
void destroy_DynamicArray(struct dynamicArray* array);


