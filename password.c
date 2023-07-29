#include <stdio.h>
#include <string.h>
#include <wchar.h>
int passwordCompare(int argc, char *argv[]);

    int passwordCompare(int argc, char *argv[])
{

  if (argc != 3)
  {
   printf("Program: %s Please include your password or your name.\n", argv[0]);
   return -1;
  }

  char registeredPassword[100];
  strcpy(registeredPassword, argv[2]);

  printf("Welcome! %s... \n", argv[1]);

  char enteredPassword[100];
  printf("Please enter your Password to access this program: \n");
  scanf("%s", enteredPassword);

  if (strcmp(registeredPassword, enteredPassword) == 0)
  {

   printf("Hi %s, Password match. You can now proceed. \n", argv[1]);

   printf("\n");

   printf("Goodluck!!! \n");
   printf("\n");

   float height;
   float weight;

   printf("%s please enter your height (in meter) \n", argv[1]);
   scanf("%f", &height);

   printf("Enter your weight (in kg) \n");
   scanf("%f", &weight);

   int BMI = weight / (height * height);

   if (BMI < 18)
   {
    printf("Hey! %s. You are Underweight, you need to feed more.. \n", argv[1]);
   }

   else if (BMI >= 18 && BMI <= 25)
   {
    printf("Hey! %s. You have Normal Weight.. \n", argv[1]);


    char *love = "Atinuke";

    if (strcmp(love, argv[1]) == 0)
    {
      printf("Stay healthy.. %s Love ❤️ %lc\n", argv[1]);
    }

    else
    {
    printf("Stay healthy..\n");
    }
    
   }

   else if (BMI >= 26 && BMI <= 29)
   {
    printf("Hey! %s. Seems you are Overweight, you need to exercise more.. \n", argv[1]);
   }

   else if (BMI >= 30)
   {

    printf("Hey! %s. It appears you have Obesity, start your medication.. \n", argv[1]);
    if (BMI <= 34)
    {
     printf("Hey! %s. Apparently, you are Class I Obesity", argv[1]);
    }

    else if (BMI >= 35 && BMI <= 39)
    {
     printf("Hey! %s. You are Class II Obesity", argv[1]);
    }
    else
    {
     printf("Hey! %s. You are Class III Obesity", argv[1]);
    }

    return 1;
   }

  else
  {
    printf("Hey! %s. Error: You provided an invalid password..");
  }
}
}

int main(int argc, char *argv[])
{
 int result = passwordCompare(argc, argv);
 return result;
}
