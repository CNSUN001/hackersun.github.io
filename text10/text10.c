#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;

	//���� һ����ͬ���͵�Ԫ�ؼ���
	//10������1-10������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr[0]��һ��Ԫ�� arr[1]�ڶ���Ԫ���Դ�����
	int i = 0;
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
		
	}

	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0 f10���Բ鿴

	return 0;
}