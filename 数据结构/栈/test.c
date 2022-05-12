#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//数组的首地址，做栈底 ，是因为栈顶需要频繁做入栈和出栈的操作，对尾部做插入删除效率高

//
//实现接口
// 初始化 入栈  出栈  返回栈顶元素 栈大小  判断栈是否为空 销毁栈

#define MAX 1024

struct SStack
{
	void* data[MAX];//栈的数组

	int m_Size;//栈大小
};

typedef void* SeqStack;

//初始化栈

SeqStack init_SeqStack()
{
	struct SStack* myStack = malloc(sizeof(struct SStack));
	if (myStack == NULL)
	{
		return NULL;
	}
	memset(myStack->data, 0, sizeof(void*)*MAX);

	myStack->m_Size = 0;

	return myStack;
}

//入栈
void push_SeqStack()
{

}

//出栈
void pop_SeqStack()
{

}

//返回栈顶
void* top_SeqStack()
{

}

//返回栈的大小
int size_SeqStack()
{

}

//判断栈是否为空
int isEmpty_SeqStack()
{

}

//销毁栈
void destroy_SeqStack()
{

}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}



