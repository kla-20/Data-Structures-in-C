#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	struct node*buckets=NULL;
	int arr[10]={3,9,11,13,14,3,9,13,15,11};
	int max=arr[0];
	for(i=0;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	buckets=malloc(sizeof(int)*(max+1));
	for(i=0;i<10;i++)
		buckets(arr[i])=buckets(arr[i])+1;
	for(i=0;i<max+1;i++)
	{
		for(j=0;j<buckets[i];j++)
			printf("%d\n" ,i);
	}
}
