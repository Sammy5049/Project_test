#include <stdio.h>
int string_len(char *s);

int string_len(char *s)
{

int len_of_st = 0;

while (s[len_of_st] != '\0')
{
 len_of_st++;
}

int i = 0;
 
while (s[i] != '\0')
{
 if (s[i] != s[4])
 {
  /* code */
 putchar(s[i]);
 }
 
 i++;
}

putchar('\n');


 return len_of_st;
}

int main(void)
{
char *str;
int len;

str = "My name is samuel";

len = string_len(str);


printf("%d", len);
 return 0;
}
