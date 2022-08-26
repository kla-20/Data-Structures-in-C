#include<stdio.h>
#include<stdlib.h>

struct node
{
	int e;
	struct node *next;
};
int main()
{
	struct node *p,*h,*n, *t,*i;
	struct node *initialize()
	{
		return(NULL);
	}

	struct node * insert(struct node *h,int e,int p)
	{
		int i=0;
		struct node *n=NULL,*t=h;
		int size=count(h);
		if(p<1||p>size+1)
		{
			printf("error\n");
			return(h);
		}
		n=malloc(sizeof(struct node));
		n->e==e;
		if(h==NULL)
		{
			n->next=n;
			return(n);
		}
	}
	
	if(p==1)
	{
		n->next=h;
		t=h;
		while(t->next!=h)
		t=t->next;
		t->next=n;
		return(n);
	}
	while(i<p-1)
	{
		t=t->next;
		i=i+1;
	}
	n->next=t->next;
	t->next=h;
	return(h);
	
}
