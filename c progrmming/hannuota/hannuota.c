#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void mov(char pos1, char pos2)
{

	printf(" %c->%c ", pos1, pos2);

}

void han(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		mov(pos1, pos3);
	}
	else
	{
		han(n - 1, pos1, pos3, pos2);
		mov(pos1, pos3);
		han(n - 1, pos2, pos1, pos3);
	}
}

int main()
{
	int n=0;
	printf("«Î ‰»Î");
	scanf("%d",&n);
	han(n, 'a', 'b', 'c');
	

	return 0;
}