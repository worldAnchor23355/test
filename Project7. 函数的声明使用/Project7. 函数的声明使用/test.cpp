#include <stdio.h>
#include "add.h"
//����ͷ�ļ�add.h(ֻ������ͷ�ļ���Դ�ļ���������)
// �����ĵ��� 
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
