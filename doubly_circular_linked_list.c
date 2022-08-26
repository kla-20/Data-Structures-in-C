#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node*pre;
	int e;
	struct node*post;
};

struct node*initialize();
struct node*insert(struct node*h,int e ,int p);
int count(struct node*h);
struct node*delete(struct node*h,int e);
void print(struct node*h);

struct node*initialize()
{
	return(NULL);
}

struct node*insert(struct node *h,int e , int p)
{
	struct node*t=h,*n=initialize();
	int i=0;
	int size=count(h);
	if(p<1||p>size+1)
	{
		printf("the position is invalid\n");
		return(h);
	}
	n=malloc(sizeof(struct node));
	n->pre=n;
	n->e=e;
	n->post=n;
	if(h==NULL)
		return(n);
	if(p==1)
	{
		n->post=h;
		h->pre=n;
		while(t->post!=h)
			t=t->post;
		t->post=n;
		n->pre=t;
		return(n);

	}
	while(p>i+2)
	{
		t=t->post;
		i++;
	}
	n->post=t->post;
	n->pre=t;
	t->post->pre=n;
	t->post=n;
	return(h);
		
		
}

int count(struct node*h)
{
	struct node*t=h;
	int size=0;
	if(h==NULL)
		return(0);
	while(t->post!=h)
	{
		size=size+1;
		t=t->post;
	}
	return(size+1);
}


struct node*delete(struct node*h, int e)
{
	struct node*t=h;
	int size=count(h);
	if(h==NULL)  //also if size==0
	{
		printf("no element in the list\n");
		return(h);
	}
	if(h->e==e)
	{	
		while(t->post!=h)
			t=t->post;
	
		t->post=h->post;
		t->post->pre=t;
		free(h);
		if(size==1)
			return(NULL);
		return(t->post);
	}
	t=t->post;
	while(t!=h&&t->e!=e)
		t=t->post;
	if(t==h)
	{
		printf("Element not found\n");
		return(h);
	}
	
	t->pre->post=t->post;
	t->post->pre=t->pre;
	free(t);
	return(h);
	
}

void print(struct node*h)
{
	struct node*t=h;
	if(h==NULL)
		return;
	while(t->post!=h)
	{
		printf("%d\t" ,t->e);
		t=t->post;
	}
	printf("%d\t" , t->e);
	printf("\n");
	return;
}
	
int main()
{	
	struct node *h;
	h=initialize();
	h=insert(h,2,1);
	h=insert(h,3,2);
	h=insert(h,8,3);
	h=insert(h,7,4);
	h=insert(h,9,4);
	print(h);
	h=delete(h,2);
	h=delete(h,3);
	h=delete(h,8);
	h=delete(h,7);
	print(h);
	
}

	
