#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�۳�
int main()
{
	int n = 0;
	int i = 1;
	int s = 1;
	scanf("%d", &n);
	while (i <= n)
	{
		
		s = s * i;
		i++;
		
	
	}
	printf("%d\n", s);

	return 0;
}

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
//int main()//��һ������
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
//		s = 1;//��ʼ��1
//		for (i=1; i <= n; i++)
//		{
//			
//			s *= i; //s = s * i
//		
//			//�ֱ����ÿ��Ԫ�صĽ׳�
//		}
//		ret += s; //ret = ret + s
//		
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//һ��forѭ��ʵ�� �Ż��㷨
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



//���ַ����۰���ң�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =  17;//Ҫs���ҵ�����
//	//��arr������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
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
//			left = mid + 1;//����ȷ�����±�
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

//���ַ�
//int main()
//{
//	int n = 0;
//	printf("������Ҫ�����ֵ��");
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
//			printf("�Ѿ��ҵ�:%d\n", mid);
//			break;
//		}
//		
//	}
//
//	if (left > right)
//	{
//		printf("�����ֵ����");
//	}
//
//	return 0;
//}


//#include <string.h>
//#include  <windows.h>
//
////����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	int left = 0;//�������±�
//	int right = strlen(arr1) - 1; //�������±�
//
//	while (left<=right)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		printf("%s\n", arr2);//%s�ַ����͸�ʽ��
//		Sleep(1000);//<window.h>  windows ʹ��Sleep������Ϊ����  ˯��1s
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	
//	return 0;
//}



//#include <string.h>
////����¼3�ε�����ϵͳ
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ�����123456��
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//if (password=="123456")//err �������ַ����Ƚϣ�����ʹ��==��Ӧ����strcmp
//		if (strcmp(password, "123456")== 0)
//			//strcmp �ж�password �� 123456�Ƿ����  ���ʱȶ�Ӧλ��ASCII��
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�����������");
//	}
//	return 0;
//}