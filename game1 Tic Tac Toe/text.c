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
	//存储数据-二维数组
	char board[ROW][COL];//创建棋盘
	//初始化棋盘-初始化空格
	InitBoard(board,ROW,COL);
	//显示棋盘
	DisplayBoard( board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while(input);
	/*while(1)
	{
		menu();
		scanf("%d", &input);
		if (1 == input)
		{
			printf("三子棋游戏\n");
		}
		else if (0 == input)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("选择错误，重新选择\n");
		}
	}*/

	return 0;
}