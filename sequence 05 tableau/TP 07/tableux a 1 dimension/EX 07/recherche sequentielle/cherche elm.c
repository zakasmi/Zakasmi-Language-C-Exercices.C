#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // recherche elmt tab 
    
    
    int tab[5];
    int i=0,j,x,pos;
    
    // remplir le tableau
    do {
        
       printf(" entrer une valeur ");
       scanf("%d",&tab[i]);
        
        i++;
        
        
        
        }while(i<5);
    
    // afficher le tableau 
    putchar('\n');
    for(j=0;j<5;j++){
          
          
          printf("%d   ",tab[j]);
          
          
          }
    putchar('\n');
    
    
    // saisie d'element a chercher 
    
    printf("entrer l'element a rechercher");
    scanf("%d",&x);
            
     // cherhcer dans le tableau    
     pos=-1;           
         i=0;          
    do {
        if (tab[i]==x){
                       pos=i;
                       }
                       
        i++;
        }while(pos==(-1)&& i<5);
    
    
  if (pos==-1)  {
    printf(" l'element ne se trouve pas dans le tableau ");
}else printf("la valeur %d se trouvedans la %d iem pos ",x,pos+1);
    putchar('\n');
    
    
    
  
  system("PAUSE");	
  return 0;
}
