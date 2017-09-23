#include <stdio.h>
#include <stdlib.h>

int main ()
{
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ++ch) 
   {
      putchar(ch);
   }
   putchar('\n');
   system("pause");
   return(0);
}
