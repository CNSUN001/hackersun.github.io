//1 ��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�������ر�ɾԪ�ص�ֵ���ճ���ֵ�����һ��Ԫ���

bool del_Min(SqList &L,ElemType &value)
{
	if (L.length == 0)
	{
		return false;
	}
	value = L.data[0];
	int pos = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] < value)
		{
			value = L.data[i];
			pos = i;//��¼��Сֵλ��
		}
		
	}
	L.data[pos] = L.data[L.length - 1];
	L.length--;
	return true;
}

//2 ���һ����Ч�㷨����˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ临�Ӷ�O��1��
void reverse(SqList& L)
{
	if (L.length == 0)
	{
		return false;
	}
	int tmp = 0;
	for (int i = 0; i < L.length/2; i++)
	{
		tmp = L.data[i];
		L.data[i] = L.data[L.length - 1 - i];
		L.data[L.length - 1 - i] = tmp;
	}
}

//3 �Գ���Ϊn��˳���L����дһ��ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO��1����ɾ������ֵΪx������Ԫ��
//�ⷨ1 ��k��¼˳���L�в�����x�ĸ�����
void del_x_Min(SqList& L, ElemType x)
{
	int k = 0;
	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] != x)
		{
			L.data[k] = L.data[i];
			k++;
		}
	}
	L.length = k;
}

//�ⷨ2 ��k��¼˳���L�е���x�ĸ���
void del_x_Min(SqList& L, ElemType x)
{
	int k = 0;

	for (int i = 0; i < L.length; i++)
	{
		if (L.data[i] == x)
		{
			k++;
		}
		else
			L.data[i - k] = L.data[i];
		i++;
	}
	L.length = L.length - k;
}

//4 ������˳�����ɾ����ֵ�ڸ���ֵs��t֮�䣨Ҫ��s<t��������Ԫ�أ���s��t���������˳���Ϊ�գ�����ʾ������Ϣ���˳�����

//��������ɾ������һ������
bool del_s_t2(SqList& L, EleType s, EleType t)
{
	if (s >= t || L.length == 0)
	{
		return false;
	}
	for (int i = 0; i < L.length && L.data[i] < s; i++);//Ѱ�Ҵ���s�ĵ�һ��Ԫ��
	if (i >= L.length)
	{
		return false;//����Ԫ��ֵ��С��s������
	}
	for (j = i; j < L.length && L.data[j] <= t; j++);//Ѱ��ֵ����t�ĵ�һ��Ԫ��
	for (; j < L.length; i++, j++)
	{
		L.length[i] = L.length[j];//�Ѻ����j����i
	}
	L.length = i;
	return true;
}

//5 ��˳�����ɾ����ֵ�ٸ���ֵs��t֮�� (����s��t��Ҫ��s<t)����s��t�������˳���Ϊ�գ�����ʾ������Ϣ���˳����С�
bool del_s_t(Sqlist& L, EleType s, EleType t)
{
	int i = 0;
	int k = 0;
	if (s >= t || L.length == 0)
	{
		return false;
	}
	//�ҵ���һ�����ڵ���S��ֵ
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] >= s && L.data[i] <= t)
		{
			k++;
		}
		else
		{
			L.data[i - k] = L.data[i];
		}
	}
	L.length = L.length - k;
	return true;
}

//6. ������˳�����ɾ��������ֵ�ظ���Ԫ�أ� ʹ��������Ԫ�ص�ֵ����ͬ��
//bool Delete_Same(SeqList& L)
//{
//	int i = 0;
//	int k = 0;
//	if (L.length == 0)
//	{
//		return false;
//	}
//	for (i = 0; i < L.length - 1; i++)
//	{
//		if (L.data[i] == L.data[i + 1])
//		{
//			k++;
//		}
//		else
//		{
//			L.data[i - k] = L.data[i];
//		}
//	}
//	L.length = L.length - k;
//	return true;
//}

bool Delete_Same(SeqList& L)
{
	if (L.length == 0)
	{
		return false;
	}
	int i, j; //i�洢��һ������ͬ��Ԫ�أ�jΪ����ָ��
	for (i = 0, j = 1; j < L.length; j++)
	{
		if (L.data[i] != L.data[j])//������һ�����ϸ�Ԫ��ֵ��ͬ��Ԫ��
		{
			L.data[++i] = L.data[j];//�ҵ��󣬽�Ԫ��ǰ��
		}
	}
	L.length = i + 1;
	return true;
}


//7. ����������˳���ϲ�Ϊһ���µ�����˳������ɺ������ؽ��˳���
bool Merge(SeqList A, SeqList B, SeqList& C)
{
	if (A.length + B.length > C.maxSize) //����˳������󳤶�
		return false;
	int i = 0, j = 0, k = 0;
	while (i < A.length && j < B.length) //ѭ���������Ƚϣ�С�Ĵ���C
	{
		if (A.data[i] < B.data[j])
		{
			C.data[k++] = A.data[i++];
		}
		else
		{
			C.data[k++] = B.data[j++];
		}
	}
	while (i < A.length)			//���ۻ�ʣһ����û��������
		C.data[k++] = A.data[i++];
	while (j < B.length)
		C.data[k++] = B.data[j++];
	C.length = k;
	return true;
}


//8. ��֪��һά����A[m + n]�����δ���������Ա�(a1, a2, ��, a3,am)��(b1,b2, b3,bn)���Ա�
//	дһ��������������������˳����λ�û����� ����(b1, b2, b3, ����bn������(a1, a2, a3, ��,
//		��ǰ�档


//�㷨˼· �Ƚ�����ȫ�����ã��ٶ�ǰn��Ԫ�غͺ�m��Ԫ�طֱ�ʹ�������㷨
void Reverse(int arr[], int left, int right, int size)
{
	if (size < 0||left>=right||right>=size)
	{
		return;
	}
	int temp = 0;
	int mid = left + (right - left) / 2;
	for (int i = 0; i <=mid - left ; i++)
	{
		arr[left+i] = temp;
		arr[left+i] = arr[right-i];
		arr[right - i] = temp;
	}
}

void Exchange(int A[], int m, int n, int arraySize)
{
	//���ú���ʵ��3�η�ת
	Reverse(A, 0, m + n - 1, size);
	Reverse(A, 0, n - 1, size);
	Reverse(A, n, m + n - 1, size);

}

//9. ���Ա�(a1, a2, a3, ��, an)�е�Ԫ�ص��������Ұ�˳��洢�ڼ�����ڡ�Ҫ�����һ���㷨��
//���������ʱ���ڱ��в�����ֵΪx ��Ԫ�أ����ҵ�����������Ԫ��λ���ཻ����
//���Ҳ��������������в�ʹ����Ԫ���Ե�������
void SearchExchangeInsert(int A[], int x , int n)
{
	//ͨ�����ַ�����
	int left = 0;
	int right = n - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (rihgt - left) / 2;
		if ([A[mid] > x)
		{
			right = mid - 1;
		}
		else if (A[mid] < x)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (A[mid] == x && mid != n - 1)   //mid�����һ��Ԫ��ֱ��β��  �ҵ�����������Ԫ��λ���ཻ��
	{
		int temp = 0;
		A[mid] = temp;
		A[mid] = A[mid - 1];
		A[mid - 1] = temp;
	}
	if (low > high)
	{
		for (i = n - 1; i > high; i--)  //��Ϊ����ʧ�ܣ�����x�϶���A[high]�����Բ���Ҫ��һ�α���Ѱ�Ҳ���λ�� ����һ��ѭ��
			A[i + 1] = A[i];
		A[i + 1] = x;
	}
}