#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // inserer une valeur dans la dernier case du table trier . puis trier le tableau une deuxiem fois 
    
    int TAB[6]={2,5,6,8,9};
    int x,i,j;
    
    printf("entrer une valeur dans la dernier case de tabde 6 case");
    scanf("%d",&TAB[5]);
    for(i=0;i<=5;i++){
                      printf("%d  ",TAB[i]);
                      }
                      putchar('\n');
    x=TAB[5];
    j=0;
  //  while (x>TAB[j] && j<5){j++;
          
     //     }
          // apres while j=5 c'est la dernier case .doc c'est la meme case .car la dernier case est le plus grand
          // donc on va pas permuter . j doit etre ! de 5 pour permuter 
          
   
         for(i=1;i<=5;i++){
             x=TAB[i];
             j =i;
             while(j>0 && TAB[j-1]>x){
                     TAB[j]= TAB[j-1];
                     j=j-1;
                     }           
               TAB[j]=x;
               }
         
    


    for(i=0;i<=5;i++){
                      printf("%d  ",TAB[i]);
                      }
    
    
    
  
  system("PAUSE");	
  return 0;
}
