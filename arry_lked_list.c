//operations on linked list array based

#include<stdio.h>
#include<stdlib.h>
#define n 100

struct list
{
	int size;
	int elements[n];
};


void initialize(struct list *); //initialize fn
void insert(int e,int p,struct list *); //insert fn
void delete(int e, struct list *); //delete fn
void print(struct list*); //print fn



int main()
{
	struct list l;
	initialize(&l);
	/*insert(45,1,&l);
	insert(5,2,&l);
	insert(4,4,&l);
	insert(45,3,&l);
	insert(45,1,&l);
	delete(45,&l);
	delete(1,&l); */
	insert(6,1,&l);
	insert(55555,1,&l);
	insert(65,1,&l);
	insert(8,1,&l);
	insert(9,1,&l);
	insert(77,1,&l);
	insert(89,1,&l);
	print(&l);
	
}


void initialize(struct list *l)
{
	int i;
	for(i=0;i<n;i++)
		l->elements[i]=0;
	l->size=0;
	return;
}

void insert(int e,int p,struct list *l)
{
	if(p<1||p>l->size+1)
	{
		printf("Error-give a valid position\n");
		return;
	}
	
	if(l->size==n)
	{
		printf("no space\n");
		return;
		
	}
	if(p==1&&l->size==0)
	{
		l->elements[p-1]=e;
		l->size=l->size+1;
		return;
	}
	
	if(l->size>0)
	{
		int i=0;
		for(i=l->size-1;i>=p-1;i--)
			l->elements[i+1]=l->elements[i];
		l->elements[p-1]=e;
		l->size=l->size+1;
		return;
	}

	
}
	
void delete(int e, struct list *l)
{
	
	int i,p,j;
	if(l->size<1)
	{
		printf("list is empty\n");
		return;
	}
	/*
	if(l->size>0)
	{
		for(i=0;i<=l->size-1;i++)
		{
			if(l->elements[i]==e)
			{
				p=i;
				for(i=p;i<l->size-1;i++)
					l->elements[i]=l->elements[i+1];
			}
		}
		return;
	} */
	
	for(i=0;i<l->size;i++)
		if(l->elements[i]==e)
			break;
	
	if(i==l->size)
	{
		printf("Element not found\n");
		return;
	}
	
	for(j=i;j<l->size-1;j++)
	{
		l->elements[j]=l->elements[j+1];
	}
	
	l->size=l->size-1; 

	

}
	
void print(struct list *l)
{
	int i;
	if(l->size==0)	
	{
		printf("error The list is empty\n");
		return;
	}
	for(i=0;i<=l->size-1;i++)
		printf(" %d\t" , l->elements[i]);
	return;
	
}


