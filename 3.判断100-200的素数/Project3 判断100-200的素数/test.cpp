#include <stdio.h>

int is_prime(int n)
{
	// �ж�����
	int j = 0;
	for (j = 2; j < n; j++)
	{
			if (n%j == 0)
				return 0;
	}
return 1;
}

int main()
{
        //��ӡ100-200������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}