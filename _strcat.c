#include <stdio.h>
#define MAX_NAME_LENGTH 97
char *_strcat(char *dam, char *sam);


char *nameInit(char *dest, char *src);

char *nameInit(char *dest, char *src)
{

 int len_store, j;

 for (len_store = 0; dest[len_store] != '\0'; len_store++)
 {

 }

 putchar(dest[0]);

 putchar('.');
 

 for (j = 0; src[j] != '\0'; j++)
 {

}
putchar(src[0]);
putchar('.');
 }




    char *_strcat(char *dam, char *sam)
{

 int a = 0;
 int i = 0;

while (dam[a] != '\0' )
{
 a++;
}

if (a > 0 && a < MAX_NAME_LENGTH - 1)
{
dam[a] = ' ';
a++;
}

int b = 0;

while (sam[b] != '\0' && a < MAX_NAME_LENGTH - 1)
{
  dam[a] = sam[b];
  b++;
  a++;
}
dam[a] = '\0';

return dam;
}

int main(void)
{

char firstName[MAX_NAME_LENGTH];
char lastName[MAX_NAME_LENGTH];

printf("Enter your First name.. \n");
scanf("%97s", firstName);
printf("Enter your Last name.. \n");
scanf("%97s", lastName);

printf("Your First name is: %s\n", firstName);
printf("Your Last name is: %s\n", lastName);
putchar('\n');

char *ptr;

// char fullName[MAX_NAME_LENGTH];
// _strcat(fullName, firstName);
// _strcat(fullName, lastName);
ptr = _strcat(firstName, lastName);

printf("Your Surname is: %s\n", lastName);
printf("Your Fullname is: %s\n", ptr);
printf("\n");



 printf("And you have ");

 nameInit(firstName, lastName);

 printf(" as your initials");

 return 0;
}
