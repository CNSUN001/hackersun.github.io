#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct BinaryNode
{
	//数据域
	char ch;
	//指针域
	struct BinaryNode* lChild;
	struct BinaryNode* rChild;
};

//计算叶子数
void calculateLeafNum(struct BinaryNode* root,int* p)
{
	if (root == NULL)
	{
		return;
	}
	//如果节点左子数 与右子数 同时为空 就称为叶子
	if (root->lChild == NULL && root->rChild == NULL)
	{
		(*p)++;
	}
	calculateLeafNum(root->lChild, p);

	calculateLeafNum(root->rChild, p);
}

//求数的高度
int getTreeHeight(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//获取左子数的高度
	int lHeight = getTreeHeight(root->lChild);

	//获取右子数的高度
	int rHeight = getTreeHeight(root->rChild);

	//从左子树和右子树中取大的值+1
	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1;

	return height;
}

//拷贝二叉树
struct BinaryNode* copyTree(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
}

//遍历
void recursion(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return;
	}
	//先序遍历
	//printf("%c ", root->ch);

	//recursion(root->lChild);

	//recursion(root->rChild);

    //中序遍历
	//recursion(root->lChild);

	//printf("%c ", root->ch);

	//recursion(root->rChild);

	//后序遍历
	recursion(root->lChild);

	recursion(root->rChild);

	printf("%c ", root->ch);

}

void test01()
{
	struct BinaryNode nodeA = { 'A',NULL,NULL };
	struct BinaryNode nodeB = { 'B',NULL,NULL };
	struct BinaryNode nodeC = { 'C',NULL,NULL };
	struct BinaryNode nodeD = { 'D',NULL,NULL };
	struct BinaryNode nodeE = { 'E',NULL,NULL };
	struct BinaryNode nodeF = { 'F',NULL,NULL };
	struct BinaryNode nodeG = { 'G',NULL,NULL };
	struct BinaryNode nodeH = { 'H',NULL,NULL };

	//建立关系
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeF;

	nodeB.rChild = &nodeC;

	nodeC.lChild = &nodeD;
	nodeC.rChild = &nodeE;

	nodeF.rChild = &nodeG;

	nodeG.lChild = &nodeH;

	//    A    
	//   / \
	//  B   F
	//   \    \
	//    C    G
	//   / \  /
	//  D   E H
	

	//递归遍历
	//recursion(&nodeA);


	//1 叶子数量
	int sum = 0;
	calculateLeafNum(&nodeA, &sum);
	printf("树的叶子数量%d\n", sum);

	//2 求树的高度/深度
	int height = getTreeHeight(&nodeA);
	fprintf(stdout, "树的高度：%d\n", height);

	//3 拷贝二叉树
	struct BinaryNode *newTree = copyTree(&nodeA);
}




int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}