#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int L,C,i,j,k,l,a,b,h,M[10][10],V[10][10];
    
    
    
    printf("entrer le nombre de colonnes ");
    scanf("%d",&C);
    printf("entrer le nombre de ligne ");
    scanf("%d",&L);
    
    //remplir le tableau 
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
              printf("entrer une valeur ");
              scanf("%d",&M[i][j]);
              }
              
        }
  //affichage 
  for(i=0;i<L;i++){
        for(j=0;j<C;j++){
              printf("%3d ",M[i][j]);
              
              }
              getch();
              putchar('\n');
        }      
        
        
        k=0;
        l=0;
//converter tableau les ligne a les colonne de et les colonne de m a les ligne de v 
/*  for(a=0;a<L;a++){
                   k=0;
                   for(b=0;b <C;b++){
                         V[k][l]=M[a][b];
                         k++;
                         }
                   l++;
                   }*/
       for(i=0;i<L;i++){
                        
                        for(j=0;j<C;j++){
                                         V[j][i]=M[i][j];
                                         }
                        
                        }             
  
  putchar('\n');
  // affichage de tableau v[][]
   for(k=0;k<C;k++){
                    for(l=0;l<L;l++){
                         printf("%3d ",V[k][l]);
}
putchar('\n');
}
  system("PAUSE");	
  return 0;
}
// remplissage de tableau 
  
