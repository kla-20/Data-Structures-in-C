#include<stdio.h>
void swap(int **x,int **y)
{
	int t;
	t=**x;
	**x=**y;
	**y=t;
}


int main()
{
	int a=1,b=2;
	int *p=&a, *q=&b;
	printf("a=%u\tb=%u\n" , a,b);
	swap(&p,&q);
	printf("a=%u\tb=%u\n" , *(&a) , *q);
	
	
}
