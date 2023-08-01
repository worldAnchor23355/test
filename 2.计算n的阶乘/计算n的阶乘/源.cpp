#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i;
	int k;
	printf("输入阶乘的数字:>");
	scanf_s("%d", &k);
		for (k, i = k; k > 1; k--)
		{
			i = i*(k - 1);
		}
	printf("数字为%d\n",i);

	return 0;

}