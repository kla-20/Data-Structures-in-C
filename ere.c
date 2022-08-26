#include<stdio.h>

void display(int*);

int main()
{
	int i=0;
	int marks[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
		display(&marks[i]);
	return(0);
		

}

void display(int *n)
{
	printf("%d\n");
}
	
