#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****     1.play    ****\n");
	printf("****     0.exit    ****\n");
	printf("***********************\n");

}

void game()
{
	//�洢����-��ά����
	char board[ROW][COL];//��������
	//��ʼ������-��ʼ���ո�
	InitBoard(board,ROW,COL);
	//��ʾ����
	DisplayBoard( board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while(input);
	/*while(1)
	{
		menu();
		scanf("%d", &input);
		if (1 == input)
		{
			printf("��������Ϸ\n");
		}
		else if (0 == input)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("ѡ���������ѡ��\n");
		}
	}*/

	return 0;
}