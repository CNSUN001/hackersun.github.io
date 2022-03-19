#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针指针是变量类型，它的值是地址，它作为变量是可以变化的。地址是一个数值而已
//1 内存是怎么编号的
//2 一个这样的内存单元是多大空间

//32位 32根地址线-物理线-通电-1/0（正负电）2^32个编号 就是内存单元的地址相当于（门牌号）
//64位 64根地址线-物理线-通电-1/0

//电信号转换成数字信息：1和0组成的二进制序列
//假设一个内存单元是1bit 32位地址线就能管理2^32次方的bit空间
//4,294,967,296 bit= 536,870,912 Byte= 524,288KB = 512MB =0.5GB 随着时代发展一个bit位一个地址太小了，管理到bit位太细了
//后来一个字节位一个地址，一个内存单元的大小就是一个字节 一个字节给一个编号所以32位系统最大支持内存 0.5G*8=4G


//int main()
//{
//	int a = 10;//a在内存要分派空间--4个字节
//	//&a;//取四个地址中的第一个地址
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int*pa = &a;//pa用来存放地址的，在c语言中pa叫指针变量
//	 //*说明pa是指针变量
//	//int 说明pa执行的对象是int类型
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//
//	int* pa = &pa;//非常奇怪不建议
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//存地址的目的是为了以后可以找到a
//
//	*pa = 20;//解引用操作* *pa就是通过pa里的地址找到a
//	printf("%d\n", a);
//
//
//	return 0;
//}

//指针变量有多大
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//指针大小相同，指针用来存地址，指针需要多大空间，取决与地址需要多大空间
	//32bit-4byte
	//64bit-8byte

		return 0;
}