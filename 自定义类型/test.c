#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ�������


//��������
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//��b1 ��b2��b3���ǽṹ����� b4, b5, b6��ȫ�ֱ�����
//
//int main()
//{
//	//���ֲ�������
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//����ȫ����
//�����ṹ�����ͣ�ֻ����һ�Σ�
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;//�����ṹ��ᱻ������ͬ�ṹ
//	return 0;
//}


//�ṹ��������
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};



//ʵ�ֽṹ���Ե���
//struct N
//{
//	int d;//4
//	struct N n;//���ݹ�
//};
//
//int main()
//{
//	struct N sn;
//	return 0;
//}

//�ṹ��������ͨ��ָ��ʵ��
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//�ṹ���ʼ��
//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'x',20 };
//	struct B sb = { 3.14,{'w',100},'q' };
//	struct B* ps = &sb;
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	printf("%lf %c %d %c\n", ps->d, ps->s.c,ps->s.i, ps->c);
//
//	return 0;
//}


//�ṹ���ڴ��С ����
struct S
{
	int i;
	char c;
};
struct S2
{
	char c1;
	int i;
	char c2;
};
struct S3
{
	char c1;
	int i;
	double d;
};


//�ṹ���ڴ�������
//1 ��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ����
//2 ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//vsĬ�϶����� - 8   Linuxû��Ĭ�϶�����
//3 �ṹ����ܴ�СΪ����������������
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//12
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s3));//16
	return 0;
}