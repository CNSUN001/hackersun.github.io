#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体可以让c语言创建新的类型出来

//创建一个学生

struct stu
{
	char name[20];//成员变量
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
	struct stu s = { "张三",20 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age,s.score);//结构体变量
	struct stu*ps = &s;
	printf("2: %s %d %lf\n", (* ps).name, (* ps).age, (* ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score); //->等价上面2式写法


	return 0;
}