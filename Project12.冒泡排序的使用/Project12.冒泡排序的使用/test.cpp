#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ϰ���ݣ��������ʾð������ʹ��������
//ð�������ظ����߷ù�Ҫ�����Ԫ���У����αȽ��������ڵ�Ԫ�أ����˳����Ӵ�С������ĸ��Z��A������Ͱ����ǽ���������
//�߷�Ԫ�صĹ������ظ��ؽ��У�ֱ��û������Ԫ����Ҫ������Ҳ����˵��Ԫ�����Ѿ�������ɡ�
//���磺������arr[]={9,8,7,6,5,4,3,2,1,0}�ı��arr[]={0��1��2��3��4��5��6��7��8��9}


void bubble_sort(int arr[], int sz)
{
	//ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
		//ÿ��ð������
	{
		int flag = 0;
		int j = 0;//�±�
		for (j = 0; j < sz - 1 - i; j++)

		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
				// ���н���
			}
		}
	}
}
int main()
{
	int arr[] = { 9, 7, 8, 6, 5, 4, 3, 2, 1 ,0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}