#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
       // pre incrementaion
    
/*  int i = 0;
int j = i;
 while(j < 5) {
    printf("%d", i);
    j = ++i;
}

   */  // post incrementaion 

int i = 0;
int j = i;
while(j < 5) {
    printf("%d", i);
    j = i++;
}
  
  
  
  
  system("PAUSE");	
  return 0;
}
