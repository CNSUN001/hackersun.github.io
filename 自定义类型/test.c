#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ�������


//��������
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4, b5, b6;//��b1 ��b2��b3���ǽṹ����� b4, b5, b6��ȫ�ֱ�����
//
//int main()
//{
//	//���ֲ�������
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//����ȫ����
//�����ṹ�����ͣ�ֻ����һ�Σ�
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}s;
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}* ps;
//
//int main()
//{
//	ps = &s;//�����ṹ��ᱻ������ͬ�ṹ
//	return 0;
//}


//�ṹ��������
//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};



//ʵ�ֽṹ���Ե���
//struct N
//{
//	int d;//4
//	struct N n;//���ݹ�
//};
//
//int main()
//{
//	struct N sn;
//	return 0;
//}

//�ṹ��������ͨ��ָ��ʵ��
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//�ṹ���ʼ��
//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'x',20 };
//	struct B sb = { 3.14,{'w',100},'q' };
//	struct B* ps = &sb;
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	printf("%lf %c %d %c\n", ps->d, ps->s.c,ps->s.i, ps->c);
//
//	return 0;
//}


//�ṹ���ڴ��С ����
//struct S//8
//{
//	int i;
//	char c;
//};
//struct S2//12
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S3//16
//{
//	char c1;
//	int i;
//	double d;
//};
////struct S4//8
////{
////	char c1;
////	char c2;
////	int i;
////};
//struct S4 //16
//{
//	double d;
//	char c;
//	int i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;//16
//	double d;
//};
//
////�ṹ���ڴ�������
////1 ��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ����
////2 ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
////������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
////vsĬ�϶����� - 8   Linuxû��Ĭ�϶�����
////3 �ṹ����ܴ�СΪ����������������
////4 ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//8
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//16
//	struct S5 s5 = { 0 };//s4����������8����Ҫ��8��ʼ��
//	printf("%d\n", sizeof(s5));//32
//	return 0;
//}


//Ϊʲô�����ڴ����
//1 ƽ̨��ֲ  �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݣ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣
//2 ����ԭ��  ���ݽṹ��������ջ��Ӧ�þ����ܵ�����Ȼ�߽��϶��롣ԭ������δ������ڴ洦�����������Σ���������ڴ���ʽ���Ҫһ��ʱ��
//�ܵ���˵ �����ÿռ任ʱ��


//��������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ� 
//1 �ÿռ�С�ļ�����һ��
//struct S4//8
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S2//12
//{
//	char c1;
//	int i;
//	char c2;
//};
//2 �޸�Ĭ�϶�����

//��Ĭ�϶�������Ϊ2;
//#pragma pack(2) //8 Ĭ�϶�������������������
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()

//#pragma pack(1)//6
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
// }
                  

//offsetof (type,member)//������ʼλ��ƫ����  (��)
#include <stddef.h>

//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    printf("%d\n", offsetof(struct S, c1));
//    printf("%d\n", offsetof(struct S, i));
//    printf("%d\n", offsetof(struct S, c2));
//    return 0; 
//}


//struct S
//{
//    int data[1000];
//    int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
////�ṹ�崫��
//void print1(struct S s)//Ч�ʵͣ��޷�ֱ�Ӹı����������ݣ������
//{
//    printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)//��ַ���ν�ʡ�ռ�
//{
//    printf("%d\n", ps->num);
//}
//int main()
//{
//    print1(s);//���ṹ��
//    print2(&s);//����ַ
//    return 0;
//}


//λ��
//C�����еģ�λ��

//ʲô��λ��
//λ�ε������ͽṹ�����ƣ���������ͬ��
//1 λ�εĳ�Ա������int unsigned int �� signed int charҲ���ԣ����ͼ��壩
//2 λ�εĳ�Ա�����һ��ð�ź�һ������
//3 λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�����ֲ����Ӧ�þ�������ʹ��λ�Ρ�

//λ���ڴ���� ��4�ֽ�(int)����1�ֽڿ���(char)

//�Ա� - 3  ����bitλ���Խ��
//00 ��
//01 Ů
//10 ����
//11

//struct A
//{
//    //4���ֽ� - 32bit
//    int _a : 2;// _aռ2��bitλ
//    int _b : 5;// _bռ5��bitλ
//    int _c : 10;// _cռ10��bitλ
//    //15
//    //4���ֽ� - 32bit
//    int _d : 30;// _dռ30��bitλ
//};
//
//int main()
//{
//    printf("%d\n", sizeof(struct A));//8
//    return 0;
//}

//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//    s.a = 10;   //1010   00000010
//    s.b = 12;   //1100   01100010
//    s.c = 3;    //0011   01100010 00000011 
//    s.d = 4;    //0100   01100010 00000011 00000100
//    // �ڴ�620304  ��������ʹ�ã��³�Ա�ڴ治���Ὺ���¿ռ�
//    return 0;
//}


//λ�εĿ�ƽ̨����
//1 intλ�α������з����������޷�������ȷ��
//2 λ�������λ����Ŀ����ȷ����16λ�������16��32λ�������32�����д27��16λ����������⣩
//3 λ�����ڴ�����ҷ��䣬���Ǵ�����������׼��δ����
//4 ��һ���ṹ��������λ�Σ��ڶ���λ�αȽϴ������û������ò�ȷ����


//ö��
//Ӧ�ó���
//1 һ�ܵ�����һ�������������޵�7�죬����һһ�о١�
//2 �Ա��У��С�Ů�����ܣ�Ҳ����һһ�о١�
//3 �·���12���£�Ҳ����һһ�о١�


//����ö������  ö���ǳ���
//#define RED 5
//#define GREEN 5
//#define BLUE 5

//enum Color//���define���Ӵ���ɶ��ԣ������ͼ�飬��ֹ������Ⱦ��������ԣ�ʹ�÷���
//{
//    RED = 5,//0 Ĭ�ϵ���
//    GREEN ,//1
//    BLUE//2
//};
//
//int main()
//{
//    enum Color c = BLUE;
//    printf("%d\n", RED);
//    printf("%d\n", GREEN);
//    printf("%d\n", BLUE);
//
//    return 0;
//}

//void menu()
//{
//    printf("***********************\n");
//    printf("*****1.add  2.sub******\n");
//    printf("*****3.mul  4.div******\n");
//    printf("********0.exit*********\n");
//
//}
//enum Option
//{
//    EXIT,
//    ADD,
//    SUB,
//    MUL,
//    DIV
//};
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int Calc(int (*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    printf("��������Ҫ������>:");
//    scanf("%d %d", &x, &y);
//    return pf(x, y);
//}
//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        int ret = 0;
//        switch (input)
//        {
//        case ADD:
//            ret = Calc(Add);
//            printf("ret = %d\n", ret);
//            break;
//        case SUB:
//            ret = Calc(Sub);
//            printf("ret = %d\n", ret);
//            break;       
//        case MUL:
//            ret = Calc(Mul);
//            printf("ret = %d\n", ret);
//             break;
//        case DIV:
//            ret = Calc(Div);
//            printf("ret = %d\n", ret);
//            break;
//        case EXIT:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("�������,����ѡ��\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}


//�����壨�����壩 ����ͬһ��ռ䣬������Ĵ�С����������Ա�Ĵ�С
//union Un
//{
//    char c;//1
//    int i;//4
//};
//int main()
//{
//    union Un u = { 10 };//��һ��Ԫ�ػ�Ӱ��������ͬһʱ��ֻ����һ��Ԫ��
//    u.i = 1000;
//    u.c = 100;
//    //printf("%d\n", sizeof(u));//4
//    printf("%p\n", &u);
//    printf("%p\n", &(u.c));
//    printf("%p\n", &(u.i));//������ַһģһ��
//
//    return 0;
//}


//�жϵ�ǰ������Ĵ�С��
//union Un
//{
//    char c;//1
//    int i;//4
//}u;
//int main()
//{
//    //int a = 1;
//    //char* p = (char*)&a;
//    //if (*p == 1)
//    //{
//    //    printf("С��ģʽ\n");
//
//    //}
//    //else
//    //{
//    //    printf("���ģʽ\n");
//    //}
//    u.i = 1;
//    if (u.c == 1)
//    {
//        printf("С��ģʽ\n");
//    }
//    else
//    {
//        printf("���ģʽ\n");
//    }
//    return 0;
//}


//�������С����
//������Ĵ�С����������Ա�Ĵ�С
//������Ա��С��������������������ʱ��Ҫ���뵽����������������
union Un
{
    //char a[5];//������1     5
    //int i;//������4
    short s[5];
    int a;
};
int main()
{
    union Un u;
    printf("%d\n",sizeof(u));//8 12
    return 0;
}