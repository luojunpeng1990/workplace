//功能：宏定义的使用
//时间：2017年8月22日22:04:08
//关键：大写标识符，没有分号
//不足：


#include<stdio.h>

#define A 8
#define B 6

int main(void)
{
	int AREA;
	AREA = A * B;
	printf("AREA = %d\n",AREA);
	return 0;
}