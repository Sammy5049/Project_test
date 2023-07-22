#include <stdio.h>

int main(void)
{

int i, n, j;
printf("Please enter the length you want.. \n");
scanf("%d", &n);

if (n == 0)
{
 putchar('\n');
}
if (n >= 1)
{
 

for (i = 1; i <= n; i++)
{
     for (j = i; j < n; j++)
     {
      putchar(' ');
     }

     for (j = 1; j <= i; j++)
     {
       putchar('#');
     }

     putchar('\n');
     
}

  return (0);

}
}






// int sqr_print(int n)
// {
//    return 
// }