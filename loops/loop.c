#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//真就是非0 -1是真
//	int age = 20;
//	/*if (age >= 18)
//		printf("adult\n");*/
//
//	if (age >= 18)
//		printf("adult\n");
//
//	else
//	{
//		printf("child\n");//else默认控制一句话，多语句时要使用大括号。
//		printf("play chess\n");//一个{ }代表一个逻辑。
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int age = 70;
//
//	if (age < 18)
//		printf("child");
//	else if (age >= 18 && age < 26)//&&逻辑与 前面可以不写，这种可读性高
//		printf("teenager");
//	else if (age >= 26 && age < 40)
//		printf("grown");
//	else if (age >= 40 && age < 60)
//		printf("adult");
//	else if (age >= 60 && age < 100)
//		printf("older");
//	else
//		printf(" older older");
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//执行之后不进入后面程序，F10调试查看 直接转到return 0
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	//没有打印出任何结构。因为else和最近的if匹配。
//	return 0;
//}

//推荐数目 代码风格 <高质量的c c++编程>


//
//if (condition)
//{
//	return x;
//}
//return y;


//if (condition)
//{
//	return x;
//}
//{
//	return y;
//}    这种代码习惯更好


//
//int test()
//{
//	if (0)
//		return 0;
//	printf("hehe\n");
//	return 1;
//
//}
//

//int main()
//{
//	test();
//
//	return 0;
//}


//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)//常量放在前面避免出现 num=5的错误
//		printf("hehe\n");
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 == n % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//
//	for (n ;n <= 100;n++)
//	{
//			if (1 == n % 2)
//			printf("%d\n", n);
//
//
//	}
//
//
//		return 0;
//}
//


//int main()
//
//
//{
//	int n = 1;
//	for (n; n<101; n += 2)
//{
//	printf("%d\n", n);
//}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch只能跟整型
//	{
//	case 1://case后只能跟整型常量
//		printf("Monday\n");
//		break;//没有break的话会一直执行到switch结束,break决定出口
//
//	case 2:
//		printf("Tuesday\n");
//		break;
//
//	case 3:
//		printf("Wednesday\n");
//		break;
//
//	case 4:
//		printf("Thursday\n");
//		break;
//
//	case 5:
//		printf("Friday\n");
//		break;
//
//	case 6:
//		printf("Saturday\n");
//		break;
//
//	case 7:		
//		printf("Sunday\n");
//		break;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch只能跟整型   //switch允许嵌套使用
//	{
//	case 1://case后只能跟整型常量
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Workday\n");
//		break;
//
//	case 6:
//	case 7:		
//		printf("Weekend\n");
//		break;
//	default://除case以外的默认值
//		printf("wrong\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	if (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue; 
//		//在while循环中 continue跳过本次continue后面的代码，直接去判断部分，看是否进行下次循环
//		printf("%d\t", i);
//		i++;
//	}
// return 0;
//	}

//
//	int main()
//	{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break; //在while循环中 break用于永久终止循环。
//		printf("%d\t", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF - end of file -文件结束标志 
//	{
//		putchar(ch);//输出一个字符
//	} 
//	return 0;
//}
//


//int main()
//{
////
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//password 是数组，数组名本身就是地址，所以不再取地址
//	printf("请确认密码(Y/N):>");
//   //第一种方案 getchar();//处理'\n'，不能根本解决   
//	//当在输入'password'时若中途输入空格会默认输入数据结束 导致空格进入 getchar()。直接输出结果 这也是scanf的局限性 ; gets函数可以输入整行
//	//所以需要清理缓冲区
//	
//	//第二种方案
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//清空缓冲区多个字符
//
//	}
//
//	int ch = getchar();
//	//实际输入密码‘password’\0
//	//按回车导致getchar直接拿走了\n 导致错误
//	if(ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else 
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//输入 0-9 的字符
//int main()
//{
//
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断部分
//	{
//	
//	printf("%d\n", i);
//	i++; //调整部分
//
//
//	}
//	return 0;
//}
 

//  for 循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//与while三部分对应 初始化只有一次
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		else
//		printf("%d\n", i);
//	}
//
//
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		else
//			printf("%d\n", i);
//
//
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++ )
//	{
//		printf("%d ", i);
//		i = 5; //for循环尽量不在内部改变循环变量，会出现死循环，或失去控制
//	}
//
//
//	return 0;
//}


//for循环建议左闭右开的写法
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i < 10; i++) //对于左闭右闭不建议 for (i = 1; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}


 //for 循环变种

//int main()
//{
//	//for循环三部分都可以省略，但是省略判断部分 会认为该循环恒为真 陷入死循环
//	for (; ;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//		 printf("hehe\n");
//		 }
//	}
//
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//		//这种程序省略了j=0，导致第一次循环打印完成之后，j的值没有初始化，继而无法继续打印
//	}
//
//}


//int main()
//
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //  &&逻辑与
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) //k=0循环为假，循环没有进入
//	{
//		k++;
//	}
//		return 0;
//}



// do...while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//
//	return 0;
//}

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;//死循环
		printf("%d ", i);
		i++;
	} while (i <= 10);


	return 0;
}


