#include <stdio.h>
int print_stg(char *s);

    int main(void)
{
 int x = print_stg("Adeola");
 return 0;
}


int print_stg(char *s)
{

if (*s == '\0')
{
putchar('\n');
}

else
{
 putchar(*s);
 print_stg(++s);

}


}