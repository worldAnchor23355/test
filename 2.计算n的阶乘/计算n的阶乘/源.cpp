#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i;
	int k;
	printf("����׳˵�����:>");
	scanf_s("%d", &k);
		for (k, i = k; k > 1; k--)
		{
			i = i*(k - 1);
		}
	printf("����Ϊ%d\n",i);

	return 0;

}