#include "myString.h"

//�������������
ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString ;
	return cout;
}

//�������������
istream& operator>>(istream& cin, MyString& str)
{
	//�����ԭ��������
	if (str.pString)
	{
		delete[]str.pString;
		str.pString = NULL;
	}
	char buf[1024];//������ʱ���� ��¼�û���������
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);
	return cin;
}

MyString::MyString(char* str)
{
	cout << "�вι������" << endl;
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
	//���㿪���ڴ��С
	int newSize = this->m_Size + strlen(str) + 1;

	char* temp = new char[newSize];
	memset(temp, 0, newSize);

	strcat(temp, this->pString); //׷�ӵ��ַ�����β
	strcat(temp, str);

	MyString newString = temp;

	delete[]temp;
	return newString;
}

MyString MyString::operator+(const MyString& str)
{
	//���㿪���ڴ��С
	int newSize = this->m_Size + strlen(str.pString) + 1;

	char* temp = new char[newSize];
	memset(temp, 0, newSize);

	strcat(temp, this->pString); //׷�ӵ��ַ�����β
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
	cout << "��������" << endl;

	if (this->pString != NULL)
	{
		delete[]this->pString;
		this->pString = NULL;
	}
}
