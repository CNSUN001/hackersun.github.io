#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//����Ƿ�0 -1����
//	int age = 20;
//	/*if (age >= 18)
//		printf("adult\n");*/
//
//	if (age >= 18)
//		printf("adult\n");
//
//	else
//	{
//		printf("child\n");//elseĬ�Ͽ���һ�仰�������ʱҪʹ�ô����š�
//		printf("play chess\n");//һ��{ }����һ���߼���
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
//	else if (age >= 18 && age < 26)//&&�߼��� ǰ����Բ�д�����ֿɶ��Ը�
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
//	if (a == 1)//ִ��֮�󲻽���������F10���Բ鿴 ֱ��ת��return 0
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	//û�д�ӡ���κνṹ����Ϊelse�������ifƥ�䡣
//	return 0;
//}

//�Ƽ���Ŀ ������ <��������c c++���>


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
//}    ���ִ���ϰ�߸���


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
//	if(5 == num)//��������ǰ�������� num=5�Ĵ���
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
//		printf("����\n");
//	else
//		printf("ż��\n");
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
//	switch (day)//switchֻ�ܸ�����
//	{
//	case 1://case��ֻ�ܸ����ͳ���
//		printf("Monday\n");
//		break;//û��break�Ļ���һֱִ�е�switch����,break��������
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
//	switch (day)//switchֻ�ܸ�����   //switch����Ƕ��ʹ��
//	{
//	case 1://case��ֻ�ܸ����ͳ���
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
//	default://��case�����Ĭ��ֵ
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
//		//��whileѭ���� continue��������continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ�����´�ѭ��
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
//			break; //��whileѭ���� break����������ֹѭ����
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
//	while ((ch = getchar()) != EOF)//EOF - end of file -�ļ�������־ 
//	{
//		putchar(ch);//���һ���ַ�
//	} 
//	return 0;
//}
//


//int main()
//{
////
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//password �����飬������������ǵ�ַ�����Բ���ȡ��ַ
//	printf("��ȷ������(Y/N):>");
//   //��һ�ַ��� getchar();//����'\n'�����ܸ������   
//	//��������'password'ʱ����;����ո��Ĭ���������ݽ��� ���¿ո���� getchar()��ֱ�������� ��Ҳ��scanf�ľ����� ; gets����������������
//	//������Ҫ��������
//	
//	//�ڶ��ַ���
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//��ջ���������ַ�
//
//	}
//
//	int ch = getchar();
//	//ʵ���������롮password��\0
//	//���س�����getcharֱ��������\n ���´���
//	if(ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else 
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//���� 0-9 ���ַ�
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
//	int i = 1;//��ʼ��
//	while (i <= 10)//�жϲ���
//	{
//	
//	printf("%d\n", i);
//	i++; //��������
//
//
//	}
//	return 0;
//}
 

//  for ѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//��while�����ֶ�Ӧ ��ʼ��ֻ��һ��
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
//		i = 5; //forѭ�����������ڲ��ı�ѭ���������������ѭ������ʧȥ����
//	}
//
//
//	return 0;
//}


//forѭ����������ҿ���д��
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i < 10; i++) //��������ұղ����� for (i = 1; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}


 //for ѭ������

//int main()
//{
//	//forѭ�������ֶ�����ʡ�ԣ�����ʡ���жϲ��� ����Ϊ��ѭ����Ϊ�� ������ѭ��
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
//		//���ֳ���ʡ����j=0�����µ�һ��ѭ����ӡ���֮��j��ֵû�г�ʼ�����̶��޷�������ӡ
//	}
//
//}


//int main()
//
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //  &&�߼���
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) //k=0ѭ��Ϊ�٣�ѭ��û�н���
//	{
//		k++;
//	}
//		return 0;
//}



// do...whileѭ��
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
			continue;//��ѭ��
		printf("%d ", i);
		i++;
	} while (i <= 10);


	return 0;
}


