#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ϰ���ݣ����n��쳲��������������������

// 쳲��������У�1 1 2 3 5 8 13 21 ......
//˼·����x��1ʱ f��x��=1��
//      ��x��1ʱ��f��x��=f��x��-1+f��x��-2

//Fib���������Ĵ���
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//�ݹ鷨���������1��

int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//���������������2��


//������ʹ��
int main()
{
	int n = 0;
	int ret1 = 0;
	int ret2 = 0;
	//TDD-������������
	scanf("%d", &n);
	ret1 = Fib(n);
	ret2 = Fib2(n);
	printf("�ݹ鷨=%d\n", ret1);
	printf("������=%d\n", ret2);
	return 0;
}
//�����ܽ᣺
//�ݹ鷨���n���ŵ㣺ʹ�õĴ�����٣�ʹ�ü򵥣�ȱ�㣻�����������ܻ����ջ���
//���������n���ŵ㣻����Ͽ죬Ч�ʽϸߣ�ȱ�㣻����ϳ���ʹ�õı����϶ࡣ

//2023.9.6