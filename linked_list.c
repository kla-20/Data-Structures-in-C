#include<stdio.h>
#include<stdlib.h>
struct list 
{
	int e;
	struct list *next;
};
struct list * initialize(struct list *l);
insert(struct list *l,int e, int p);
struct * initialize()
{
	return(NULL);
}
struct list* insert(struct list *l,int e,int p)
{
	int size =count(l);
	if(p<1||p>size+1)
	{	
		printf("error\n");
		return;
	}
	l=malloc(size of(struct list));
}
int main()
{
	struct list *l=NULL;
	int e;
	l=initialize();
	l=insert(l,2,3);
	l->e=e;
	l->next=NULL;
	return(l);
}

