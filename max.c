#include<stdio.h>
int max(struct node *h)
{
	int m=0;
	if(h=NULL)
	{	
		printf("error\n");
		return(0);
	}
	m=h->e;
	h=h->next;
	while(h!=NULL)
	{
		if(h->e>m)
		m=h->e;
		h=h->next;
	}
	return(m);
}
	
