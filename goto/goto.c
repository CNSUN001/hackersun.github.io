#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//c语言中提供了可以随意滥用的goto语句和标记挑战的标号
//理论上goto语句是没有必要的，实际中完全可以不使用goto语句
//goto语句往往很危险不建议使用

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag;  //调整到flag
//	return 0;
//}
//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入;I am pig 就取消关机
// shutdown -s -t -60 在60s后关机
//shutdown -a取消关机
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	//关机
//	//c语言提供了一个函数：system()-执行系统命令
//	char input[20] = { 0 };
//	system ("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪 取消关机\n");
//	scanf("%s",input);
//	if (strcmp(input,"我是猪")==0)	
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪 取消关机\n");
		system("shutdown -s -t 60");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
//goto语句在面对3层以上的循环时，跳出循环才是正确使用方式 其他不建议使用 且goto不能跨函数跳转