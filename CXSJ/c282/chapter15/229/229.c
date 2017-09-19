#include<stdio.h>
#define  swap(a,b) {a=b+a;b=a-b;a=a-b;}

int main(void)
{
	int i,j,a[10],b[10];
	printf("请输入一个数组a:\n");
	for(i = 0;i < 10;i++)
	    scanf("%d",&a[i]);

	printf("请输入一个数组b:\n");
	for(j = 0;j < 10;j++)
	    scanf("%d",&b[j]);

    printf("数组a是：\n");
	for(i =0;i < 10;i++)
	printf("%d,",a[i]);
    printf("\n");

	printf("数组b是：\n");
	for(j =0;j < 10;j++)
	printf("%d,",b[j]);
	printf("\n");

	for(i =0;i < 10;i++)
	    swap(a[i],b[i]);

    printf("现在数组a是：\n");
	for(i =0;i < 10;i++)
	printf("%d,",a[i]);

	printf("\n现在数组b是：\n");
	for(j =0;j < 10;j++)
	printf("%d,",b[j]);
	printf("\n");
    
}