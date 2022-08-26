#include<stdio.h>
struct term
{
	int cf,exp;
	struct term *next;
};

struct term *initialize()
struct term *insert(struct term *, int,int)


struct term *insert(struct term *h, int c,int e)
{
	struct term *n=NULL,*t=NULL,*prev=NULL;
	if(h==NULL)
	;
	if(e>h->exp)
	;
	t=h;
	prev=h;
	while(t!=NULL&&t->exp>e)
	{
		prev=t;
		t=t->next;
	}
	if(t!=NULL&&t->exp==e)
	{
		t->cf=t->cf+c;
		return(h);
	}
	n=createterm(c,e);
	n->next=t;
	prev->next=n;
	return(h);
}

void printpolynomial(struct term *h)
{
	while(h!=NULL)
	{
		printf("%d^%d" , h->cf,h->exp);
		h=h->next;
	}

}
p3=add(p1,p2);
int main()
{
	struct term *p1=NULL, *p2=NULL, *p3=NULL;
	p1=initialize();
	p2=initialize();
	p3=initialize();
	p1=insert(p1,4,20);
	p1=insert(p1,-5,13);
	p1=insert(p1,-32,32);
	
}

struct term* add(struct term *h1,struct term *h2)
{
	struct term *sum=NULL;
	while(h!=NULL)
	{
		sum=insert(sum,h1->cf,h1->exp);
		h1=h1->next;	
	}
	while(h2!=NULL)
	{
		sum=insert(sum,h2->cf,h2->exp);
		h2=h2->next;
	}
	return(sum);
}


}
