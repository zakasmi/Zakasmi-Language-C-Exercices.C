#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i,N,tmp;
  char trouve='o';
  //entrer le nombre de case qui sera reserver 
  
  printf("entrer le nombre de case a reserver ");
  scanf("%d",&N);
  
  //declaration de tableau 
  int tab[N];
  N--;
  //remplissage de tableau 
  for(i=0;i<=N;i++){
        printf("entrer la valeur de tab[%d]",i);
        scanf("%d",&tab[i]);
        
        }
  putchar('\n');
  
  // affichage de tableau non trier 
  printf("tableau non trier :");
  for(i=0;i<=N;i++){
        printf("%3d",tab[i]);
  
}
putchar('\n');
 // trier le tableau type  croissant
 while (trouve=='o'){
       
       trouve='n';
       for(i=0;i<N;i++){
             if (tab[i]>tab[i+1]){
                   tmp=tab[i];
                   tab[i]=tab[i+1];
                   tab[i+1]=tmp;
                   trouve='o';
                   }   
                  // printf("N = %d",N);
             }
       
       }
//  affichage de tableau trier 

  printf("tableau trier     :");
  for(i=0;i<=N;i++){
        printf("%3d",tab[i]);
  
}

putchar('\n');

  system("PAUSE");	
  return 0;
}
