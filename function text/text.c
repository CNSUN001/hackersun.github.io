#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 1;
//	b = 2;
//}
//int main()
//{
//	test();
//	return 0;
//}

//判断闰年
//int year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0))
//	{
//		return 1;
//	}
//	else if (n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (year(n) == 1)
//	{
//		printf("是润年");
//
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//交换数
//void exchange(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	exchange(&a, &b);
//	printf("\n%d %d", a, b);
//	return 0;
//}

//打印任意行数的乘法口诀表
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	//函数的起名也很关键，名字最好体现函数的功能
	return 0;
}

//打印每一位数
//int print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	
//		printf("%d ", n % 10);
//	
//}
//int main()
//{
//	 int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//递归计算阶乘方法
//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串长度。
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//字符串逆序 
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//
//}

//循环实现
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right =my_strlen(str)-1;
//	while (left < right)
//	{
//		char tmp = *(str + left);//str[left]
//		*(str + left)=*(str + right);//str[left] = str[right];
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//递归实现
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str=*(str + len - 1);
//	*(str + len - 1) = '\0';
//	printf("%d\n", my_strlen(str + 1));
//	if (my_strlen(str + 1) > 2)//if(len>1) error
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr [] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//求每位数字之和 1729  1+7+2+8=20
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return  DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n* Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//斐波那契数复习 1 1 2 3 5 8 13 21 34...
//int Feb(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//		return Feb(n - 1) + Feb(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Feb(n);
//	printf("%d",ret);
//	return 0;
//}