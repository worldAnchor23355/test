#include <stdio.h>
//���ַ� ��Ԫ����binary_search(arr[],number,sz)
int binary_search(int arr[],int number,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < number)
		{
			left = mid + 1;
		}
		else if (arr[mid] > number)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
// ���ַ�������ʹ��
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//arr[] ����
	int sz= sizeof(arr) / sizeof(arr[0]);// ����Ԫ�ظ���
	int number = 2;//��������
	int ret = binary_search(arr, number, sz);//���ص��±�
	if (ret == -1)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n", ret);
	}
	return 0;
}