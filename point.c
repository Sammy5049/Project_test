#include <stdio.h>
char set_pointer(char *s);


int main(void)
{

 char fname[] = {'d', 'a', 'm', 'm', 'y', '\0'};
 char name[] = "Adeola";

     // printf("%p \n", name);

 set_pointer(name);
 // printf("Value of A before increment is %d in main function. \n", a);
 // printf("Address of A before increment is %p in main function. \n", pta);
 // set_pointer(pta);
 // printf("Value of A after increment is %d in main function \n", a);

 return 0;

}


char set_pointer(char *s)
{

 int i = 0;

 while (i < 5)
 {
  
   printf("%c", *s++);
   printf(" ");
 
  
  

   i++;
 }
 
 
  // printf("%c \n", *(s+4));
}