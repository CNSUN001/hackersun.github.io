#define _CRT_SECURE_NO_WARNINGS 1

#include "dynamicArray.h"


//测试
struct Person
{
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("姓名： %s 年龄：%d\n", p->name, p->age);

}

int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && (p1->age == p2->age);
}

int main()
{
	//初始化动态数组
	DynamicArray* array = init_array(5); 

	//准备数据
	struct Person p1 = { "小一",18 };
	struct Person p2 = { "小二",18 };
	struct Person p3 = { "小三",18 };
	struct Person p4 = { "小四",18 };
	struct Person p5 = { "小五",18 };
	struct Person p6 = { "小六",18 };

	printf("插入数据前： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);

	//插入数据
	insert_array(array, 0, &p1);
	insert_array(array, 0, &p2);
	insert_array(array, 1, &p3);
	insert_array(array, 0, &p4);
	insert_array(array, -1, &p5);
	insert_array(array, 2, &p6);

	// 小四 小二 小六 小三 小一 小五
	foreach_DynamicArray(array, myPrintPerson);

	printf("插入数据后： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);


	//测试删除
	romoveByPos_DynamicArray(array, 2);
	printf("------------------------------\n");
	foreach_DynamicArray(array, myPrintPerson);
	printf("删除后： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);


	struct Person p = { "小四",18 };
	romoveValue_DynamicArray(array, &p, myComparePerson);
	printf("------------------------------\n");
	foreach_DynamicArray(array, myPrintPerson);
	printf("删除后： 容量：%d  大小：%d\n", array->m_capacity, array->m_size);


	destroy_DynamicArray(array);

	array = NULL;

	system("pause"); 
	return EXIT_SUCCESS; 
}