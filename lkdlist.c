#include<stdio.h>

struct term
{
	int cf,exp;
	struct term *next;
};

struct term *mul(struct term *,struct term *)

int main()
{
	mul(struct term *h1,struct term *h2);
}
	
	
struct term *mul(struct term *h1,struct term *h2)
{	
	struct term *ans=NULL, *t=h2;
	while(h1!=NULL)
	{
		while(t!=NULL)
		{
			ans=insert(ans,h1->cf*t->cf,h1->exp*t->exp);
			t=t->next;
		}
		h1=h1->next;
		t=h2;
	}
		
}

struct term *clearpolynomial(struct term *h)
{
	struct term *t=NULL;
	while(h!=NULL)
	{	
		t=h->next;
		free(h);
		h=t;
	}
	return(NULL);
}
