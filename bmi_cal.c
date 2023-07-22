#include <stdio.h>


int main(void)
{
 float height;
 float weight;


 printf("Please enter your height (in meter) \n");
 scanf("%f", &height);

 printf("Please enter your weight (in kg) \n");
 scanf("%f", &weight);

 int BMI = weight / (height * height);


 if (BMI < 18)
 {
   printf("You are Underweight, you need to feed more.. \n");
 }

 else if (BMI >= 18 && BMI <= 25)
 {
  printf("You have Normal Weight.. \n");
 }

 else if (BMI >= 26 && BMI <= 29)
 {
  printf("You are Overweight, you need to exercise more.. \n");
 }

 else if (BMI >= 30)
 {

  printf("You have Obesity, start your medication.. \n");
  if (BMI <= 34)
  {
   printf("You are Class I Obesity");
  }

  else if (BMI >= 35 && BMI <= 39)
  {
   printf("You are Class II Obesity");
  }
  else
  {
   printf("You are Class III Obesity");
  }
  
 }

 return 0;
}