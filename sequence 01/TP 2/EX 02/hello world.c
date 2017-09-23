#include <stdio.h>


int main()
{
    
    printf("hello world \n");
    printf("hello \t world \n");
    // \0 ignore les caractere apres \0
    
 printf("he\0llo  world \n");
  printf("\n");
  
   printf("hello \a world \n");
   
   // \r effacer tous les caractere arriere 
   printf("hello \r world \n");
   
  //effacer le caractere arriere 
  
   printf("hello\b world \n");
   
   printf("hello \' world \n");
   
   printf("hello \" world \n");
  
  system("PAUSE");	
  return 0;
}
