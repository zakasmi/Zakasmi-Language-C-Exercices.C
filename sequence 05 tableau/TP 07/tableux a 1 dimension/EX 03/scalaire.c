#include <stdio.h>
#include <stdlib.h>

int  scalaire (int t1[10],int t2[10],int x);

int main(int argc, char *argv[])
{
  int TAB1[10],i=0,j=0;
  int TAB2[10],resultat;
  char c;

  printf("remplissage du tableua 1 . entrer un nombre !! \n");
  
  do{
                 
                 
      scanf("%d",&TAB1[i]);
  fflush(stdin);
  
  i++;
  printf("encore une nombre o/n");
  c=getchar();
  fflush(stdin);
  
}while (c=='o'&&c!='n'&& i<=9);
  
 printf("remplissage du tableua 2 . entrer un nombre !! \n"); 
  fflush(stdin);
  
  while(j<i){
                 
                 
      scanf("%d",&TAB2[j]);
  
  j++;
     if (j<i){
              printf("entrer un autre nombre pour l'egaliter de tableau 1 et 2 \n");
              }else printf("arrter le remplissage \n");
     
}


resultat=scalaire(TAB1,TAB2,j);
printf("le produit scalaire de tableau 1 et 2 est %d",resultat);

  putchar('\n');
  
  system("PAUSE");	
  return 0;
}

int scalaire(int t1[10],int t2[10],int x){
    int resultat=0,i;
    
    for(i=0;i<x;i++){
          resultat = resultat +(t1[i]*t2[i]);
          
          }
    return resultat;
    
    }
