#include <stdio.h>

int main(void)
{

 int grade;

 printf("Please enter students grade \n");
 scanf("%d", &grade);

 
 if (grade >= 80 && grade <= 100)
 {
  if (grade >= 90)
  {
   printf("Congratulations, you won a scholarship \n");
   printf("Student's grade is A+ \n");
  }

  else if (grade < 90)
  {
  
  printf("Student's grade is A \n");
  
  }
  
 }


 else if (grade >= 66 && grade <= 79)
 {
  printf("Student's grade is B \n");
 }


 else if (grade >= 55 && grade <= 65)
 {
  printf("Student's grade is C \n");
 }


 else if (grade >= 45 && grade <= 54)
 {
  printf("Student's grade is D \n");
 }

 else if (grade >= 40 && grade <= 44)
 {
  printf("Student's grade is E \n");
 }

 else if (grade >= 0 && grade <= 39)
 {
  printf("Student's grade is F \n");
 }

 else
 {
  printf("You have entered invalid score \n");
 }

return (0);
}