#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int *p = NULL;
	int i,c;
	p = (int *)malloc(sizeof(int[3]));
	for(i = 0;i < 3;i++)
	{
		*(p+i) =10 *(1+i);
		printf("%d\n",*(p+i));
	}
    c = getchar();

	return 0;
}