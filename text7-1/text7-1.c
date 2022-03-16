#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\328\test.c"));//14 8不可能是8进制
	printf("%d\n", strlen("\328"));//2

	return 0;

}