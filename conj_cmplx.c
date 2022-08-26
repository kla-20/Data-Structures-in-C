#include<stdio.h>

struct complex
{
	float re,im;
};
struct complex conj_complex(struct complex);

int main()
{
	struct complex c={3.0,4.2},ans={0,0};
	ans=conj_complex(c);
	printf("The conj of %f+i%f is %f+%f\n" , c.re,c.im, ans.re,ans.im);

}

struct complex conj_complex(struct complex a)
{
	struct complex y={0,0};
	y.re=a.re/(a.re*a.re)+(a.im*a.im);
	y.im=-a.im/(a.re*a.re)+(a.im*a.im);
	return(y);
	
}
