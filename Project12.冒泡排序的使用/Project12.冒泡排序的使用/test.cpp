#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//练习内容：用数组表示冒泡排序并使用其数组
//冒泡排序：重复地走访过要排序的元素列，依次比较两个相邻的元素，如果顺序（如从大到小、首字母从Z到A）错误就把他们交换过来。
//走访元素的工作是重复地进行，直到没有相邻元素需要交换，也就是说该元素列已经排序完成。
//例如：将数组arr[]={9,8,7,6,5,4,3,2,1,0}改变成arr[]={0，1，2，3，4，5，6，7，8，9}


void bubble_sort(int arr[], int sz)
{
	//冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
		//每趟冒泡排序
	{
		int flag = 0;
		int j = 0;//下标
		for (j = 0; j < sz - 1 - i; j++)

		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
				// 进行交换
			}
		}
	}
}
int main()
{
	int arr[] = { 9, 7, 8, 6, 5, 4, 3, 2, 1 ,0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}