#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;//4个字节
//	int *pa=&a;//拿到的是a的4给字节中第一个地址
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

//指针类型的意义
//1.指针类型决定：指针解引用的访问权限
//2.指针类型决定：指针走一步走多远
//int main()
//{
//	//int a = 0x11223344;
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);  //%p打印地址
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);  //%p打印地址
//	printf("%p\n", pc + 1);
//
//	//char* pc = &a;
//	//*pc = 0;
//	//int* pa = &a;
//	//*pa = 0;
//	//指针类型决定访问权限
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;//本质是下标为i的地址
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
//		*(p + i) = 1;//本质是下标为i的地址
//	}
//	return 0;
//}


//野指针
//概念：野指针就是指针指向的位置是不可知的(随机的，不正确的，没有明确限制的)
//int main()
//{

	////这里的p就是野指针
	//1//int* p;//局部变量指针未初始化，默认为随机值
	//*p = 20;//非法访问内存
	////2.越界访问
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//3.指针指向的空间释放							
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
//	*p = 20;//a离开函数此时a已经销毁，此时也属于非法访问内存
//	return 0;
//}

//如何规避野指针
//1 指针初始化  不知道初始化什么地址直接用空指针 int* p = NULL;
//2 小心指针越界
//3 指针指向空间释放及时置为NULL
//4 指针使用前检查有效性   做判断if(p != NULL)

//c语言本身不会检查越界行为


//指针运算

//1 指针+-整数

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	for (vp = &values[0]; vp < &values[N_VALUES];)//指针关系运算
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

//指针减去指针
//得到两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char c[5];
//	//指针相减的前提：两个指针指向同一空间
//	//printf("%d\n", &arr[9] - &c[0]);
//		//printf("%p\n", &arr[9]);
//		//printf("%p\n", &arr[0]);
//		//printf("%d\n", 0x006ffd10-0x006FFCEC);//36
//		//printf("%d\n", &arr[9] - &arr[0]);//9
//		int a = 0x006ffd10 - 0x006FFCEC;
//		int d = &arr[9] - &arr[0];//查看汇编多进行了右移两位的操作 也就是除以int所占字节4
//	//两个指针相减操作会对其结果除以该指针所代表的数据类型的字节数
//	return 0;
//}

//#include <string.h>
//计数器
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

//递归实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

//指针减去指针实现
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

//for (vp = &arr[N_VALUES - 1]; vp >= &arr[0]; vp--)//这种方法会导致指针越界
//{
//	*vp = 0; 
//}


//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%p\n", arr);//数组名是数组首元素地址
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

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是二级指针变量
//	int** ppa = &pa;//pa也是个变量，&pa再一次取出内存起始地址
//	// *ppa == pa
// 	// *pa == a
//	//所以ppa解两次应用可以得到a
//	// **ppa == a
//	int*** pppa = &ppa;
//	return 0;
//}


//指针数组 -本质是数组

//int main()
//{
//	int arr[10];//整型数组-存放整型的数组就是整型数组
//	char arr[5];//字符数组-存放的是字符
//	//指针数组-存放指针的数组
//	int* parr[5];//整型指针的数组
//	char* pch[5];//字符数组
//	return 0;
//}


//结构体初阶
//结构体类型的声明
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
};//s1,s2;//s1和s2也是结构体变量
//s1,s2是全局变量
//int main()
//{
//	//s是局部变量
//	struct Stu s = {{'w',20,3.14},"张三",30,"20220408"};//对象
//	//. ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//结构体传参
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
//	//写一个函数打印s的内容
//	struct Stu s = { {'w',20,3.14},"张三",30,"20220408" };
//	print(s);//传值调用    要重新开辟t内存空间
//	print1(&s);//传址调用  ps可以直接来改s且效率高
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////每一个函数调用 都会在内存的栈区上开辟一块空间！
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);//大多数从右向左传参 压栈操作
//	return 0;
//}
 