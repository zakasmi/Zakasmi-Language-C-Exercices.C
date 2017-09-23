#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //tableau de int 2 dimension 
    
    
  /*int tab[3][2]={{3,6},{7,8},{9,8}};
  int *p;
  int i;
  
  p =(int *)tab;
  
  
  
  
  for(i=0;i<=5;i++)printf("%d ",*(p+i));*/
  
  
     
     
     //tableau de char de 2 dimension
     // on peut pas afficher une matrice de chaine de caracter par un pointeur 
     // par ce que *(p+i) va s'incrementer par 1 case a la fois don on peut ecrire un caracter a la fois 
     // on peut pas ecrit une chaine 
     //pour les car on va commencer par *(p+0) jusqua *(p+29)
     //  z k a r i a \0
     //  h a m i d \0
     //  r a c h i d  \0
     // donc *(p+i) va ecrire z puis k . ..  puis a . puis h ... d puis r puis a jusqua d un lettre a la fois 
     // donc il ne peut pas ecrire une chaine
     // on peut just ecrire la premier chaine printf("%s",p) va afficher zakaria
  char tab[3][10]={"zakaria","kasmi","hamid"};
  char *p;
  int i;
  
  p =(char *)tab;
  
  
  
//printf("%s",p);
  for(i=0;i<=29;i++)
  printf("%s",p+i);
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
