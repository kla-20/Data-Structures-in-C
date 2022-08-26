//initialising array
#include<stdio.h>
#define n 100 
	

struct list
{
	int size;
	int elements[n]; 
};

void initialize(struct list *, int);

int main()
{
	int k;
	struct list l;
	printf("enter size-\n");
	scanf(" %d" , k);
	
	initialize(&l,k);
	printf("%d\n" , l.size);
}


void initialize(struct list *l,o)
{
	l->size=o;
	int i;
	for(i=0;i<n;i++)
	l->elements[i]=0;
	return;	
}
