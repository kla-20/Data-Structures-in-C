#include<stdio.h>
int main()
{
	int ar[10]={},i=0;
	for(i=0;i<=9;i++)
	{
		ar[i]=i;
	}
	int *ptr=NULL;
	ptr=ar;
	printf("%u\n" , ptr);
	printf("%d\n" ,*ptr);
	ptr=ptr+1;
	printf("%u\n" , ptr);
	printf("%d\n" , *ptr);

	
}
