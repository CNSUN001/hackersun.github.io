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
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//���ű��ʽ�����������μ��㣬���������ʽ�Ľ�������һ�����ʽ�Ľ��
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);

	return 0;
}