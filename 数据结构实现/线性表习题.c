//1 从顺序表中删除具有最小值的元素（假设唯一）并返回被删元素的值，空出的值由最后一个元素填补

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
			pos = i;//记录最小值位置
		}
		
	}
	L.data[pos] = L.data[L.length - 1];
	L.length--;
	return true;
}

//2 设计一个高效算法，将顺序表L的所用元素逆置，要求算法的空间复杂度O（1）
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

//3 对长度为n的顺序表L，编写一个时间复杂度为O(n),空间复杂度为O（1），删除所有值为x的数据元素
//解法1 用k记录顺序表L中不等于x的个数，
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

//解法2 用k记录顺序表L中等于x的个数
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

//4 从有序顺序表中删除其值在给定值s与t之间（要求s<t）的所有元素，若s或t不不合理或顺序表为空，则显示出错信息并退出运行

//有序数组删除的是一个整体
bool del_s_t2(SqList& L, EleType s, EleType t)
{
	if (s >= t || L.length == 0)
	{
		return false;
	}
	for (int i = 0; i < L.length && L.data[i] < s; i++);//寻找大于s的第一个元素
	if (i >= L.length)
	{
		return false;//所有元素值均小于s，返回
	}
	for (j = i; j < L.length && L.data[j] <= t; j++);//寻找值大于t的第一个元素
	for (; j < L.length; i++, j++)
	{
		L.length[i] = L.length[j];//把后面的j填上i
	}
	L.length = i;
	return true;
}

//5 从顺序表中删除其值再给定值s与t之间 (包含s和t，要求s<t)，若s或t不合理或顺序表为空，则显示出错信息并退出运行。
bool del_s_t(Sqlist& L, EleType s, EleType t)
{
	int i = 0;
	int k = 0;
	if (s >= t || L.length == 0)
	{
		return false;
	}
	//找到第一个大于等于S的值
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

//6. 从有序顺序表中删除所有其值重复的元素， 使表中所有元素的值均不同。
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
	int i, j; //i存储第一个不相同的元素，j为工作指针
	for (i = 0, j = 1; j < L.length; j++)
	{
		if (L.data[i] != L.data[j])//查找下一个与上个元素值不同的元素
		{
			L.data[++i] = L.data[j];//找到后，将元素前移
		}
	}
	L.length = i + 1;
	return true;
}


//7. 将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。
bool Merge(SeqList A, SeqList B, SeqList& C)
{
	if (A.length + B.length > C.maxSize) //大于顺序表的最大长度
		return false;
	int i = 0, j = 0, k = 0;
	while (i < A.length && j < B.length) //循环，两两比较，小的存入C
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
	while (i < A.length)			//讨论还剩一个表没比完的情况
		C.data[k++] = A.data[i++];
	while (j < B.length)
		C.data[k++] = B.data[j++];
	C.length = k;
	return true;
}


//8. 已知在一维数组A[m + n]中依次存放两个线性表(a1, a2, …, a3,am)和(b1,b2, b3,bn)。试编
//	写一个函数，将数组中两个顺序表的位置互换， 即将(b1, b2, b3, …，bn）放在(a1, a2, a3, …,
//		的前面。


//算法思路 先将数组全部逆置，再对前n个元素和后m个元素分别使用逆置算法
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
	//调用函数实现3次翻转
	Reverse(A, 0, m + n - 1, size);
	Reverse(A, 0, n - 1, size);
	Reverse(A, n, m + n - 1, size);

}

//9. 线性表(a1, a2, a3, …, an)中的元素递增有序且按顺序存储于计算机内。要求设计一个算法，
//完成用最少时间在表中查找数值为x 的元素，若找到，则将其与后继元素位置相交换，
//若找不到，则将其插入表中并使表中元素仍递增有序。
void SearchExchangeInsert(int A[], int x , int n)
{
	//通过二分法查找
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
	if (A[mid] == x && mid != n - 1)   //mid是最后一个元素直接尾插  找到，则将其与后继元素位置相交换
	{
		int temp = 0;
		A[mid] = temp;
		A[mid] = A[mid - 1];
		A[mid - 1] = temp;
	}
	if (low > high)
	{
		for (i = n - 1; i > high; i--)  //因为查找失败，所以x肯定比A[high]大，所以不需要再一次遍历寻找插入位置 简化了一次循环
			A[i + 1] = A[i];
		A[i + 1] = x;
	}
}