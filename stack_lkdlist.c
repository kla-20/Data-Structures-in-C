#include<stdio.h>
#include<stdlib.h>

struct node*createnode(int) ;

struct node
{
	int e;
	struct node*next;

}*n,*t;

struct node*initialize()
{
	return(NULL);
}
	
struct node*push(struct node *h,int e)
{
	struct node *n=createnode(e);
	n->next=h;
	return(n);
}

struct node* createnode(int em)
{
	t=malloc(sizeof(struct node));
	t->e=em;
	t->next=NULL;
	return(t);
}

struct node*pop(struct node* h)
{
	struct node*t=h;
	if(h==NULL)
	{
		printf("underflow\n");
		return(NULL);
	}
	h=h->next;
	free(t);
	return(h);
}

int top(struct node*h)
{
	if (h==NULL)
	{
		printf("EMpty Stack\n");
		return(0);
	}

	return(h->e);
}

int isempty(struct node*h)
{
	if (h==NULL)
		return(1);
	return(0);
}

int main()
{
	int t,i;
	n=initialize();
	n=push(n,5);
	n=push(n,4);
	n=push(n,3);
	n=push(n,9);
	n=push(n,1);
	n=pop(n);
	printf("%d\n", n->e);
	t=top(n);
	printf("%d\n", t);
	i=isempty(n);
	printf("%d\n", i);
}
