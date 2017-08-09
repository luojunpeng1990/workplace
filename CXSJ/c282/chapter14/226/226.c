//功能：为二维数组动态分配内存
//时间：2017年8月9日11:10:31
//关键点：malloc的使用及二维数组的内存分布，很重要
//不足：对二维数组的内存地址与指针对应关系不明晰
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int **pArray2;
	int iIndex1,iIndex2;
	pArray2 = (int **)malloc(sizeof(int*[3]));
	for(iIndex1 = 0;iIndex1 < 3;iIndex1++)
	{
	    *(pArray2+iIndex1) = (int*)malloc(sizeof(int[3]));
		for(iIndex2 = 0;iIndex2 < 3;iIndex2++)
		{
			*(*(pArray2+iIndex1)+iIndex2) = iIndex1 + iIndex2;

		}

	}

	for(iIndex1 =0;iIndex1 < 3;iIndex1++)
	{
		for(iIndex2 = 0;iIndex2 < 3;iIndex2++)
		{
			printf("%d\t",*(*(pArray2+iIndex1)+iIndex2));

		}
		printf("\n");
	}

	return 0;
}
