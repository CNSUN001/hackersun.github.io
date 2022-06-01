#include "myString.h"

//重载左移运算符
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString ;
	return cout;
}

//重载右移运算符
istream& operator>>(istream& cin, MyString& str)
{
	//先清空原来的数据
	if (str.pString)
	{
		delete[]str.pString;
		str.pString = NULL;
	}
	char buf[1024];//开辟临时数组 记录用户输入内容
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);
	return cin;
}

MyString::MyString(char* str)
{
	cout << "有参构造调用" << endl;
	this->pString = new char[strlen(str) + 1];
	memcpy(this->pString, str, strlen(str)+1);
	this->m_Size = strlen(str);
}

MyString::MyString(const MyString& str)
{
	this->m_Size = str.m_Size;
	this->pString = new char[strlen(str.pString) + 1];
	memcpy(this->pString, str.pString, strlen(str.pString)+1);
}

MyString& MyString::operator=(const MyString& str)
{
	if (this->pString)
	{
		delete[]this->pString;
		pString = NULL;
	}
	this->pString = new char[strlen(str.pString) + 1];
	memcpy(this->pString, str.pString, strlen(str.pString) + 1);
	this->m_Size = strlen(str.pString);
	return *this;

}

MyString& MyString::operator=(const char* str)
{
	if (this->pString)
	{
		delete[]this->pString;
		pString = NULL;
	}
	this->pString = new char[strlen(str) + 1];
	memcpy(this->pString, str, strlen(str) + 1);
	this->m_Size = strlen(str);
	return *this;
}

char& MyString::operator[](int index)
{
	return this->pString[index];
}

MyString MyString::operator+(const char* str)
{
	//计算开辟内存大小
	int newSize = this->m_Size + strlen(str) + 1;

	char* temp = new char[newSize];
	memset(temp, 0, newSize);

	strcat(temp, this->pString); //追加到字符串结尾
	strcat(temp, str);

	MyString newString = temp;

	delete[]temp;
	return newString;
}

MyString MyString::operator+(const MyString& str)
{
	//计算开辟内存大小
	int newSize = this->m_Size + strlen(str.pString) + 1;

	char* temp = new char[newSize];
	memset(temp, 0, newSize);

	strcat(temp, this->pString); //追加到字符串结尾
	strcat(temp, str.pString);

	MyString newString = temp;

	delete[]temp;
	return newString;
}

bool MyString::operator==(const char* str)
{
	if (strcmp(this->pString, str) == 0)
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const MyString& str)
{
	if (strcmp(this->pString, str.pString) == 0)
	{
		return true;
	}
	return false;
}

MyString::~MyString()
{
	cout << "析构调用" << endl;

	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}
}
