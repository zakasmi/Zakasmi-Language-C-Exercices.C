#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int N,i=0,j,k,tmp;
    
    printf("entrer le nombre de case a reserver ");
    scanf("%d",&N);
    putchar('\n'); 
    //declaration de tableau 
    int tab[N];
    N--;
    //remplissage de tableau
    for(k=0;k<=N;k++){
    printf("entrer une valeur");
          scanf("%d",&tab[k]);
          
          }
          putchar('\n'); 
          printf("le tableau non trie :"); 
    //affichage de tableau non trier
          
    for(k=0;k<=N;k++){
          printf("%3d ",tab[k]);
          
          
          } 
       putchar('\n');   
    // trier en ordre decroissant .tri par selection
    while (i<N){
          
          for(j=(i+1);j<=N;j++){
                if(tab[i]<tab[j]){
                     tmp=tab[i];
                     tab[i]=tab[j];
                     tab[j]=tmp;
                     }
                }
          
          
          i++;
          }
     // affichage de tableau trie 
     printf("le tableau trie     :");     
    for(i=0;i<=N;i++){
            printf("%3d ",tab[i]);          
                      
          }
    
    putchar('\n'); 
    
    
  
  system("PAUSE");	
  return 0;
}
