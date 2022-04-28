#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"
//通讯录
//1. 通讯录能够存放1000个人的信息
//每个人的信息：
//名字+年龄+性别+电话+地址
//2. 增加人的信息
//3. 删除指定人的信息
//4. 修改指定人的信息
//5. 查找指定人的信息
//6. 排序通讯录的信息


void menu()
{
	printf("**************************\n");
	printf("*****1.add    2.del*******\n");
	printf("*****3.search 4.modify****\n");
	printf("*****5.sort   6.print*****\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");


}

enum Opion
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con; 
	//初始化通讯录的函数
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("选择错误\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}