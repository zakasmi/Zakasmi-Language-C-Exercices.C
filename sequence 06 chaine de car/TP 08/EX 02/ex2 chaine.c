#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  
  char TXT[200],tmp;
  int len,i,nbr=0;
  char elm;
  
  // remplir chaine de car
  puts("entrer une chaine");
 gets(TXT);

// longueur de chaine 
len=strlen(TXT);  
  printf("la longuer de chaine est %d\n",len);
  
  // calculer le nombre de e
  puts("entrer l'element a chercher l'occurence");
  //fflush(stdin);
  scanf("%c",&elm);
  
  
  for(i=0;i<=(len-1);i++){
        if (TXT[i]==elm)nbr++;
        
        }
        
  // afficher le nombre d'occurence
  printf("le nombre de  contenus dans le texte est %d\n",nbr);
  
  for(i=0;i<=((len-1)/2);i++){
                              tmp=TXT[i];
                              TXT[i]=TXT[len-1-i];
                              TXT[len-1-i]=tmp;
                              }
  puts("le phrase apres rebours");
  puts(TXT);
  
  
  
  
  putchar('\n');
  
  system("PAUSE");	
  return 0;
}
