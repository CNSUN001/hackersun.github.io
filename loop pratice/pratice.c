#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�۳�
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

//��д�������1-100���ٳ��ֶ��ٸ�9
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

//����1/1-1/2+1/3-1/4...+1/99-1/100
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

//��10���������ֵ
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];//ע�⵱����Ϊ����ʱ�����maxȡ0�޷��õ����ֵ
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

//�˷��ھ���
//int main()
//{
//	int i = 1;
//	//����
//	for (i = 1; i < 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		//����
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ֲ����Բ�
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
//		printf("�����ֵ����" );
//	}
//	return 0;
//}