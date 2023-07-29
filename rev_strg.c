#include <stdio.h>
void rev_string(char *n);



    void rev_string(char *n)
{

 int i = 0;

 int j = 0;

 char temp;

 while (n[i] != '\0')

 {
  i++;
 }

 for (j = 0; j < (i/2); j++)
 {
  temp = n[j];

  n[j] = n[i - j - 1];
  n[i - j - 1] = temp;
 }
 
}


int main(void)
{

char n[] = "Atinuke";

 rev_string(n);
 printf("%s\n", n);
 return 0;
}
