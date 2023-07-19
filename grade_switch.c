#include <stdio.h>

int main(void)
{
 int score;

 printf("Please Enter Student's score \n");
 scanf("%i", &score);

 switch (score)
 {
 case 80 ... 100:
  printf("Student's grade is A");
  break;
 case 65 ... 79:
  printf("Student's grade is B");
  break;
 case 55 ... 64:
  printf("Student's grade is C");
  break;
 case 45 ... 54:
  printf("Student's grade is D");
  break;
 case 40 ... 44:
  printf("Student's grade is E");
  break;
 case 0 ... 39:
  printf("Student's grade is F");
  break;
 
 default:
  printf("You entered invalid score");
  break;
 }

 return 0;
}