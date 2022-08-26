#include<stdio.h>

struct time
{
	int day;
	int hrs;
	int min;
	int sec;
}a,b;

int main()
{
	a.day=0;
	b.day=0;
	
	printf("Enter the hrs,min,sec for a\n");
	scanf(" %d%d%d" , &a.hrs,&a.min,&a.sec);
	printf("Enter the hrs,min,sec for b\n");
	scanf(" %d%d%d" , &b.hrs,&b.min,&b.sec);
	
	
	while(a.sec>=60)
	{
		a.min=a.min+1;
		a.sec=a.sec-60;
	}
	
	while(b.sec>=60)
	{
		b.min=b.min+1;
		b.sec=b.sec-60;
	}
	while(a.min>=60)
	{
		a.hrs=a.hrs+1;
		a.min=a.min-60;
	}
	while(b.min>=60)
	{
		b.hrs=b.hrs+1;
		b.min=b.min-60;
	}
	while(a.hrs>=24)
	{
		a.day=a.day+1;
		a.hrs=a.hrs-24;
	}
	while(b.hrs>=24)
	{
		b.day=b.day+1;
		b.hrs=b.hrs-24;
	}
	int k=a.sec+b.sec,l=a.min+b.min,m=a.hrs+b.hrs,n=a.day+b.day;
	
	while(k>=60)
	{
		l=l+1;
		k=k-60;
	}
	while(l>=60)
	{
		m=m+1;
		l=l-60;
	}
	while(m>=24)
	{
		n=n+1;
		m=m-24;
	}
	printf(" %d:%d:%d + %d:%d:%d = %d days:%d hours:%d min:%d sec\n", a.hrs,a.min,a.sec,b.hrs,b.min,b.sec,n,m,l,k);
	
}
