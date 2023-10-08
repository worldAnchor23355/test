#define Initsize 10
#include <stdlib.h>
#include <stdio.h>

//封装函数--顺序表的创建（动态）
typedef struct{
	int *data;//存放的数据（int型指针数组）
	int MaxSize;//最大容量
	int length;//当前长度
}Seqlist;

//封装函数--动态顺序表增加最大长度
void IncreaseSeqlistsize(Seqlist &L, int len){
	int*p = L.data;//新建所需内存
	L.data = (int*)malloc((L.MaxSize + len)*sizeof(int));//增加内存
	for (int i = 0; i <L.length; i++){//将每个数据搬入至新复制的内存块中
		L.data[i] = p[i];//复制顺序表的每个元素
	}
	L.MaxSize = L.MaxSize+ len;//修改参数
	free(p);//删除原来的顺序表
}

//封装函数--初始化顺序表(动态)
void InitSeqList(Seqlist &L){
	L.data = (int*)malloc(Initsize*sizeof(int)); //给L划分一个大小Initsize*sizeof(int)的内存块，返回类型为int*
	L.length = 0;
	L.MaxSize = Initsize;
}

//封装函数--插入顺序表元素
bool ListInsert(Seqlist &L, int i, int e){
	if (i<1 || i>L.length + 1)//保证位权i位置在顺序表长度范围内
	return false;
	if (L.length >= L.MaxSize)
	return false;
	for (int j = L.length; j >= i; j--)//将位权i后的每个元素往后移
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//在i处添加元素
	L.length=L.length+1;//当前长度增加1
	printf("插入元素%d成功\n",e);//显示结果
	return true;
}

//封装函数--删除顺序表元素
bool ListDelete(Seqlist &L, int i){
	if (i<1 || i>L.length)//保证位权i位置在顺序表长度范围内
	return false;
	for (int j =i;j<L.length;j++)//将位权i后的每个元素往前移
		L.data[j - 1] = L.data[j];
	L.data[L.length - 1] = NULL;//删除最后位置的多余元素
	L.length = L.length - 1;//当前长度减少1
	printf("已删除第%d位元素\n", i);//显示结果
	return true;
}

//顺序表按位权查找
void GetElembit(Seqlist &L, int i){
	if (i <= L.length&&i>0){
		printf("找到第%d位的元素%d\n", i, L.data[i - 1]);
	}
	else
		printf("位置不合法\n");
}
//顺序表按值查找
void GetElem(Seqlist &L, int e){
	for (int i = 0; i <= L.length; i++){//查找每个位置元素的值
		if (e == L.data[i]){
			printf("找到元素%d，在第%d位\n", e, i + 1);
			return;
		}
	}
	printf("元素未找到\n");
}

//主函数(顺序表初始化，“增删插查”使用例)
int main(){
	Seqlist L;
	InitSeqList(L);
	//初始化顺序表
	IncreaseSeqlistsize(L, 10);
	//增加线性表最大长度10
	ListInsert(L, 1, 10);
	ListInsert(L, 2, 12);
	ListInsert(L, 3, 13);
	//往顺序表里按顺序插入10、11、12三个数字
	printf("插入前%d %d %d\n", L.data[0], L.data[1], L.data[2]);
	//验证结果
	ListInsert(L, 2, 11);
	//往顺序表的第二位插入元素11
	printf("插入后%d %d %d %d\n", L.data[0], L.data[1], L.data[2],L.data[3]);
	//验证结果
	ListDelete(L, 1);
	//删除第一位元素
	printf("删除后%d %d %d %d\n", L.data[0], L.data[1], L.data[2], L.data[3]);
	//验证结果
	GetElembit(L, 2);
	//查找顺序表L第二位元素
	GetElem(L, 12);
	//查找顺序表L的元素12
	return 0;
}