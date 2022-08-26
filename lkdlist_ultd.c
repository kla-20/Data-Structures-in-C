#include<stdio.h>
#include<stdlib.h>
struct list
{
	int e;
	struct list *next;
};

int main()
{
	
	struct list l;
	struct list *p;
	p=&l;
	p->e=10;	
	p->next=NULL;
	p=malloc(sizeof(struct list));
	l.next=p;
	
	
	
}
