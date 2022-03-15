#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{//字符串就是一串字符-用双引号括起来的字符-用双引号括起来的一串字符
	/*"abcdef";
	"hello";*/
	//字符串的结束标志是一个\0的转义字符

	//字符数组-数组是一组相同类型的元素
	//char arr[]="hello";//hello后面隐藏了一个\0 是结束标志
	char arr1[] = "abc";//abc\0
	char arr2[] = { 'a','b','c','\0'};//如果没有'\0'则输出显示abc????
	//打印字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//求一下字符串的长度
	int len =strlen("abc");//string length 没有引用头文件会警告要引用#include <string.h> "\0"仅仅只是结束标志不算长度里
	printf("%d\n", len);
	printf("%d\n", strlen(arr2));//打印15时是随机值找到\0为止
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

	return 0;
}