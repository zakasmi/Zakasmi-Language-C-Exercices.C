#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    
    
    // la difference entre table de pointeur et table de chaines (matrice) c'est que table de pointeur economie l'espace
    // quand en ecrit NOM1[i] on veut l'adresse de pointeur ex nom1[3], qui point sur une chaine . 
    // pour afficher la chaine just indique l'address de premier case 
     
  char *NOM1[]={"marc","jean-marie","paul","francois-xavier","claude"};
  char NOM2[][16]={"marc","jean-marie","paul","francois-xavier","claude"};
  
  int i,j,*p1,**p2;
 /* p1=(int *)NOM1;
  p2 = &p1;*/
  printf("\taffichage de table de pointeurs \n\n");
  
  for(i=0;i<=4;i++)printf("%s ",NOM1[i]);
 // printf("%s",*(*(p2)));
  
  putchar('\n');
  
  printf("\n \taffichage de table de chaines\n ");
  printf("\n");
  
  
  for(j=0;j<=4;j++){
                    
  printf("%s ",NOM2[j]);
  
  putchar('\n');
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
