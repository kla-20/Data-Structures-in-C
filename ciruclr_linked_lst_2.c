#include<stdio.h>
#include<stdlib.h>
struct node
{
	int e;
	struct node *next;
};
	
int count(struct node *);
struct node * delete(struct node *, int);
int main()
{
	struct node *t=NULL,*e=NULL,*prev=NULL,*h=NULL;
	int count(struct node *h)
	{
		int num=0;
		struct node *t=h;
		if(h==NULL)
		return(0);
		while(t->next!=h)
		{
			num=num+1;
			t=t->next;
		}
	}
	struct node *delete(struct node *h,int e)
	{
		struct node *t=h;
		int size=count(h);
		if(size==0)
		{
			printf("error\n");
			return(h);
		}
		if(h->e==e)
		{
			while(t->next!=h)
			t=t->next;
			t->next=h->next;
			free(h);
			if(size==1)
			return(NULL);
			return(t->next);
		}
	}

	while((t->e!=e)&&(t->next!=h))
	{
		prev=t;
		t=t->next;
	}
	if(t->e!=e)
	{
		printf("element not found\n");
		return(h);
		prev->next=t->next;
		free(t);
		return(h);
	}

	
}
