#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������Ϸ
//1 �Զ�����һ��1-100֮��������
//2 ������
//	a �¶��ˣ��͹�ϲ�㣬��Ϸ����
//	b �´��ˣ��������´��ˣ����ǲ�С�ˣ�֪���¶�
//3 ��Ϸһ��һֱ�棬�����˳���Ϸ

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
//	//��Ϸ����ʵ��
//	//1 .���������
//	//rand����������һ��0-32767֮�������
//	//ʱ�䷢���仯 
//	//srand((unsigned int)time(NULL) );
//	//��������srand����ÿ�ζ����ʼ��������ֱ������������ʼ��һ��
// 
//	int ret = rand()%100+1;//����100����������0-99 +1 ֮��Χ 1-100
// 
//	//printf("%d\n", ret);
//	//2 .������
//	int guess = 0;
//	while (1)
//	{
//		printf("�����֣�>\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��");
//		scanf("%d", &input);
//		printf("%d", input);
//		switch (input)
//		{
//		case 1 :
//			game();
//			printf("��ʼ��Ϸ\n");
//			break;
//		case 0 :
//			printf("������Ϸ\n");
//			break;
//		default :
//			printf("ѡ�����,����ѡ��\n");
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
	printf("��ʼ�����֣�>");
	int ret = rand() % 100 + 1;
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else  if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�ԶԶԶ�\n");
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
		menu();//��ϷĿ¼
		scanf("%d", &input);
		if (1 == input)
		{ 
			
				printf("��ʼ��Ϸ\n");
				game();
				
			}
		else if (0 == input)
		{
			printf("������Ϸ\n");
			break;
		}
		else
		{
			printf("���������������\n");
			
		}
		
	} while (input);
	return 0;
}