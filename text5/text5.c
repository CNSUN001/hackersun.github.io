#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 10000
//�Ա�
enum Sex//ö��
{
	male=3,
	female,
	secret

};


int main()
{
	///1 ���泣��
	//	3.14;
	//10;
	//'a';
	//'abcdef';
	
	//2.const ���εĳ�����
	//const int num = 10;//const����num֮��num�Ͳ������޸ģ���ʱnum�ǳ�������������Ȼ�Ǳ���
	//num = 20;
	//printf("num=%d\n", num);
	//int arr[10] = { 0 };//10��Ԫ��
	//const int n = 10;
	//int arr2[n] = {0};//n�ǳ������������鲻����

	//3.#define����ı�ʶ������
	//MAX = 20000; MAX��define���Դ�ʱ�������޸�
	//int n = MAX;

	//printf("n=%d\n",n);

	//4 ö�ٳ���
	//����һһ�оٵĳ���
	enum Sex s = male;
	///male = 3;�������޸�
	printf("%d\n",male);
	printf("%d\n", female);
	printf("%d\n",secret);//ö�ٳ���Ĭ��ֵ��0��ʼ
	return 0;
}