#include<stdio.h>


struct complex
{
	float re, im;
};

struct complex mul(struct complex c1, struct complex c2)
{
	struct complex ans={0,0};
	
	ans.re = c1.re * c2.re - c1.im * c2.im;
	ans.im = c1.re * c2.im + c1.im * c2.re;
	
	return(ans);
};

struct complex conjugate(struct complex c)
{
	struct complex ans={c.re, -c.im};
	return(ans);
};

void printcomplex(struct complex c)
{
	printf(" %f + %fi\n",c.re,c.im);
};

int  main()
{
	struct complex a={4,2} , b={2,3} , c={0,0};
	
	c=mul(a,b);
	
	printcomplex(c);
}
