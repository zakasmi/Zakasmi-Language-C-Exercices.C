#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,max,min,posmax,posmin;

  
  printf("entrer le nombre d'element de tableau ");
  scanf("%d",&i);
 
  int TAB[i];
   i--;
  for(j=0;j<=i;j++){
                   printf("entrer une valeur "); 
        scanf("%d",&TAB[j]);
        
        }
        max=TAB[0];
        min=TAB[0];
        posmax=0;
        posmin=0;
   for(j=1;j<=i;j++){
                     
                 // chercher le maximunm
                
                if (max<TAB[j]){
                      max=TAB[j];
                      posmax=j;
                      }     
                      
                // chercher le minimum 
                 if (min>TAB[j]){
                       min=TAB[j];
                       posmin=j;
                       
                       }    
                     
            
                     }     
                     
   printf("le maximum est %d et son position est %d \nle minimum est %d est son position est %d \n",max,posmax+1,min,posmin+1); 
  putchar('\n');
  
  system("PAUSE");	
  return 0;
}
