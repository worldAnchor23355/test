//题目：计算2的1024次方
#include <stdio.h>
int main()
{
	long double result = 1.0;
	int i = 0;
	for (i = 0; i < 1024; i++)
	{
		result=result*2.0;
	}
	printf("result=%.0Lf\n", result);
	return 0;
}