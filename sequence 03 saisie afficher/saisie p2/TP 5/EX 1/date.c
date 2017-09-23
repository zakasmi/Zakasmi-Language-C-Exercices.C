#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int jour,mois;
  int anne;
  
  
  do {
      printf("entrer le jour \n");
      scanf("%2d",&jour);
      } while( jour <=1 || jour>=31 );
      
      do {
      printf("entrer le mois \n");
      scanf("%2d",&mois);
      } while( mois <=1 || mois>=12 );
      
      do {
      printf("entrer l'anne \n");
      scanf("%4d",&anne);
      } while( anne <=1900 || anne>= 2050);
       
       printf("%02d-%02d-%04d \n",jour,mois,anne);
  
  
  system("PAUSE");	
  return 0;
}
