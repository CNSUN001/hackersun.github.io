#include "myArray.h"


	MyArray::MyArray()//Ĭ�Ϲ���
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
		this->m_Capacity = 100;
		this->m_Size = 0;    
		this->pAddress = new int[this->m_Capacity];
	}

	MyArray::MyArray(int capacity)
	{
		cout << "�вι��캯������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new int[this->m_Capacity];
	}

	MyArray::MyArray(const MyArray& arr)
	{
		cout << "�������캯������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;����Ӧ��ʹ�����
		this->pAddress = new int[arr.m_Size];
		memcpy(this->pAddress, arr.pAddress, arr.m_Size *4);
		//for (int i = 0; i < m_Size; i++)
		////{
		//	this->pAddress[i] = arr.pAddress[i];
		//}
	}

	//β�巨
	void MyArray::pushBack(int val)
	{
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//����λ����������
	void MyArray::setData(int pos, int val)
	{
		this->pAddress[pos] = val;
	}

	//����λ�û�ȡ����
	int MyArray::getData(int pos)
	{
		return this->pAddress[pos];
	}

	//��ȡ��������
	int MyArray::getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ�����С
	int MyArray::getSize()
	{
		return this->m_Size;
	}

	//����
	MyArray::~MyArray()
	{
		cout << "������������" << endl;
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	
	}

	int& MyArray::operator[](int index)
	{
		return this->pAddress[index]; //*(this->pAddress+index)
	}

