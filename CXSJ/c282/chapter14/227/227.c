//功能：利用malloc函数分配结构体指针
//时间：2017年8月15日13:58:48
//关键：malloc的使用以及结构体的使用
//不足：动态分配内存函数除malloc外另外两个calloc和recalloc不熟悉
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	struct com
	{
		int num;
		char *name;
		int count;
		double price;
	}*commodity;
	commodity = (struct com*)malloc(sizeof(struct com));
	commodity->num = 1001;
	commodity->name = "苹果";
	commodity->count = 100;
	commodity->price = 2.1;
	printf("编号 = %d\n名称 = %s\n数量 = %d\n价格=%f\n",commodity->num,commodity->name,commodity->count,commodity->price);

	return 0;
}