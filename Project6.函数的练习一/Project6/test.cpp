#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//练习内容：将每个输入的无符号数打印出逐个数字
//例如：输入1234 输出1 2 3 4


//创建递归函数print（）
void print(int n)//①
{
	if (n > 9)//未满足该条件后继续②
	{
		print(n / 10);//计算结束后继续调用①
	}
	printf("%d ", n % 10);//②
}

//函数的使用
int main()
{
	unsigned int num = 0;
	scanf("%d",&num);//扫描输入内容
	print(num);
	return 0;
}



//思路如下：
//scanf()扫描输入数字（注意只能是无符号数）--> 调用print（）-->除以n（n为num的内容）-->超出if（）条件后向下进行打印printf（）-->n进行取模-->之后返回之前的数-->取得结果
//其函数本质相当于套娃（递归思想）
//2023.8.29