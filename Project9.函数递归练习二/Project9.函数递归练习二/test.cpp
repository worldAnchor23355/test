#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ϰ���ݣ�ģ��strlen�����ĺ�����ʹ��
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";//��������
	int len = my_strlen(arr);//arr�����ݣ����鴫�Σ�����ȥ�Ĳ����������飬����һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}
//2023.8.29