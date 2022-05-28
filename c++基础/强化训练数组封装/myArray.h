#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


class MyArray
{
public:
	MyArray();//Ĭ�Ϲ��죬

	MyArray(int capacity);

	MyArray(const MyArray& arr);

	//β�巨
	void pushBack(int val);

	//����λ����������
	void setData(int pos, int val);

	//����λ�û�ȡ����
	int getData(int pos);

	//��ȡ��������
	int getCapacity();

	//��ȡ�����С
	int getSize();

	~MyArray();

private:
	int m_Capacity;//��������
	int m_Size;//�����С
	int* pAddress;//��ʵ�ڶ������ٵ������ָ��
};

