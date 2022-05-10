#define _CRT_SECURE_NO_WARNINGS 1

#include "dynamicArray.h"


//����
struct Person
{
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = data;
	printf("������ %s ���䣺%d\n", p->name, p->age);

}

int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && (p1->age == p2->age);
}

int main()
{
	//��ʼ����̬����
	DynamicArray* array = init_array(5); 

	//׼������
	struct Person p1 = { "Сһ",18 };
	struct Person p2 = { "С��",18 };
	struct Person p3 = { "С��",18 };
	struct Person p4 = { "С��",18 };
	struct Person p5 = { "С��",18 };
	struct Person p6 = { "С��",18 };

	printf("��������ǰ�� ������%d  ��С��%d\n", array->m_capacity, array->m_size);

	//��������
	insert_array(array, 0, &p1);
	insert_array(array, 0, &p2);
	insert_array(array, 1, &p3);
	insert_array(array, 0, &p4);
	insert_array(array, -1, &p5);
	insert_array(array, 2, &p6);

	// С�� С�� С�� С�� Сһ С��
	foreach_DynamicArray(array, myPrintPerson);

	printf("�������ݺ� ������%d  ��С��%d\n", array->m_capacity, array->m_size);


	//����ɾ��
	romoveByPos_DynamicArray(array, 2);
	printf("------------------------------\n");
	foreach_DynamicArray(array, myPrintPerson);
	printf("ɾ���� ������%d  ��С��%d\n", array->m_capacity, array->m_size);


	struct Person p = { "С��",18 };
	romoveValue_DynamicArray(array, &p, myComparePerson);
	printf("------------------------------\n");
	foreach_DynamicArray(array, myPrintPerson);
	printf("ɾ���� ������%d  ��С��%d\n", array->m_capacity, array->m_size);


	destroy_DynamicArray(array);

	array = NULL;

	system("pause"); 
	return EXIT_SUCCESS; 
}