#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16  sizeof(������)-������������Ĵ�С &������-��ʾȡ����������ĵ�ַ  ��������������������Ԫ�ش�С
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8  //&a��Ȼ������ĵ�ַ������Ҳ�ǵ�ַ��sizeof�������һ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*&a));//16
//	// int(*p)[4] = &a;
//	printf("%d\n", sizeof(&a + 1));//4/8 //���������ĵ�ַ - Ұָ��
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 a[1]�ĵ�ַ
//
//
//	return 0;
//}

//�ַ�����1
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//���
//	printf("%d\n", strlen(arr + 0));//���
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	return 0;
//}


//�ַ�����2
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
//	//printf("%d\n", sizeof(&arr + 1)); //4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//�ַ�����3
//int main()
//{
//	char* p = "abcdef";
//	//char(*p1)[7]="abcdef";
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 0));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(*p1));//7
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1)); //4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1)); //���ֵ (�������ֵû����ϵ����Ϊ��ȷ��p�ڲ������ڴ�)
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//��ά����
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - �ǵ�һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//16 a[0]���ǵ�һ�е�������
//	printf("%d\n", sizeof(a[0] + 1));//4/8  a[0]��Ϊ����������û�е�������sizeof�ڲ�Ҳû��ȡ��ַ 										
//										//����a[0]��ʾ��һ�е�һ��Ԫ�صĵ�ַ��a[0] + 1��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 *(a[0] + 1)��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8  a��Ϊ��ά���������������û�е�������sizeof�ڲ�Ҳû��ȡ��ַ
//									// ����a�Ƕ�ά������Ԫ�صĵ�ַ:����һ�еĵ�ַ  
//									//a + 1���ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16  *(a + 1) ->a[1]  a+1�ǵڶ��еĵ�ַ,*(a+1)��ʾ�ڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 //a[0]�ǵ�һ�е�������,ȡ��ַa[0]+1���ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  �ڶ��е�ַ������
//	printf("%d\n", sizeof(*a));//16 ��Ԫ�ص�ַ��Ӧ��,���ǵ�һ������Ԫ�� *a = *(a + 0) = a[0]
//	printf("%d\n", sizeof(a[3]));//16  ��Ȼû�е�4�е��� a[3]���� int [4] �����������16
//									//sizeof�ڲ�������ʵ����,���ᱨ��
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6)); //2 sizeof�ڲ�������,������,ֱ��ͨ�������жϴ�С
//	printf("%d\n", s);//5
//	return 0;
//}


//1
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1); //int(*p)[5] = &a ��int*���Ͳ�һ������Ҫǿ������ת��
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5 
//	return 0;
//}

//2
//struct Test//20�ֽ�
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ��٣�
//
//int main()
//{
//	printf("%p\n", p + 0x1);//%p�Ǵ�ӡ��ַ    0x100014
//	printf("%p\n",(unsigned long) p + 0x1);// 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);// 0x100004
//	return 0;
//}

//3
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);      //01 (ptr2) 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00(ptr1)
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = 0x 00 00 00 04  *ptr2 = 0x02 00 00 00
//	return 0;
//}

//4
//int main()
//{
//	int a[3][2] = { (0,1),(2,3), (4,5) };//ע���()���ű��ʽ ʵ�ʷŽ�ȥ����1��3��5
//	int* p;
//	p = a[0];
//	int(*pa)[2] = a;
//	pa = a[0];//p�õ���һ��Ԫ�ص�ַ
//	printf("%d,%d", p[0], **(pa + 1));//1,5
//	return 0;
//}

//5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//10000000  00000000 00000000 00000100       -4
//	//111111111111111111111111111111111011
//	//111111111111111111111111111111111100 ��Ĳ���
//	//FFFFFFFC -4
//	return 0;
//}

//6
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)�൱���õ��ڶ���
	int(*ptr3)[5] = (aa + 1);
	printf("%d,%d,%d", *(ptr1 - 1), *(ptr2 - 1), *(*(ptr3)+1));//10 5 7
	return 0;
}