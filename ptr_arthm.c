#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	printf("ptr value->%u\n", ptr);
	printf("contents at old ptr-> %u\n" , *ptr);
	printf("ptr's address->%u\n", &ptr);
	ptr=ptr+2;
	printf("ptr new value->%u\n",ptr);
	printf("contents at new ptr ->%u\n" , *ptr);
	printf("ptr's address->%u\n", &ptr);
	
	
}
