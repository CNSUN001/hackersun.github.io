#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));

	


	return 0;
}