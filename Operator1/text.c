#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 13;
//	//��a�Ķ������еĵ�5λ��Ϊ1
//	a = a | (1 << 4);
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	printf("%d\n", a);
//	//��a�Ķ������еĵ�5λ��Ϊ0
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//	return 0;
//}

//��ʹ�õ���������ʵ�ֽ���
//int main()
//{
//	//���ܻ����
//	int a = 3;
//	int b = 5;
//	//1//printf("a=%d b=%d\n", a, b);
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a=%d b=%d\n", a, b);
//	//2
//	a = a ^ b; 0011^0101=0110
//	b = a ^ b; 0101^0110=0011
//	a = a ^ b; 0110^0011=0101
//	return 0;
//}

//��ֵ��������(�������ȵ�������)  =   += -+ *= /= >>= <<= %= >>= <<= &= |= ^=
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;//2
//
//	a = a >> 3;//1
//	a >>= 3;
//	return 0;
//}

//��Ŀ������(ֻ��һ��������) ! - + & sizeof ~(������ȡ��) -- ++  *
//int main()
//{
//	////!�߼�������
//	//int flag = 5;
//	//if (flag)//flagΪ�棬��ӡhehe
//	//{
//	//	printf("hehe\n");
//	//}
//	//if (!flag)//flagΪ�٣���ӡhaha
//	//{
//	//	printf("haha\n");
//	//}
//	//int a = 10;
//	//a = -a;
//	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));// 2 sizeof�ڲ����ʽ���������
//	677printf("%d\n", s);// 5
//	//int a = 10;
//	//char arr[10] = { 0 };
//	//printf("%d\n", sizeof (arr));//��λ�ֽ�
//	//printf("%d\n", sizeof (char [10]));//char[10]��arr���������
//	//printf("%d\n",sizeof(a));//����a��ռ�ռ�Ĵ�С
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);//֤��sizeof��һ�����������Ǻ�������Ǻ���()����ʡ��
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001-Դ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//~��λȡ��
//	int b = ~a;//00000000000000000000000000000000
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;
//	//int b = a--;
//	//int b = --a;
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a); a=4//�����������
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&-ȡ��ַ������
//	int* pa = &a;//pa������ŵ�ַ��pa����ָ�����
//	*pa = 20;//*-�����ò�����-��ӷ��ʲ�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//()ǿ������ת��
//	return 0;
//}


//void test1(int* arr)
//{
//	printf("%d\n", sizeof(arr));//int*arr
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//char*ch
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//}

//��ϵ������ > >= < <= != ==
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if (a != b)
//	//if (a > b)
//	//if (a < b)
//	//if (a <= b)
//	//{
//
//	//}
//	return 0;
//}
//�Ƚ�2���ַ�����ȣ�����ʹ�� == Ҫ��strcmp


//�߼������� && ||
//int main()
//{
//	int a = 2;
//	int b = 0;
//	//if (a && b)
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&�ж�һ������Ǽٲ�������ж�
//	i = a++ || ++b || d++;//||�ж�Ϊ��Ҳ�������
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//����������(��Ŀ������)  ?  :
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//��Ŀ��������
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}


//,���ʽ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//���ű��ʽ�����������μ��㣬���������ʽ�Ľ�������һ�����ʽ�Ľ��
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("%d\n", d);
//
//	return 0;
//}

//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[]�����±����ò�����
//	//[]�Ĳ�������2����arr,4
//	return 0;
//}

//�����ĵ��ò�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//()�����ĵ��ò�����
	//return 0;
//}


//�ṹ��Ա���ʲ�����
// .
//->

//�ṹ��
//int float char short double

// ��:��������ţ�����
//��: ���֣����䣬�Ա�


//������һ���Զ��������
//struct Book
//{
//	//�ṹ��ĳ�Ա()
//	char name[20];
//	char id[20];
//	int price;
//};
////.�ó��ṹ���Ա������.��Ա��
//int main()
//{
//	int num = 10;
//	//�ṹ�������.��Ա��
//	struct Book b = { "C����","C20220406",55 };
//	struct Book* pb=&b;
//	//�ṹ��ָ��->��Ա��
//	printf("����:%s\n", pb->name);
//	printf("���:%s\n", pb->id);
//	printf("�۸�:%d\n", pb->price);
//	//printf("����:%s\n", (*pb).name);
//	//printf("���:%s\n", (*pb).id);
//	//printf("�۸�:%d\n", (*pb).price);
//	//printf("����:%s ���:%s �۸�:%d\n", b.name, b.id, b.price);
//	//printf("���:%s\n", b.id);
//	//printf("�۸�:%d\n", b.price);
//	return 0;
//}

//���ʽ��ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//	return 0;
//}
//�������� ����char������� ��ת����int ����ض�

//int main()
//{
//	char a = 3;//����֮��00000000000000000000000000000011  a-00000011
//	char b = 127;//����֮��00000000000000000000000001111111 b=01111111
//	char c = a + b;//�����������λ���޷��Ų�0
//				//���10000010 - c
//	//�������� ��������11111111111111111111111110000010
//	//				   11111111111111111111111110000001
//	//				   10000000000000000000000001111110
//	//a��b����char���ͣ�û�дﵽint�Ĵ�С
//	//����ͷ�����������
//	printf("%d\n", c);//-126
//	return 0;
//		
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1  //%u �޷���10�������� 
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));// gcc-4
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);//sû������������󱻽ض�
//	printf("%u\n", sizeof (s = a + 3));
//	a + b;//ֵ���ԣ���������int
//	return 0;
//}

//����ת��  int > unsigned int > long int > unsigned long int > float > double > long double
//�������Ͳ���ͬ��������ת�� ��Χ���ת��

//������������
//���ӱ��ʽ����ֵ��3��1Ӱ�������
//1 �����������ȼ�
//2 �������Ľ������
//3 �Ƿ������ֵ˳�� �� ||  &&

//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//���ȼ���������˳��
//	int c = a + b + 7;//���ȼ��������ý����������
//	return 0;
//}

// ������ĳ���
//1 //int fun()
//{
//	static int count = 1;//static��������
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
////}

//2 
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//} //vs 12  // gcc -10