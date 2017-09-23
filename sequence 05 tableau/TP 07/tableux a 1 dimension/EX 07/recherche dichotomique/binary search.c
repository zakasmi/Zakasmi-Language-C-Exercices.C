#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int tab[5]={1,3,4,7,8};
  int i,j,mid,high,low,x,found=0;
  
   printf("recherche dichotomique ");
high=4;   // high = N -1 N=le nombre de case 
low=0;


          // affichage du tableau  

for(i=0;i<=4;i++) printf("%d  ",tab[i]);

putchar('\n');

          //entrer la valeur a rechercher 
  printf("entrer la valeur a chercher ");
  scanf("%d",&x);
  
         // recherche dichotomique 
         
  while((high > low)&& found==0){
               mid= low+((high- low)/2);    
               
              
                     if (tab[mid]<x){low=mid+1;printf("pas 1 low %d  high %d  mid %d \n",low,high,mid);}
                    else if (tab[mid]>x){high=mid-1;printf("pas 2 low %d  high %d  mid %d \n",low,high,mid);}
                    else if (tab[mid]==x){found=1;printf("pas 3 low %d  high %d  mid %d \n",low,high,mid);}
                  
           
                   
                   }
       // pos d'element dans un tableau pair est mid mais dans un tableau impair mid+1   
                   
  if (found!=0){
            printf("l'element se trouve dans le %d ieme case \n",mid+1);
            }else printf("pas d'element dans le tableua\n");
  
  
  
  
  system("PAUSE");	
  return 0;
}
