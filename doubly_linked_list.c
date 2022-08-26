#include<stdio.h>
#include<stdlib.h>

struct node
{
	int e;
	struct node* pre;
	struct node* post;
};
	
struct node*initialize();
struct node* insert(struct node*h, int e, int p);
int count(struct node*h);
struct node* delete(struct node*h, int e);
void print(struct node*h);
void fun(struct node *h);



struct node*initialize()
{
	return(NULL);
}


struct node* insert(struct node*h, int e, int p)
{
	int i=0;
	struct node*t=h,*k=h,*n=NULL;
	int size =count(h);
	if(p<1||p>size+1)
	{
		printf("invalid position\n");
		return(h);
	}
	n=malloc(sizeof(struct node));
	n->pre=NULL;
	n->e=e;
	n->post=NULL;

	if(h==NULL)
		return(n);
	if(p==1)
	{
		n->post=h;
		h->pre=n;
		return(n);

	}
	
	if(p==size+1)
	{
		while(t!=NULL)
		{
			k=t;
			t=t->post;
		}
		
		n->post=t;
		n->pre=k;
		k->post=n;
		
		return(h);
		
	}
		
	while(p>i+2)
	{
		t=t->post;
		i=i+1;
	}
	t=t->post;
	while(k->post!=t)
		k=k->post;
	n->post=t;
	n->pre=k;
	k->post=n;
	t->pre=n;
	return(h);

}

int count(struct node*h)
{
	if(h==NULL)
		return(0);
	struct node*t=h;
	int size=0;
	while(t!=NULL)
	{
		size=size+1;
		t=t->post;
	}
	return(size);
}


struct node*delete(struct node*h,int e)
{	
	struct node*t=h;
	if(h==NULL)
	{
		printf("list is empty\n");
		return(h);
	}
	if(h->e==e)
	{
		t=t->post;
		free(h);
		if(t!=NULL)
			t->pre=NULL;
		return(t);
	
	}
	while(t!=NULL&&t->e!=e)
		t=t->post;

	if(t==NULL)
	{
		printf("element not found\n");
		return(h);
	}
	
	t->pre->post=t->post;
	if(t->post!=NULL)
		t->post->pre=t->pre;
	free(t);
	return(h);
}

void print(struct node*h)
{
	while(h!=NULL)
	{	
		printf("%d\t", h->e);
		h=h->post;
	}
	printf("\n");
	return;
}

void fun(struct node*h)
{
	struct node *t=h;
	while(t->post!=NULL)
		t=t->post;
	while(t!=NULL)
	{
		printf("%d\t",t->e);
		t=t->pre;
	}
	printf("\n");
}
	


int main()
{
	struct node *h;
	h=initialize();
	h=insert(h,3,1);
	h=insert(h,5,2);
	h=insert(h,9,3);
	h=insert(h,7,4);
	h=insert(h,2,5);
	h=insert(h,6,6);
	h=delete(h,9);
	print(h);
	fun(h);
	
		

}


