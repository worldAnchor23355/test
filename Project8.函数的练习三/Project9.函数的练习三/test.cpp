#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//练习内容：求n的阶乘（不考虑溢出）

int Facl(int n)
//注意这里的n与main（）中的n是不同的：
//main（）中的n为局部变量；
//Facl（）中的n为传参（仅限于在自身函数Facl（）中，使用完后消失且不会影响main（）函数中n的变化）
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

//以下是递归法，建议重点掌握

int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fac2(n - 1);
}

int main()
{
	int n = 0;
	int ret1 = 0;
	int ret2 = 0;
	printf("输入想要阶乘的数字(n)：");
	scanf("%d", &n);//输入内容传至整数 n 中
	ret1 =Facl(n);//调用函数Facl（），变量为n
	ret2 = Fac2(n);//递归法的函数使用，答案跟上方标注文本代码相同
	printf("n=%d\n", ret1);
	printf(" 递归法n=%d\n", ret2);
	return 0;
}