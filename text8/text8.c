#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int input = 0;//�����ֵ
	//printf("������\n");
	//printf("���������ô�죿������1/����0������");
	//scanf("%d", &input);//��ֵ���뵽input�ĵ�ַ
	//if (input ==1)
	//	printf("Caro - Kann Defense");
	//if (input ==0)
	//	printf("Sicilian Defence");


	//30000���� --��һ�����
	{
		int line = 0;
		while (line<30000)
		{
			printf("д����:%d\n",line);
			line++;
		}
		if (line == 30000)
		{
			printf("��һ�����\n");

		}

	}
	return 0;

}