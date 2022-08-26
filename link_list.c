#include<stdio.h>
#include<stdlib.h>
#define n 100

struct list
{
	int size;
	int elements[n];
};

void initialise(struct list *);
void insert(struct list *l,int e,int p);
void print(struct list *);

int main()
{
	struct list l;
	initialise(&l);
	insert(&l,35,1);
	insert(&l,2,0);
	insert(&l,35,7);
	insert(&l,23,2);
	insert(&l,3,3);
	print(&l);
	
}



void initialise(struct list *l)
{
	int i;
	l->size=0;
	for(i=0;i<n;i++)
		l->elements[i]=0;
	return;
}


void insert(struct list *l,int e,int p)
{
	if(p<1||p>l->size+1)
	{
		printf("The element %d cannot  be inserted\n" ,e);
		return;
	}
	if((p==1)&&(l->size==0))
	{
		l->elements[p-1]=e;
		l->size=l->size+1;
		return;
	}
	
	if(p<l->size+1||p>1)
	{
		int i;
		for(i=l->size+1;i>p;i--)
			l->elements[i]=l->elements[i-1];
		l->elements[p-1]=e;
		l->size=l->size+1;
		return;
	}
	
	if(p==l->size+1)
	{
		l->elements[p]=e;
		l->size=l->size+1;
		return;
	}
}

void print(struct list *l)
{
	int i;
	for(i=0;i<=l->size+1;i++)
		printf("%d\t" , l->elements[i]);
	printf("\n");
	printf("%d\n" , l->size);
	return;
}



