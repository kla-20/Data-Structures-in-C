#include<stdio.h>
#include<stdlib.h>

#define n 10
struct stack
{
	int elements[n];
	int top;
};

void initialize(struct stack *s)
{
	int i=0;
	s->top=-1;
	for(i=0;i<n;i++)
		s->elements[i]=0;
}

void push(struct stack *s,int e)
{
	if(s->top==n-1)
	{
		printf("overflow\n");
		return;
	}
	s->top=s->top+1;
	s->elements[s->top]=e;
}

int pop(struct stack *s)
{
	if(s->top==-1)
	{
		printf("underflow\n");
		return(0);
	}
	s->top=s->top-1;
	return(s->elements[s->top+1]);
}

int top(struct stack*s)
{
	if(s->top==-1)
	{
		printf("empty stack\n");
		return(0);
	}
	return(s->elements[s->top]);
}

int isempty(struct stack *s)
{
	if(s->top==-1)
		return(1);
	return(0);
}


int main()
{
	int p=0,t=0,i;
	struct stack s;
	initialize(&s);
	push(&s,5);
	push(&s,6);
	push(&s,8);
	push(&s,9);
	p=pop(&s);
	printf(" %d\n" , p);
	t=top(&s);
	printf(" %d\n" , t);
	i=isempty(&s);
	printf(" %d\n" , i);
}
