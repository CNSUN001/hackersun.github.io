
#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

//�ṹ��


//��32λ�������� ����ṹ���С

//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//#pragma pack()
//
//int main()
//{
//	struct A a = { 0 };
//	struct B b = { 0 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(b));//12
//	return 0;
//}

//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12 12 16
//    return 0;
//}
//#pragma pack()

//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1 - 8bit
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}*Env_Alarm_Record;
//
////struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) *2 + 3);
//
//int main()
//{
//	int sz = (sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sz);
//
//	return  0;
//}

//#include <string.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;  // 00000000 00000000 00000000 00000000
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;//00000010 00000000 00000000 00000000
//    pstPimData->ucData0 = 3;//00000010 00000001 00000000 00000000
//    pstPimData->ucData1 = 4;//00000010 00000001 00000000 00000000
//    pstPimData->ucData2 = 5;//00000010 00101001 00000000 00000000
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

//#include <stdio.h>
//union Un
//{
//	short s[7];//14
//	int n;//4  
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//����������������
//	return 0;
//}

//������
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];  //00000000 00000000
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38; //39 38
//    printf("%x\n", a.k);//3839 
//
//    return 0; 
//}

//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);//1 257
//
//	return 0;
//}


//typedef struct {
//	int a;//0-3
//	char b;//4
//	//5 - �˷�
//	short c;//6-7
//	short d;//8-9
//	//10-11
//	
//	//12�ֽ�
//}AA_t;
//
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}


//��̬�ڴ����
#if 0
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(0);
	if (p == NULL)
	{
		perror("main");
	}
	printf("����ָ��p\n");
	free(p);
	p == NULL;
	return 0;
}
#endif


//ģ��ʵ��atoi
//���ַ���ת���� int

//#include <assert.h>
//#include <ctype.h>
//#include <limits.h>
//
//enum State 
//{
//	INVALID,
//	VALID
//};
//
////state ��¼ my_atoi ���ص�ֵ�ǺϷ�ת����ֵ ���ǷǷ���״̬
//enum State state = INVALID;
//
//int my_atoi(const char* s)
//{
//	int flag = 1;
//	//assert(s!=NULL);
//	//��ָ��
//	if (s == NULL)
//	{
//		return 0;
//	}
//	//���ַ���
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	//�����հ��ַ�
//	while (isspace(*s))
//	{
//		s++;
//	}
//	//����+/-
//	if (*s == '+')
//	{
//		flag = 1;
//		s++;
//	}
//	else if (*s == '-')
//	{
//		flag = -1;
//		s++;
//
//	}
//	//���������ַ���ת��
//	long long n = 0;//Ҫȷ��һ��С��Χ�����ȶ���һ����Χ
//
//	while (isdigit(*s))//isdigit�ж��ַ��Ƿ�Ϊʮ�������� ����10�������ַ���0����ʮ�������ַ��ط�0
//	{
//		n = n * 10 + flag*(*s - '0');
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		s++;
//	}
//	if (*s == '\0')
//	{
//		state = VALID;
//		return (int)n;
//	}
//	else
//	{
//		//�������ַ�
//		return (int)n;
//	}
//}
//
//int main()
//{
//	//1.��ָ��
//	//2.���ַ���
//	//3.�����������ַ�
//	//4.������Χ
//	const char* p = "1234";
//	int ret = my_atoi(p);
//	if(state == VALID)
//		printf("%d\n", ret);
//	else
//		printf("�Ƿ�ת��%d\n", ret);
//
//	return 0;
//}

//һ�����ֽ���취
//int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//int i = 0;
//int result = 0;
//for (i = 0; i < 9; i++)
//{
//	result = result ^ arr[i];
//}
//printf("%d\n", result);
//return 0;

//һ�������У�ֻ�����������ǳ���һ�Σ������������ֳ��������Ρ�
//��дһ�������ҳ�������ֻ����һ�εĺ���
// 1 2 3 4 5 6 1 2 3 4

void Find(int arr[], int sz,int* px,int* py)
{
	//1 Ҫ�������������
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2 ����ret����һλΪ1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//�Ѵӵ�λ��ߵĵ�posλΪ1�ķ���һ�飬Ϊ0�ķ�������һ����
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	*px = num1;
	*py = num2;
}


int main()
{
	//�����bitλ�ֳ�����
	// 1 3 1 3 5
	// 2 4 2 4 6
	
	//��������2bitλ�ֳ�����
	//1 4 1 4  5
	//2 3 2 3  6
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	//1^2^3^4^5^6^1^2^3^4 = 5^6
	// 1 3 1 3 5
	// 2 4 2 4 6
	//�ҳ�������ֻ����һ�ε�����
	//�ֳ����鰴�շ���1����
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	Find(arr,sz,&x,&y);
	printf("%d %d\n", x, y);
	return 0;
}