#include<stdio.h>
struct list
{
	int e;
	struct list *next;
};

struct list initialize()
struct list insert(struct list *,int ,int);
int count(struct list *);
void printlist(struct list *);	
struct list * delete(struct list *,int);

struct list * delete(struct list *l,int e)
{
	struct list *t=l,*h=l;
	if(l=NULL)
	{
		;
	}
	if(l->e==e)
	{
		;
	}	
	l=l->next;
	while(t!=NULL&&t->e!=e)
	{
		l=t;
		t=t->next;
	}
	if(t==NULL)
	{
		printf("error! ,element is not found\n");
		return(h);
	
		l->next=t->next;
		free(t);
		return(h);
	}
	int count(struct list *l)
	{
		;
	}
	void printlist(struct list *l)
	{
		if(l==NULL)
		return;
		printlist(l);
		printf("%d\n", l->e);

	}
	void printlist(struct list *l)
	{
		printlist(l->next);
		if(l==NULL)
		return;
		printf("%d\n" , l->e);
	}
}
