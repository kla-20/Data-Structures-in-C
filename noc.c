#include<stdio.h>

int noc(struct node*h,int x)
{
	int num=0;
	while(h!NULL)
	{
		if(h->e=x)
		num=num+1;
		h=h->next;
	}
	return(num);
	
}
