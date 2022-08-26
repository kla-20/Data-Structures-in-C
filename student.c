#include <stdio.h>

struct Student
{
  int regno, marks;
};

//function declarations

int main()
{
  struct Student sarr[5]= {};
  int i= 0;
  for(i= 0; i < 5; i++)
  {
    printf("Enter student regno: ");
    scanf("%d",&sarr[i].regno);
    printf("Enter student marks: ");
    scanf("%d",&sarr[i].marks);
  }

  for(i= 0; i < 5; i++)
    printf("Regno: %d\tMarks: %d\n",sarr[i].regno,sarr[i].marks);
}

//function definitions
