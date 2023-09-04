#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//练习内容：模拟strlen（）的函数的使用
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";//数组内容
	int len = my_strlen(arr);//arr是数据，数组传参，传过去的不是整个数组，而是一个元素的地址
	printf("len=%d\n", len);
	return 0;
}
//2023.8.29