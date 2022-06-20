#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

template <class T>
class myArray
{
public:
	//有参
	myArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	myArray(const myArray& arr)
	{
		this->pAddress = new T[arr.m_Capacity];
		//memcpy(this->pAddress, arr.m_Capacity, sizeof(T) * arr.m_Capacity);
		//memcpy拷贝类会出问题
		//memcpy在C++的角度去审视，该操作属于一个简单的浅拷贝，非深拷贝；即对指针进行拷贝只是仅仅的获取其中指向的数据地址。因此类中的指针指向的内容无法进行memcpy直接拷贝。
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

	for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载一个赋值操作=
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

	//重载一个[]
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	//尾插
	void pushBack(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构
	~myArray()
	{
		if (this->pAddress)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//指向堆区真实指针
	int m_Capacity;//容量
	int m_Size;
};

