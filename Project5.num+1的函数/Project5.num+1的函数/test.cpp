#include <stdio.h>

void Add(int* p)//设置Add一元函数：指针变量p，void 能去掉返回值
{
	(*p)++;
	//注意符号优先级
}
int main()
{
	int num = 0;
	Add(&num);//调用传址参数
	printf("num=%d\n", num);//1
	Add(&num);//指针可以改变传址变量的参数
	printf("num=%d\n", num);//2
	Add(&num);
	printf("num=%d\n", num);//3
	return 0;
}