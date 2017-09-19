#include <stdio.h>

#define TRUE   1
#define FALSE  0
#define EVEN(x)  (((x)%2 == 0)?TRUE:FALSE)

int main(void)
{
    int sum = 0,i=1;
	for(i;i < 101;i++)
	{
		sum += i * EVEN(i);
	}
	printf("the result is:%d\n",sum);
	return 0;
}