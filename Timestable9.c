#include <stdio.h>
int times_table();

int main(void)
{

times_table();
return 0;
}


int times_table()
{

int i = 0;
int k;


while (i < 10)
{


  int j = 0;

 while (j < 10)
 {
  k = i * j;

  if ((k / 10) > 0)
  {
   putchar((k / 10) + '0');
  }

  else
  {
   putchar(' ');
  }

  putchar((k % 10) + '0');
  if (j < 9)
  {
  putchar(',');
  putchar(' ');
   
  }
  

  j++;
 }
 putchar('\n');

 i++;
  }
  


}