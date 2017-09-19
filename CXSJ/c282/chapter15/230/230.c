//功能：编写头文件包含圆面积计算公式
//时间：2017年9月3日22:23:32
//关键：C语言文件结构，头文件，源文件等
//不足：不熟悉C语言的组织结构
//正确：小错误，二次通过


#include <stdio.h>
#include "Area.h"

int main(void)
{
	float  a;
	printf("请输入半径:\n");
	scanf("%f",&a);
	printf("面积 = %2f\n",AREA(a));
	return 0;
}