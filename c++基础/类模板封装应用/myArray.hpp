#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template <class T>
class myArray
{
public:
	//�в�
	myArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	myArray(const myArray& arr)
	{
		this->pAddress = new T[arr.m_Capacity];
		//memcpy(this->pAddress, arr.m_Capacity, sizeof(T) * arr.m_Capacity);
		//memcpy������������
		//memcpy��C++�ĽǶ�ȥ���ӣ��ò�������һ���򵥵�ǳ�����������������ָ����п���ֻ�ǽ����Ļ�ȡ����ָ������ݵ�ַ��������е�ָ��ָ��������޷�����memcpyֱ�ӿ�����
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

	for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//����һ����ֵ����=
	myArray& operator= (const myArray& arr)
	{
		if (this->pAddress)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
		this->pAddress = new T[arr.m_Capacity];
		cout << sizeof(T) << endl;
		//memcpy(this->pAddress, arr.pAddress, sizeof(T)* arr.m_Capacity);
		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;
		return *this;
	}

	//����һ��[]
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	//β��
	void pushBack(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ�����С
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~myArray()
	{
		if (this->pAddress)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//ָ�������ʵָ��
	int m_Capacity;//����
	int m_Size;
};

