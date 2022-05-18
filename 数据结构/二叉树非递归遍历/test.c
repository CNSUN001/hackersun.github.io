#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "seqStack.h"

	//    A    
	//   / \
	//  B   F
	//   \    \
	//    C    G
	//   / \  /
	//  D   E H

//非递归遍历思路
// （每个节点都有个标志 假）
//1 将根节点压入栈中
//2 进入循环：只要栈中元素个数大于0，进行循环操作
//	2.1 弹出栈顶元素
//	2.2 如果这个栈顶元素标志为真，输出这个元素并且执行下一次循环
//	2.3如果栈顶元素标志为假，将节点的标志设为真
//	2.4将该节点的右子树，左字树，跟 压入栈（修改2.4的压栈顺序可以实习不同的遍历）
//	2.5进行下一次循环

struct BinaryNode
{
	//数据域
	char ch;
	//指针域
	struct BinaryNode* lChild;
	struct BinaryNode* rChild;
	//标志
	int flag;
};

void nonRecursion(struct BinaryNode* root)
{
	//初始化栈
	SeqStack myStack = init_SeqStack();

	push_SeqStack(myStack, root);

	while (size_SeqStack(myStack) > 0)
	{
		//获取栈顶元素
		struct BinaryNode* pTop = top_SeqStack(myStack);

		//出栈
		pop_SeqStack(myStack);

		//如果标志为真 直接输出 并且执行下一次循环
		if (pTop->flag == 1)
		{
			printf("%c  ", pTop->ch);
			continue;
		}
		//如果为假，将标志改为真
		pTop->flag = 1;

		//将 右子树 左子树 跟 入栈
		if (pTop->rChild != NULL)
		{
			push_SeqStack(myStack, pTop->rChild);
		}
		if (pTop->lChild != NULL)
		{
			push_SeqStack(myStack, pTop->lChild);
		}
		push_SeqStack(myStack, pTop);
	}
	//销毁栈
	destroy_SeqStack(myStack);
}


void test01()
{
	struct BinaryNode nodeA = { 'A', NULL, NULL,0 };
	struct BinaryNode nodeB = { 'B', NULL, NULL,0 };
	struct BinaryNode nodeC = { 'C', NULL, NULL,0 };
	struct BinaryNode nodeD = { 'D', NULL, NULL,0 };
	struct BinaryNode nodeE = { 'E', NULL, NULL,0 };
	struct BinaryNode nodeF = { 'F', NULL, NULL,0 };
	struct BinaryNode nodeG = { 'G', NULL, NULL,0 };
	struct BinaryNode nodeH = { 'H', NULL, NULL,0 };

	//建立关系
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeF;

	nodeB.rChild = &nodeC;

	nodeC.lChild = &nodeD;
	nodeC.rChild = &nodeE;

	nodeF.rChild = &nodeG;

	nodeG.lChild = &nodeH;

	//非递归遍历
	nonRecursion(&nodeA);





}




int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}