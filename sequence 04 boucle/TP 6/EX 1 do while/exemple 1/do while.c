#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // input conditionner 
//exemple
  float N;
  char reponse;
  
  // si tu entre 3 chiffres apres la question  une foi le premiere chifre va utiliser par getchar et les autres 
  // va entrer dans scanf en cas d'ancese de derinier fflush(stdin)
  
  // %08.2f le nombre total des chffres aussi + point virgule = 8 .
  reponse='o';
 while(reponse =='o'&& reponse !='n' ){
     
  do {
      printf("entrer un nombre entre 1 et 10 \n");
      scanf("%f",&N);
      printf("f= %1.2f\n",N);
      
      }while(N<1 || N>10 );
     
      printf("un autre nombre o/n\n");
  fflush(stdin);
     reponse=getchar();
    fflush(stdin);
     
     
      
      }
  
  
  
  system("PAUSE");	
  return 0;
}
