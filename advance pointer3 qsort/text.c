#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ð������(ͨ��ָ��ʵ��)
//void Bubble(int* p, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)//j < sz - 1 - i  ���潻����Ĳ��ٽ�����ʡʱ��
//		{
//			int tmp = 0;
//			if (*(p + j) > *(p + j + 1))
//			{
//				tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//�������ѭ��δ��������������ѭ��
//			break;
//	}
//}
//void bubble_sort(void* base,
//	int sz,
//	int size,
//	int (*cmp)(const void* e1, const void* e2));
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//qosrt������ʹ�� qsort() ��������  �� �������ݣ��ַ������ݣ��ṹ�����ݶ����ԡ�

//void qsort(void* base, //base�д�Ŵ����������е�һ������ĵ�ַ
//			 size_t num, //num��������Ԫ�صĸ���
//			size_t size, //size����������һ��Ԫ�صĴ�С
//			int (*compar)(const void*, const void*));//compar�������Ƚϴ����������е�2��Ԫ�صĺ���

#include <stdlib.h>
#include <string.h>
 

//int com_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test1()
//{
//	//�������ݵ�����
//	int arr[10] = { 3,7,8,6,5,4,9,2,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	//��ӡ
//	print(arr, sz);
//}
////
struct Stu
{
	char name[20];
	int age;
};
//
int sort_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//strcmp��Ӧ�Ƚ�ASCII��
}

void test2()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
	//���谴����������
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), sort_age);
	//����������
	//bubble_sort(s, sz, sizeof(s[0]), sort_name);
}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}

//ģ��qsortʵ��һ��ð�������ͨ���㷨
void Swap(char* buf1, char* buf2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,
	int sz,
	int size,
	int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ������
		int j = 0;
		//����Ԫ�رȽ�
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//����
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int main()
{
	//test1();
	test2();
	return 0;
}