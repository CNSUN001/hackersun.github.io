#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c�������ṩ�˿����������õ�goto���ͱ����ս�ı��
//������goto�����û�б�Ҫ�ģ�ʵ������ȫ���Բ�ʹ��goto���
//goto���������Σ�ղ�����ʹ��

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag;  //������flag
//	return 0;
//}
//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ����������;I am pig ��ȡ���ػ�
// shutdown -s -t -60 ��60s��ػ�
//shutdown -aȡ���ػ�
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system()-ִ��ϵͳ����
//	char input[20] = { 0 };
//	system ("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺������ ȡ���ػ�\n");
//	scanf("%s",input);
//	if (strcmp(input,"������")==0)	
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺������ ȡ���ػ�\n");
		system("shutdown -s -t 60");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
//goto��������3�����ϵ�ѭ��ʱ������ѭ��������ȷʹ�÷�ʽ ����������ʹ�� ��goto���ܿ纯����ת