#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < sz; i++)//F5��������(������ȷ�Ĵ���)	F9���öϵ�
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
//debug �汾 ����������Ϣ�����Ҳ����κ��Ż������ڳ���Ա����
//release �����汾 �����˸����Ż� ��С�������ٶȶ������ŵ�
