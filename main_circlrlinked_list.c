#include<stdio.h>
#include<stdlib.h>

struct node
{
	int e;
	struct node*next;
};

struct node* initialize();
struct node*insert(struct node*h,int e,int p);
int count(struct node *h);
struct node*delete(struct node*h,int e);
void printlist(struct node *h);


struct node * initialize()
{
	return(NULL);
}
	
struct node *insert(struct node*h,int e,int p)
{
	int i=0,size=count(h);
	struct node *t=h,*n=h;
	
	/*invalid position */
	if(p<1||p>size+1)
	{
		printf("Invalid position\n");
		return(h);
	}
	/*posn is valid create space (malloc */
	n=malloc(sizeof(struct node));
	n->e=e;
	n->next=n; //circular

	if(h==NULL)
		return(n);
	if(p==1)
	{
		n->next=h;
		while(t->next!=h)
			t=t->next;
		t->next=n;
		return(n);
	}
	/*if position is not 1 */
	while(p>i+2)
	{
		t=t->next;
		i=i+1;
	}
	n->next=t->next;
	t->next=n;
	return(h);
}

int count(struct node*h)
{
	int size=0;
	if(h==NULL)
	{
		return(0);
	}
	struct node *t=h;
	while(t->next!=h)
	{
		size=size+1;
		t=t->next;
	}
	return(size+1);
	
}

struct node*delete(struct node*h,int e)
{
	struct node*t=h,*n=h;
	if(h==NULL)
	{
		printf("No elements to delete\n");
		return(h);
	}
	if(h->e==e) //if the head element is to get delete
	{
		h=h->next;
		free(t);
		return(h);
	}
	/*while the element is not the first 1 */
	t=t->next;
	while(t->e!=e) //chase
	{
		n=t;
		t=t->next;
		if(t->next==h)
		{
			printf("element not found\n");
			return(h);
		}
		
	}
	//the element is found
	
	n->next=t->next;
	free(t);
	return(h);
}
