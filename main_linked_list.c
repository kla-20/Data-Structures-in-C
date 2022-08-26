/* linked list to store integers */
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int e;
	struct list* next;
};
/*Functions */
struct list* initialize();
struct list *insert(struct list *l,int e,int p);  
int count(struct list *l); //this function  only used for the above insert function for counting size and returning it back to insert function
struct list *delete(struct list *l,int e);
void printlist(struct list *l);

	
struct list* initialize()
{
	return(NULL);
}

struct list* insert(struct list* l,int e,int p)
{
	int i=0;
	struct list *t=l,*h=l, *n= NULL;
	int size= count(l);
	
	/*invalid position*/
	if(p<1||p>size+1)
	{
		printf("Invalid position\n");
		return(l);
	}
	/*position is valid create memory for it(malloc)*/
	//n=malloc(sizeof(struct list));
	l=malloc(sizeof(struct list));
	//n->e=e;
	l->e=e;
	//n->next=NULL;
	l->next=NULL;

	/*now space is created now placing in the position */

	if(p==1)
	{
		//n->next=l;
		l->next=t;
		//return(n);
		return(l);
	}
	/*now position is not 1 then traverse t until you find the position*/
	
	while(i<p-2)
	{
		t=t->next;
		i= i+1;
	}
	/*now t is at a position --the next to t you will insert l */

	//n->next=t->next;
	l->next=t->next;
	//t->next=n;
	t->next=l;
	//return(l);   //NOte: h is the header which holds the head adress of the list where t is travelling and l is taking new address @malloc
	return(h);   //NOte: h is the header which holds the head adress of the list where t is travelling and l is taking new address @malloc

}

int count(struct list *l)
{
	int size=0; //initializing
	if(l==NULL)
	{
		return(0);  //no element
	} 
	
	while(l!=NULL)  //counting the elements in the list
	{
		size=size+1;
		l=l->next;
	}
	return(size);
}


struct list *delete(struct list *l,int e)
{
	struct list *t=l,*h=l;   //check for *h=t whether it works same
	/*no elements */
	if(l==NULL)
	{
		printf("NO elements in the list\n");
		return(l);
	}
	/*there are elements*/
	
	if(l->e==e)  // first element  to delete
	{
		t=t->next;  //also t=l->next or t=h->next;
		free(l);   // also free(h) since both l and h are at the same address to delete
		return(t); //returning the new header
	}
	t=t->next; // if its not the first element
	
	/*if position is different traverse t */
	while(t!=NULL&&t->e!=e) // l following t 
	{
		l=t;
		t=t->next;
	}
	/*at t there is element before t there is l */

	if(t==NULL)
	{
		printf("Element Not Found\n");
		return(h);
	}

	l->next=t->next;
	free(t);
	return(h);
}

void printlist(struct list *l)
{
	if(l==NULL)
	{
		return;
	}
	printf("%d\t" , l->e);
	l=l->next;
	printlist(l);
}
	
int main()
{
	struct list *l;
	l=initialize();
	l=insert(l,5,1);
	l=insert(l,5,3);
	l=insert(l,9,2);
	l=insert(l,12,3);
	l=insert(l,2,3);
	l=insert(l,5,3);
	l=insert(l,35,4);
	l=insert(l,9,5);
	/*l=delete(l,5);
	l=delete(l,9);
	l=delete(l,10);
	l=delete(l,2);
	l=delete(l,7);
	l=delete(l,6);
	l=delete(l,35);*/
	
	printlist(l);
	
}
