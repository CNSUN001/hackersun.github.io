#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>          

//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针
//返回的指针指向一个有一个int形参且返回int的函数
//int (*   (*F)(int, int))(int)

////下面哪个代码错误 D
//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	return 0;
//}
////A: p = arr 首元素地址
////B: (*ptr)[10] = &arr  数组指针
////C: p = &arr[0] 首元素地址
////D: p = &arr;


//如何定义一个int类型的指针数组，数组的个数为10个
//int *a[10]


//编程题
//1
//杨氏矩阵
//题目内容：
//有一个数据矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(n)；

//1 2 3 
//4 5 6
//7 8 9
//int main()//不符合时间复杂度  O(n^2)
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//查找一个数字 7
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == n)
//			{
//				flag = 1;
//				printf("%d行,%d列\n",i+1 ,j+1);
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("不存在\n");
//	}
//	return 0;
//}

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}

//1 2 3 
//4 5 6
//7 8 9
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = *px - 1;
//	int y = 0;
//	while (x >= 0 && y < *py)
//	{
//		if (arr[x][y] < k)
//		{
//			y++;
//		}
//		else if (arr[x][y] > k)
//		{
//			x--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//如果找到返回1，找不到返回0
//	//&x, &y
//	//1 传入参数
//	//2 带回值
//	int ret = find_num(arr, &x,&y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("%d行,%d列\n", x + 1, y + 1);
//	}
//	else
//	{
//		printf("找不到\n");
//
//	}
//	return 0;
//}

//int(* ((*p)[10])) (int*); 一个指向10个元素的数组指针，其中每个元素是一个函数指针，该函数的返回值是int，参数int*


//编程题
//左旋字符串
//实现一个函数，可以左旋字符串中的k个字符。
//列如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//  方法1
//void string_left_rotate(char* str,int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋一个字符
//		char tmp = *str;//1
//		//2 后面n-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3 把tmp放在最后
//		*(str + len - 1 ) = tmp;
//		
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}


// 方法2 
//字符串左旋可以等价与3次逆序  1 左边逆序 2 右边逆序 3整体逆序
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);//左
//	reverse(str + k, str + len -1);//右
//	reverse(str,str + len - 1);//全体
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";  //BA FEDC  ->CDEFAB
//	int k = 2;
//	string_left_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}  (程序员编程艺术)


//编程题
//写一个函数，判断一个字符串是否为另一个字符串旋转一行的字符串
//例如：给定s1 = AABCD 和 s2 = BCDAA 。返回1
//给定 s1 = abcd 和 s2 =ACBD 返回0
#include <string.h>
//暴力穷举法
//int is_string_left_rotate(char* str, char* str2)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		//每次左旋一个字符
//		char tmp = *str;//1
//		//2 后面n-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3 把tmp放在最后
//		*(str + len - 1) = tmp;
//
//		if (strcmp(str, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//优化
int is_string_left_rotate(char* str1, char* str2)
{
	//长度不同肯定不是旋转来的
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1 str1字符串的后边追加一个str1
	int len = strlen(str1);
	strncat(str1, str1, len);
	//AABCDAABCD
	//2 判断str2 是否为str1的子串
	char* ret = strstr(str1,str2);//判断一个函数是否是一个函数子串。返回子串地址，找不到返回空指针
	//AABCDAABCD
	//BCDAA
	//if (ret == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return 1;
	//}
	return ret != NULL;
}
int main()
{
	char arr1[20] = "AABCD";//AABCDAABCD追加一个相同的字符串,里面就包含了左旋的所有可能性
	
	char arr2[] = "BCDAA";
	int ret = is_string_left_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}

//int main()
//{
//	char arr[20] = "hello ";
//	//strcat(arr, "bit"); //strcat追加字符串 但是不可以给追加本身
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

//下列test函数设计正确的是：()
//char* arr[5] = {"hello" ,"bit" };
//test(arr);
// 1  void test(char** arr);
// 2  void test(char* arr[5]);

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	int a = *( * (aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4,1
//	return 0;
//}