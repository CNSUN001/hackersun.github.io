#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//printf("c:\\test\\test.c");//  \t转义字符即转变了原来的意思  \t是水平制表符号
	//printf("ab\ncd");
	//printf("(are you ok??)");//vc6.0三字母""??)转义成]
	//printf("%c\n",'\'');//输出单引号加\转义
	//printf("%s\n", "abc");//%s打印字符串
	//printf("%s\n", "a");
	//printf("%s\n", "\"");
	//printf("\a");// \a可以让电脑蜂鸣器响一下

	//  \ddd ddd表示1-3个八进制的数字。如：\130 x
	// dd表示2个16进制数字。如：\x30 0

	printf("%d\n",'\130');  // 130对应十进制88
	printf("%d\n", '\101');// 101对应十进制65
	printf("%c\n", '\130'); //88对应的ASCII码 X
	printf("%c\n", '\101');//65对应的ASCII码 A
	printf("%d\n", '\x30');//30对应10进制48
	printf("%c\n", '\x30');//48对应ASCII码0

		return 0;
}                                                 