#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//copy input to output; 1st version

//int main()
//{
//	int c;
//	c = getchar();
//	while (c != EOF)//EOF end of file 定义在<stdio.h>里
//	{
//		putchar(c);
//		c = getchar();
//	}
//	return 0;
//
//}

//int main()
//
//{
//	int c;
//	while (c = getchar() != EOF)
//
//		putchar(c);
//	
//	return 0;
//}


//int main()
//
//{
//	int c;
//	scanf("%d\n", &c);
//	while (c != EOF)
//		printf("%d\n",c);
//
//
//	return 0;
//}


int main()
{
	int c;
	c = EOF;
	printf("EOF= %d\n", c);


	return 0;

}