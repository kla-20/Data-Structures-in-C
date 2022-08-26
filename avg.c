#include<stdio.h>
struct student 
{
	int regno;
	float marks;
};
int main()
{
	struct student arr[7]={};
	int i=0;
	float avg=0,sum=0;
	for(i=0;i<=6;i++)
	{
		printf("enter the regno for %d\n" , i);
		scanf("  %d" , &arr[i].regno);
		
	}
	for(i=0;i<=6;i++)
	{
		printf("For %d-enter marks: \n" , arr[i].regno);
		scanf(" %f" ,&arr[i].marks);
	}
	for(i=0;i<7;i++)
	{
		sum=sum+(arr[i].marks);
	}
	avg=sum/(i+1);
	printf("avg is %f\n" , avg);
	i=0;
	while(i<7)
	{
		if(arr[i].marks>avg)
		{
			printf("regdno: %d-marks : %f \n" , arr[i].regno, arr[i].marks);
		}
		i++;
	}
	
	
	

	
}
	
