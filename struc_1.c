#include<stdio.h>
int main()
{
	struct student
	{
		int regno;
		float marks;
	};
	struct student s1;
	{
		s1.regno=194201;
		s1.marks=100;
	};	
	printf("student %d secured %f marks\n" , s1.regno,s1.marks);
	
	
}


