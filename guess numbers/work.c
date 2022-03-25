#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//猜数字游戏
//1 自动产生一个1-100之间的随机数
//2 猜数字
//	a 猜对了，就恭喜你，游戏结束
//	b 猜错了，会告诉你猜大了，还是猜小了，知道猜对
//3 游戏一个一直玩，除非退出游戏

//void menu()
//{
//	printf("*****************************\n");
//	printf("*********  1. play  *********\n");
//	printf("*********  0. exit  *********\n");
//	printf("*****************************\n");
//
//}
//
#include <stdlib.h>
#include <time.h>
//void game()
//{
//	//游戏过程实现
//	//1 .生成随机数
//	//rand函数生成了一个0-32767之间的数字
//	//时间发生变化 
//	//srand((unsigned int)time(NULL) );
//	//这里设置srand导致每次都会初始化，所以直接在主函数初始化一次
// 
//	int ret = rand()%100+1;//除以100的余数就是0-99 +1 之后范围 1-100
// 
//	//printf("%d\n", ret);
//	//2 .猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("猜数字：>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//				break;
//		}
//		printf("%d\n", guess);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//打印菜单
//		printf("请选择");
//		scanf("%d", &input);
//		printf("%d", input);
//		switch (input)
//		{
//		case 1 :
//			game();
//			printf("开始游戏\n");
//			break;
//		case 0 :
//			printf("结束游戏\n");
//			break;
//		default :
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



void menu()
{
	printf("******************\n");
	printf("*****1  paly  ****\n");
	printf("*****0  exit  ****\n");
	printf("******************\n");


}


void game()
{
	int guess = 0;
	printf("开始猜数字：>");
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else  if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("对对对对\n");
			break;
		}
		printf("%d\n", guess);
	}
	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//游戏目录
		scanf("%d", &input);
		if (1 == input)
		{ 
			
				printf("开始游戏\n");
				game();
				
			}
		else if (0 == input)
		{
			printf("结束游戏\n");
			break;
		}
		else
		{
			printf("输入错误，重新输入\n");
			
		}
		
	} while (input);
	return 0;
}