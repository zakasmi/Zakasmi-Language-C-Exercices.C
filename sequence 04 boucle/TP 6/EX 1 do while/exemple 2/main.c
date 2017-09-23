#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n,div;
  
  // while div =0 you will write it again
  
  printf("entrer le nombre a diviser ;");
  scanf("%i",&n);
  
  do{
       printf("entrer le diviseur (0)");
       scanf("%i",&div);
                 
                 
                 }while(!div);
                 printf("%i  / %i = %.2f \n",n,div,(float)n/div);
  
  
  
  system("PAUSE");	
  return 0;
}
