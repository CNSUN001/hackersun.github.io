#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000
//类型定义
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	 PeoInfo data[MAX];//存放添加进来人的信息
	 int sz;//记录当前通讯录中有效信息个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//打印联系人信息
void PrintContact(const Contact* pc);

//联系人排序
void SortContact(Contact* pc);


//查找指定联系人
void SearchContact(const Contact* pc);

//修改指定联系人的参数
void ModifyContact(Contact* pc);


//局部变量 函数形参 在栈区开辟
//动态内存 在堆区开辟
//全局变量 静态变量 在静态区


