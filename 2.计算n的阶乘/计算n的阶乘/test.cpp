#include <stdio.h>
int main()
{
	int n=5;
	int i=n;
	for (n; n > 0; n--)
	{
		if(n==0) 
		 break;
		i = i*(n - 1);
	}
	printf("%d,i");
	return 0;
}