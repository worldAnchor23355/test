#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个整数:");
    scanf("%d",&a);
	a%2;
	    if (a==1)
		{
			printf("%d为奇数\n",a);
		}
		else
		{
			printf("%d不是奇数\n",a);
		}

		return 0;
}