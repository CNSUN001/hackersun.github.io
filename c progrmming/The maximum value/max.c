#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0,b = 0;
//	scanf("%d %d", &a,&b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//
//
//	return 0;
//}


//建议使用函数解决办法
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;


}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = Max(a, b);
	printf("%d\n", m);

	return 0;
}