#define Initsize 10
#include <stdlib.h>
#include <stdio.h>

//��װ����--˳���Ĵ�������̬��
typedef struct{
	int *data;//��ŵ����ݣ�int��ָ�����飩
	int MaxSize;//�������
	int length;//��ǰ����
}Seqlist;

//��װ����--��̬˳���������󳤶�
void IncreaseSeqlistsize(Seqlist &L, int len){
	int*p = L.data;//�½������ڴ�
	L.data = (int*)malloc((L.MaxSize + len)*sizeof(int));//�����ڴ�
	for (int i = 0; i <L.length; i++){//��ÿ�����ݰ������¸��Ƶ��ڴ����
		L.data[i] = p[i];//����˳����ÿ��Ԫ��
	}
	L.MaxSize = L.MaxSize+ len;//�޸Ĳ���
	free(p);//ɾ��ԭ����˳���
}

//��װ����--��ʼ��˳���(��̬)
void InitSeqList(Seqlist &L){
	L.data = (int*)malloc(Initsize*sizeof(int)); //��L����һ����СInitsize*sizeof(int)���ڴ�飬��������Ϊint*
	L.length = 0;
	L.MaxSize = Initsize;
}

//��װ����--����˳���Ԫ��
bool ListInsert(Seqlist &L, int i, int e){
	if (i<1 || i>L.length + 1)//��֤λȨiλ����˳����ȷ�Χ��
	return false;
	if (L.length >= L.MaxSize)
	return false;
	for (int j = L.length; j >= i; j--)//��λȨi���ÿ��Ԫ��������
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//��i�����Ԫ��
	L.length=L.length+1;//��ǰ��������1
	printf("����Ԫ��%d�ɹ�\n",e);//��ʾ���
	return true;
}

//��װ����--ɾ��˳���Ԫ��
bool ListDelete(Seqlist &L, int i){
	if (i<1 || i>L.length)//��֤λȨiλ����˳����ȷ�Χ��
	return false;
	for (int j =i;j<L.length;j++)//��λȨi���ÿ��Ԫ����ǰ��
		L.data[j - 1] = L.data[j];
	L.data[L.length - 1] = NULL;//ɾ�����λ�õĶ���Ԫ��
	L.length = L.length - 1;//��ǰ���ȼ���1
	printf("��ɾ����%dλԪ��\n", i);//��ʾ���
	return true;
}

//˳���λȨ����
void GetElembit(Seqlist &L, int i){
	if (i <= L.length&&i>0){
		printf("�ҵ���%dλ��Ԫ��%d\n", i, L.data[i - 1]);
	}
	else
		printf("λ�ò��Ϸ�\n");
}
//˳���ֵ����
void GetElem(Seqlist &L, int e){
	for (int i = 0; i <= L.length; i++){//����ÿ��λ��Ԫ�ص�ֵ
		if (e == L.data[i]){
			printf("�ҵ�Ԫ��%d���ڵ�%dλ\n", e, i + 1);
			return;
		}
	}
	printf("Ԫ��δ�ҵ�\n");
}

//������(˳����ʼ��������ɾ��顱ʹ����)
int main(){
	Seqlist L;
	InitSeqList(L);
	//��ʼ��˳���
	IncreaseSeqlistsize(L, 10);
	//�������Ա���󳤶�10
	ListInsert(L, 1, 10);
	ListInsert(L, 2, 12);
	ListInsert(L, 3, 13);
	//��˳����ﰴ˳�����10��11��12��������
	printf("����ǰ%d %d %d\n", L.data[0], L.data[1], L.data[2]);
	//��֤���
	ListInsert(L, 2, 11);
	//��˳���ĵڶ�λ����Ԫ��11
	printf("�����%d %d %d %d\n", L.data[0], L.data[1], L.data[2],L.data[3]);
	//��֤���
	ListDelete(L, 1);
	//ɾ����һλԪ��
	printf("ɾ����%d %d %d %d\n", L.data[0], L.data[1], L.data[2], L.data[3]);
	//��֤���
	GetElembit(L, 2);
	//����˳���L�ڶ�λԪ��
	GetElem(L, 12);
	//����˳���L��Ԫ��12
	return 0;
}