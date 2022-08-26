#include<stdio.h>
#include<stdlib.h>
struct term
{
	int cf,exp;
	struct term *next;
};

struct term *initialize();
struct term * createterm(int ,int);
struct term * insert(struct term *,int,int);
	
int main()
{
	struct term *p1=NULL;
	p1=initialize();
	p1=insert(p1,-77,0);
}

struct term *initialize()
{
	return(NULL);
}

struct term *createterm(int c,int e)
{
	struct term *t=NULL;
	t=malloc(sizeof(struct term));
	t->cf=c;
	t->exp=e;
	t->next=NULL;
	return(t);
}

struct term * insert(struct term *h,int c,int e)
{
	struct term *n=NULL;
	if(h==NULL)
	{
		h=createterm(c,e);
		return(h); 
	}
	if(e>h->exp)
	{
		n=createterm(c,e);
		n->next=h;
		return(n);
	}
}	

