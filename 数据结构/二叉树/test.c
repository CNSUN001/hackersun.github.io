#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct BinaryNode
{
	//������
	char ch;
	//ָ����
	struct BinaryNode* lChild;
	struct BinaryNode* rChild;
};

//����Ҷ����
void calculateLeafNum(struct BinaryNode* root,int* p)
{
	if (root == NULL)
	{
		return;
	}
	//����ڵ������� �������� ͬʱΪ�� �ͳ�ΪҶ��
	if (root->lChild == NULL && root->rChild == NULL)
	{
		(*p)++;
	}
	calculateLeafNum(root->lChild, p);

	calculateLeafNum(root->rChild, p);
}

//�����ĸ߶�
int getTreeHeight(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//��ȡ�������ĸ߶�
	int lHeight = getTreeHeight(root->lChild);

	//��ȡ�������ĸ߶�
	int rHeight = getTreeHeight(root->rChild);

	//������������������ȡ���ֵ+1
	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1;

	return height;
}

//����������
struct BinaryNode* copyTree(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
}

//����
void recursion(struct BinaryNode* root)
{
	if (root == NULL)
	{
		return;
	}
	//�������
	//printf("%c ", root->ch);

	//recursion(root->lChild);

	//recursion(root->rChild);

    //�������
	//recursion(root->lChild);

	//printf("%c ", root->ch);

	//recursion(root->rChild);

	//�������
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

	//������ϵ
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
	

	//�ݹ����
	//recursion(&nodeA);


	//1 Ҷ������
	int sum = 0;
	calculateLeafNum(&nodeA, &sum);
	printf("����Ҷ������%d\n", sum);

	//2 �����ĸ߶�/���
	int height = getTreeHeight(&nodeA);
	fprintf(stdout, "���ĸ߶ȣ�%d\n", height);

	//3 ����������
	struct BinaryNode *newTree = copyTree(&nodeA);
}




int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}