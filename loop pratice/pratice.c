#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//累乘
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		
//		s = s * i;
//		i++;
//		
//	
//	}
//	printf("%d\n", s);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		s = s * i;
//	}
//
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	scanf("%d", &n);
//
//	do
//	{
//		s = s * i;
//		i++;
//	} while (i <= n);
//	printf("%d\n", s);
//
//	return 0;
//}

//1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
//int main()//第一个程序
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		
//		for (i ; i <= n; i++)
//		{
//			printf("%d\n", i);
//			printf("%d\n", s);
//			s *= i; //s = s * i
//			printf("%d\n", s);
//			
//		}
//		ret += s; //ret = ret + s
//		printf("%d\n", ret);
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		s = 1;//初始化1
//		for (i=1; i <= n; i++)
//		{
//			
//			s *= i; //s = s * i
//		
//			//分别计算每个元素的阶乘
//		}
//		ret += s; //ret = ret + s
//		
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//一层for循环实现 优化算法
//int main()
//{
//	int n = 0;
//	int s = 1;
//	int ret = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		s *= n;
//		ret += s;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//二分法（折半查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =  17;//要s查找的数字
//	//在arr这个有序数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;//重新确定左下标
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("fought it:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("can't find\n");
//	}
//
//
//	return 0;
//}

//二分法
//int main()
//{
//	int n = 0;
//	printf("输入你要输入的值：");
//	scanf("%d", &n);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("已经找到:%d\n", mid);
//			break;
//		}
//		
//	}
//
//	if (left > right)
//	{
//		printf("输入的值有误！");
//	}
//
//	return 0;
//}


//#include <string.h>
//#include  <windows.h>
//
////多个字符冲两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;//设置左下标
//	int right = strlen(arr1) - 1; //设置右下标
//
//	while (left<=right)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		printf("%s\n", arr2);//%s字符串型格式符
//		Sleep(1000);//<window.h>  windows 使用Sleep，参数为毫秒  睡眠1s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	
//	return 0;
//}



//#include <string.h>
////最多登录3次的密码系统
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串“123456”
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if (password=="123456")//err —两个字符串比较，不能使用==，应该用strcmp
//		if (strcmp(password, "123456")== 0)
//			//strcmp 判断password 和 123456是否相等  本质比对应位置ASCII码
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次密码错误");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//		return 0;
//}

//编写程序计算1-100多少出现多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//		 if (i / 10 == 9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4...+1/99-1/100
//int main()
//{
//	int i = 0;
//	double n = 0;
//	double s = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n = 1.0 / i;
//		if (i % 2 == 0)
//		{
//			s = s - n;
//		}
//		else
//		{
//			s = s + n;
//		}
//	
//	}
//	printf("%f\n", s);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += flag* 1.0 / i;
//			flag = -flag;
//		
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//求10个整数最大值
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];//注意当整数为负数时，如果max取0无法得到最大值
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//乘法口诀表
//int main()
//{
//	int i = 1;
//	//行数
//	for (i = 1; i < 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		//列数
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分查找自测
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int left = 0;
//	int right = 9;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//			printf("left=%d\n ", left);
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//			printf("right=%d \n",right);
//		}
//		else 
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	
//	}
//	if (left > right)
//	{
//		printf("输入的值有误" );
//	}
//	return 0;
//}