#include<stdio.h>
#define  swap(a,b) {a=b+a;b=a-b;a=a-b;}

int main(void)
{
	int i,j,a[10],b[10];
	printf("������һ������a:\n");
	for(i = 0;i < 10;i++)
	    scanf("%d",&a[i]);

	printf("������һ������b:\n");
	for(j = 0;j < 10;j++)
	    scanf("%d",&b[j]);

    printf("����a�ǣ�\n");
	for(i =0;i < 10;i++)
	printf("%d,",a[i]);
    printf("\n");

	printf("����b�ǣ�\n");
	for(j =0;j < 10;j++)
	printf("%d,",b[j]);
	printf("\n");

	for(i =0;i < 10;i++)
	    swap(a[i],b[i]);

    printf("��������a�ǣ�\n");
	for(i =0;i < 10;i++)
	printf("%d,",a[i]);

	printf("\n��������b�ǣ�\n");
	for(j =0;j < 10;j++)
	printf("%d,",b[j]);
	printf("\n");
    
}