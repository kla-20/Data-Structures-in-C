#include<stdio.h>
void gcd(int*,int*);
int main()
{
	int a,b,t;
	printf("enter the nos for which you want to find the gcd- ");
	scanf(" %d%d" , &a,&b);
	if(b>a)
	{
		t=b;
		b=a;
		a=t;
	}
	gcd(&a,&b);
	printf(" the gcd for the given nos is %d\n" , b);
	
}


void gcd(int*dividend,int*divisor)
{
	int k;
	while(*dividend%*divisor!=0)
	{
		k=*dividend;
		*dividend=*divisor;
		*divisor=k%*divisor;
		continue;
	}
}
	
