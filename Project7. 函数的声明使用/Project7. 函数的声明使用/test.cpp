#include <stdio.h>
#include "add.h"
//引用头文件add.h(只能引用头文件，源文件不可引用)
// 函数的调用 
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
