#include<stdio.h>
int main()
{	
	int a,b,c;	
	char *cptr=a;
	int *ptr=b;
	double *dptr=c;
	//printf("%d\n" ,1[ptr]);
	cptr=cptr+1;
	ptr=ptr+1;
	dptr=dptr+1;
	printf("%u\n" , cptr);
	printf("%u\n" , ptr);
	printf("%u\n" , dptr);
	
}
