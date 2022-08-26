/*1. swapping  a,b using double pointer l,m
#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x=&a,*y=&b;
	int **l=&x,**m=&y;
	int t=0;
	t=**l;
	**l=**m;
	**m=t;
	printf("%d %d\n", a,b);
}
*/
/*2.swapping x,y using double pointer l,m i.e now x value corresponds to b address, y value- a address
#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x=&a,*y=&b;
	int **l=&x,**m=&y;
	int t=0;
	printf("before-%u %u\n", *l,*m);
	t=*l;
	*l=*m;
	*m=t;
	printf("after-%u %u\n" , *l,*m);
}
*/
#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x=&a,*y=&b;
	int **l=&x,**m=&y;
	printf(" %d %d , x , y\n" ,x,y);
	swap(l,m);
	printf(" %d %d , x,y\n " x,y);
	
	
	
}
swap(int *e,int *r)
{
	int t=0;
	t=*e;
	*e=*r;
	*r=t;
}
	
