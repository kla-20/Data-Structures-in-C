#include<stdio.h>

struct mny
{
	int rs;
	int ps;
}a,b;
int main()
{
	a.rs=0,a.ps=0,b.rs=0,b.ps=0;
	
	
	printf("Enter the rs and ps for a-");
	scanf(" %d%d" , &a.rs , &a.ps);
	printf("Enter the rs and ps for b-");
	scanf(" %d%d" , &b.rs , &b.ps);
	while(a.ps>=100)
	{
		a.rs=a.rs+1;
		a.ps=a.ps-100;
	}
	while(b.ps>=100)
	{
		b.rs=b.rs+1;
		b.ps=b.ps-100;
	}	
	int r,p;
	r=a.rs+b.rs;
	p=a.ps+b.ps;
	while(p>=100)
	{
		r=r+1;
		p=p-100;
	}
	printf(" Rs%d:ps%d + Rs%d:ps%d = Rs%d:ps%d\n" , a.rs,a.ps,b.rs,b.ps,r,p);
	
}
