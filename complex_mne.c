#include<stdio.h>

struct complex
{
	float re,im;
};
int add_complex(struct complex,struct complex);

int main()
{


	struct complex c1;
	struct complex c2;
	c1.re=3;
	c1.im=4;
	c2.re=7;
	c2.im=5;
	add_complex(c1,c2);
}
	

int add_complex(struct complex a,struct complex b)
{
	struct complex c;
	c.re=a.re+b.re;
	c.im=a.im + b.im;
	printf("sum= %f+i%f\n" , c.re,c.im);
}
	

