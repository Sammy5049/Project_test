#include <stdio.h>


int main(void)
{

 float height;
 float weight;

 printf("Please enter your height \n");
 scanf("%f", &height);

 printf("Please enter your weight \n");
 scanf("%f", &weight);

 int BMI = weight / (height * height);

 switch (BMI)
 {
 case 0 ... 17:
  printf("You are Underweight, you need to feed more.. \n");
  break;

 case 18 ... 25:
  printf("You have Normal Weight.. \n");
  break;

 case 26 ... 29:
  printf("You are Overweight, you need to exercise more.. \n");
  break;


  if (BMI >= 30)
  {
  printf("You have Obesity, start your medication.. \n"); 

  case 30 ... 34:
   printf("You are Class I Obesity");
   break;
  case 35 ... 39:
   printf("You are Class II Obesity");
   break;
  if (BMI >= 40)
  {
   printf("You are Class III Obesity");
  }  
  }
 default:
  break;
 }
}