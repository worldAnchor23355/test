#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//练习内容：求第n个斐波那契数（不考虑溢出）

// 斐波那契数列：1 1 2 3 5 8 13 21 ......
//思路：当x≤1时 f（x）=1；
//      当x＞1时，f（x）=f（x）-1+f（x）-2

//Fib（）函数的创建
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//递归法（解决方案1）

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
//迭代法（解决方案2）


//函数的使用
int main()
{
	int n = 0;
	int ret1 = 0;
	int ret2 = 0;
	//TDD-测试驱动开发
	scanf("%d", &n);
	ret1 = Fib(n);
	ret2 = Fib2(n);
	printf("递归法=%d\n", ret1);
	printf("迭代法=%d\n", ret2);
	return 0;
}
//个人总结：
//递归法求的n的优点：使用的代码较少，使用简单；缺点；计算慢，可能会出现栈溢出
//迭代法求的n的优点；计算较快，效率较高；缺点；代码较长，使用的变量较多。

//2023.9.6