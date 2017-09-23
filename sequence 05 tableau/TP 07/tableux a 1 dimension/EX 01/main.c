#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // remplir conditionnel et calculer la somme des element 
  int i=-1,j,somme=0;
  
  
  int T[50];
  char reponse;
  printf("entrer une valeur");
  
  do {
      i++;
      scanf("%d",&T[i]);
      fflush(stdin);
      somme =somme+T[i];
      printf("encore un autre nombre o/n ");
      scanf("%c",&reponse);
      
      }while((reponse=='o')&&(reponse!= 'n')&& (i<=48));
  printf("la somme de ");
  for(j=0;j<=i;j++){
                   printf("%d ",T[j]); 
                    }
 printf("et %d ",somme);
  putchar('\n');
  
  
  
  system("PAUSE");	
  return 0;
}
