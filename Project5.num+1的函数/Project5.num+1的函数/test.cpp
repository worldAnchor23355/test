#include <stdio.h>

void Add(int* p)//����AddһԪ������ָ�����p��void ��ȥ������ֵ
{
	(*p)++;
	//ע��������ȼ�
}
int main()
{
	int num = 0;
	Add(&num);//���ô�ַ����
	printf("num=%d\n", num);//1
	Add(&num);//ָ����Ըı䴫ַ�����Ĳ���
	printf("num=%d\n", num);//2
	Add(&num);
	printf("num=%d\n", num);//3
	return 0;
}