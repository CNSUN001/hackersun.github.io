#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;//4���ֽ�
//	int *pa=&a;//�õ�����a��4���ֽ��е�һ����ַ
//	*pa = 20;
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}

//ָ�����͵�����
//1.ָ�����;�����ָ������õķ���Ȩ��
//2.ָ�����;�����ָ����һ���߶�Զ
//int main()
//{
//	//int a = 0x11223344;
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);  //%p��ӡ��ַ
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);  //%p��ӡ��ַ
//	printf("%p\n", pc + 1);
//
//	//char* pc = &a;
//	//*pc = 0;
//	//int* pa = &a;
//	//*pa = 0;
//	//ָ�����;�������Ȩ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;//�������±�Ϊi�ĵ�ַ
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//�������±�Ϊi�ĵ�ַ
//	}
//	return 0;
//}


//Ұָ��
//���Ұָ�����ָ��ָ���λ���ǲ���֪��(����ģ�����ȷ�ģ�û����ȷ���Ƶ�)
//int main()
//{

	////�����p����Ұָ��
	//1//int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
	//*p = 20;//�Ƿ������ڴ�
	////2.Խ�����
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//3.ָ��ָ��Ŀռ��ͷ�							
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//a�뿪������ʱa�Ѿ����٣���ʱҲ���ڷǷ������ڴ�
//	return 0;
//}

//��ι��Ұָ��
//1 ָ���ʼ��  ��֪����ʼ��ʲô��ֱַ���ÿ�ָ�� int* p = NULL;
//2 С��ָ��Խ��
//3 ָ��ָ��ռ��ͷż�ʱ��ΪNULL
//4 ָ��ʹ��ǰ�����Ч��   ���ж�if(p != NULL)

//c���Ա�������Խ����Ϊ


//ָ������

//1 ָ��+-����

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	for (vp = &values[0]; vp < &values[N_VALUES];)//ָ���ϵ����
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = NULL;
//	for (p = &arr[0]; p < &arr[10]; p++)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}

//ָ���ȥָ��
//�õ�����ָ��֮���Ԫ�ظ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char c[5];
//	//ָ�������ǰ�᣺����ָ��ָ��ͬһ�ռ�
//	//printf("%d\n", &arr[9] - &c[0]);
//		//printf("%p\n", &arr[9]);
//		//printf("%p\n", &arr[0]);
//		//printf("%d\n", 0x006ffd10-0x006FFCEC);//36
//		//printf("%d\n", &arr[9] - &arr[0]);//9
//		int a = 0x006ffd10 - 0x006FFCEC;
//		int d = &arr[9] - &arr[0];//�鿴���������������λ�Ĳ��� Ҳ���ǳ���int��ռ�ֽ�4
//	//����ָ�������������������Ը�ָ����������������͵��ֽ���
//	return 0;
//}

//#include <string.h>
//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�ʵ��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

//ָ���ȥָ��ʵ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//for (vp = &arr[N_VALUES]; vp > &arr[0];)
//{
//	*--vp = 0;
//}

//for (vp = &arr[N_VALUES - 1]; vp >= &arr[0]; vp--)//���ַ����ᵼ��ָ��Խ��
//{
//	*vp = 0; 
//}


//ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%p\n", arr);//��������������Ԫ�ص�ַ
//	//printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//	//arr[2] <==>  * (arr + 2) <==> * (p + 2) <==> * (2 + p) <==> * (2 + arr) == 2[arr]
//	//2[arr] <==> arr[2] 
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa���Ƕ���ָ�����
//	int** ppa = &pa;//paҲ�Ǹ�������&pa��һ��ȡ���ڴ���ʼ��ַ
//	// *ppa == pa
// 	// *pa == a
//	//����ppa������Ӧ�ÿ��Եõ�a
//	// **ppa == a
//	int*** pppa = &ppa;
//	return 0;
//}


//ָ������ -����������

//int main()
//{
//	int arr[10];//��������-������͵����������������
//	char arr[5];//�ַ�����-��ŵ����ַ�
//	//ָ������-���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];//�ַ�����
//	return 0;
//}


//�ṹ�����
//�ṹ�����͵�����
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
};//s1,s2;//s1��s2Ҳ�ǽṹ�����
//s1,s2��ȫ�ֱ���
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = {{'w',20,3.14},"����",30,"20220408"};//����
//	//. ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//�ṹ�崫��
//void print(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print1(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//дһ��������ӡs������
//	struct Stu s = { {'w',20,3.14},"����",30,"20220408" };
//	print(s);//��ֵ����    Ҫ���¿���t�ڴ�ռ�
//	print1(&s);//��ַ����  ps����ֱ������s��Ч�ʸ�
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////ÿһ���������� �������ڴ��ջ���Ͽ���һ��ռ䣡
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);//������������󴫲� ѹջ����
//	return 0;
//}
 