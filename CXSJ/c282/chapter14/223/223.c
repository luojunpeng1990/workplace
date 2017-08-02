//function:
//time:2017Äê8ÔÂ1ÈÕ22:12:50
//key:
//question:the parameters 0f x in the printf




#include<stdio.h>
#include<malloc.h>

int main(void)
{
	struct st
	{
		int n;
		struct st *next;
	}*p;

	p=(struct st*)malloc(sizeof(struct st));
	p->n = 5;
	p->next = NULL;
	printf("p->n=%d\tp->next=%x\n",p->n,p->next);
    
    return 0;
}