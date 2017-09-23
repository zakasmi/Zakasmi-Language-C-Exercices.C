#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int i,j,k,h,col,M[10][10],V[100],v=0;
  char reponse='o';
  
printf("entrer le nombre de colonnes ");
scanf("%d",&col);
//      repmlissage de tableau 

      for(i=0;i<10;i++){
                    
                          
                          
//      remplissage   de ligne 
                for(j=0;j<col;j++){ 
                                                     
      printf("entrer M[%d][%d] ",i,j);
      scanf("%d",&M[i][j]);
     
     
                     }
                   fflush(stdin);  
                  erreur : 
printf("taper 'a' pour arreter le remplissage  \ntaper 'b' pour passer a la ligne suivant\n");
      
      reponse=getchar();
      fflush(stdin);
     switch(reponse){
                     case 'a' : goto stop;
                     case 'b' :continue ;
                     default :printf("erreur de choix entrer un autre fois !! \n\n\n");
                     goto erreur;
           
           }
           
      }
      stop :
  // affichage du tableau 
  for(k=0;k<=i;k++){
                for(h=0;h<col;h++){ 
                                                       
      printf("%4d ",M[k][h]);
      
}
putchar('\n');

//traduire  les valeur de tableu de 2 dimension a un tableau de 1 dimension
}
  for(k=0;k<=i;k++){
        for(h=0;h<col;h++){
                           
                       V[v]=M[k][h];
                       v++;    
                           
                           }
        }
        putchar('\n');
//  affichage de tableau 1 dimension
  for(k=0;k<v;k++){
                    printf("%3d  ",V[k]);
                    }
  
  
  
  
  system("PAUSE");	
  return 0;
}
