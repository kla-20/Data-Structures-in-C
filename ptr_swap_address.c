//changing the address of pointers x,y using double pointers l and m
#include<stdio.h>
int main()
{
	int a=10, b=20,err[10]={}; 
	int *x=&a;
	int *y=&b;
	int **l=&x, **m=&y;
	swap(*l,*m);
	err[10]=swap(int e,int r);
	printf("%d %d\n" , err[0], err[1]);
}
swap(int e,int r)
{
	int t=0,arr[10]={};
	t=e;
	e=r;
	r=t;
	arr[0]=e;
	arr[1]=r;
	return(arr);
	
}
	
	
