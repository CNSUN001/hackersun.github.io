//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//
////C语言下的封装
//struct Person
//{
//	char name[64];
//	int age;
//
//};
//
//void PersonStudy(struct Person* p)
//{
//	printf("%s在上课\n",p->name);
//}
//
//void test01()
//{
//	struct Person p = {"张三",10};
//	PersonStudy(&p);
//}
//
//
//struct Dog
//{
//	char name[64];
//	int age;
//
//};
//
//void Dogeat(struct Dog* dog)
//{
//	printf("%s在狗粮\n", dog->name);
//}
//
//
//
//void test02()
//{
//	struct Dog d ;
//	strcpy(d.name,"旺财");
//	d.age = 100;
//	Dogeat(&d);
//
//
//	//C的封装属性和行为是分离的
//	struct Person p;
//	strcpy(p.name, "老王");
//	Dogeat(&p);
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}
