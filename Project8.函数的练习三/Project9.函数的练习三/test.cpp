#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��ϰ���ݣ���n�Ľ׳ˣ������������

int Facl(int n)
//ע�������n��main�����е�n�ǲ�ͬ�ģ�
//main�����е�nΪ�ֲ�������
//Facl�����е�nΪ���Σ���������������Facl�����У�ʹ�������ʧ�Ҳ���Ӱ��main����������n�ı仯��
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

//�����ǵݹ鷨�������ص�����

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
	printf("������Ҫ�׳˵�����(n)��");
	scanf("%d", &n);//�������ݴ������� n ��
	ret1 =Facl(n);//���ú���Facl����������Ϊn
	ret2 = Fac2(n);//�ݹ鷨�ĺ���ʹ�ã��𰸸��Ϸ���ע�ı�������ͬ
	printf("n=%d\n", ret1);
	printf(" �ݹ鷨n=%d\n", ret2);
	return 0;
}