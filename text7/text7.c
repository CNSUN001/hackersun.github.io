#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//printf("c:\\test\\test.c");//  \tת���ַ���ת����ԭ������˼  \t��ˮƽ�Ʊ����
	//printf("ab\ncd");
	//printf("(are you ok??)");//vc6.0����ĸ""??)ת���]
	//printf("%c\n",'\'');//��������ż�\ת��
	//printf("%s\n", "abc");//%s��ӡ�ַ���
	//printf("%s\n", "a");
	//printf("%s\n", "\"");
	//printf("\a");// \a�����õ��Է�������һ��

	//  \ddd ddd��ʾ1-3���˽��Ƶ����֡��磺\130 x
	// dd��ʾ2��16�������֡��磺\x30 0

	printf("%d\n",'\130');  // 130��Ӧʮ����88
	printf("%d\n", '\101');// 101��Ӧʮ����65
	printf("%c\n", '\130'); //88��Ӧ��ASCII�� X
	printf("%c\n", '\101');//65��Ӧ��ASCII�� A
	printf("%d\n", '\x30');//30��Ӧ10����48
	printf("%c\n", '\x30');//48��ӦASCII��0

		return 0;
}                                                 