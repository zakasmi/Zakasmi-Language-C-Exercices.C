#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  
  int L,C,i,j,som=0;
  printf("entrer le nombre de colonnes ");
  scanf("%d",&C);
  printf("entrer le nombre de ligne");
  scanf("%d",&L);
  int tab[L][C];
  C--;
  L--;
//  remplissage de tableau 
  for(i=0;i<=L;i++){
        for(j=0;j<=C;j++){
              printf("tab[%d][%d]=  ",i,j);
              scanf("%d",&tab[i][j]);
              som=som+tab[i][j];
              }
        
        }
// affichage de tableau 
   for(i=0;i<=L;i++){
        for(j=0;j<=C;j++){
              printf("%4d",tab[i][j]);
             
              }
        putchar('\n');
        }
  
  
  system("PAUSE");	
  return 0;
}
