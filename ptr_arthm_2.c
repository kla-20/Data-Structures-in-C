#include<stdio.h>
int main()
{
	int a=1,b=2;
	int *p=&a, *q=&b;
	printf("initial value of p-> %u\n" , p);
	printf("initial value of q-> %u\n" , q);
	printf("difference between both p and q->%d\n" , (p-q));
}
