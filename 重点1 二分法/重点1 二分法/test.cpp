#include <stdio.h>
//二分法 三元函数binary_search(arr[],number,sz)
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
// 二分法函数的使用
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//arr[] 数组
	int sz= sizeof(arr) / sizeof(arr[0]);// 计算元素个数
	int number = 2;//查找数字
	int ret = binary_search(arr, number, sz);//返回的下标
	if (ret == -1)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("找到了，下标是:%d\n", ret);
	}
	return 0;
}