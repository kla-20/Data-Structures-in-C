#include<stdio.h>
void swap(int *x,int *y)
{
	int t=0;
	t=*x;
	*x=*y;
	*y=t;
}
	
	
	
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("%d%d\n" , a,b);
	
}
