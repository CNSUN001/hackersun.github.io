#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{//�ַ�������һ���ַ�-��˫�������������ַ�-��˫������������һ���ַ�
	/*"abcdef";
	"hello";*/
	//�ַ����Ľ�����־��һ��\0��ת���ַ�

	//�ַ�����-������һ����ͬ���͵�Ԫ��
	//char arr[]="hello";//hello����������һ��\0 �ǽ�����־
	char arr1[] = "abc";//abc\0
	char arr2[] = { 'a','b','c','\0'};//���û��'\0'�������ʾabc????
	//��ӡ�ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//��һ���ַ����ĳ���
	int len =strlen("abc");//string length û������ͷ�ļ��ᾯ��Ҫ����#include <string.h> "\0"����ֻ�ǽ�����־���㳤����
	printf("%d\n", len);
	printf("%d\n", strlen(arr2));//��ӡ15ʱ�����ֵ�ҵ�\0Ϊֹ
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));

	return 0;
}