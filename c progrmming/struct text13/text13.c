#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ�������c���Դ����µ����ͳ���

//����һ��ѧ��

struct stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

struct book
{
	char name[20];
	float price;
	char id[30];
};


int main()
{
	struct stu s = { "����",20 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age,s.score);//�ṹ�����
	struct stu*ps = &s;
	printf("2: %s %d %lf\n", (* ps).name, (* ps).age, (* ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score); //->�ȼ�����2ʽд��


	return 0;
}