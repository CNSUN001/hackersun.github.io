#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>          

//����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ��
//���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ���
//int (*   (*F)(int, int))(int)

////�����ĸ�������� D
//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	return 0;
//}
////A: p = arr ��Ԫ�ص�ַ
////B: (*ptr)[10] = &arr  ����ָ��
////C: p = &arr[0] ��Ԫ�ص�ַ
////D: p = &arr;


//��ζ���һ��int���͵�ָ�����飬����ĸ���Ϊ10��
//int *a[10]


//�����
//1
//���Ͼ���
//��Ŀ���ݣ�
//��һ�����ݾ��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ���
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(n)��

//1 2 3 
//4 5 6
//7 8 9
//int main()//������ʱ�临�Ӷ�  O(n^2)
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//����һ������ 7
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
//				printf("%d��,%d��\n",i+1 ,j+1);
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("������\n");
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
//	//����ҵ�����1���Ҳ�������0
//	//&x, &y
//	//1 �������
//	//2 ����ֵ
//	int ret = find_num(arr, &x,&y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("%d��,%d��\n", x + 1, y + 1);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//
//	}
//	return 0;
//}

//int(* ((*p)[10])) (int*); һ��ָ��10��Ԫ�ص�����ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int������int*


//�����
//�����ַ���
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//  ����1
//void string_left_rotate(char* str,int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������һ���ַ�
//		char tmp = *str;//1
//		//2 ����n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3 ��tmp�������
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


// ����2 
//�ַ����������Եȼ���3������  1 ������� 2 �ұ����� 3��������
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
//	reverse(str, str + k - 1);//��
//	reverse(str + k, str + len -1);//��
//	reverse(str,str + len - 1);//ȫ��
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";  //BA FEDC  ->CDEFAB
//	int k = 2;
//	string_left_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}  (����Ա�������)


//�����
//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����תһ�е��ַ���
//���磺����s1 = AABCD �� s2 = BCDAA ������1
//���� s1 = abcd �� s2 =ACBD ����0
#include <string.h>
//������ٷ�
//int is_string_left_rotate(char* str, char* str2)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		//ÿ������һ���ַ�
//		char tmp = *str;//1
//		//2 ����n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3 ��tmp�������
//		*(str + len - 1) = tmp;
//
//		if (strcmp(str, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//�Ż�
int is_string_left_rotate(char* str1, char* str2)
{
	//���Ȳ�ͬ�϶�������ת����
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1 str1�ַ����ĺ��׷��һ��str1
	int len = strlen(str1);
	strncat(str1, str1, len);
	//AABCDAABCD
	//2 �ж�str2 �Ƿ�Ϊstr1���Ӵ�
	char* ret = strstr(str1,str2);//�ж�һ�������Ƿ���һ�������Ӵ��������Ӵ���ַ���Ҳ������ؿ�ָ��
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
	char arr1[20] = "AABCD";//AABCDAABCD׷��һ����ͬ���ַ���,����Ͱ��������������п�����
	
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
//	//strcat(arr, "bit"); //strcat׷���ַ��� ���ǲ����Ը�׷�ӱ���
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

//����test���������ȷ���ǣ�()
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