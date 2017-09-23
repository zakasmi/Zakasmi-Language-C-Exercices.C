#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int reponse,Rser,Rpar,R1,R2,R3;
  
  
  printf("entrer les valeur des resistances en ordre suivant R1 puis R2 puis R3\n");
  scanf("%d%d%d",&R1,&R2,&R3);
  
  printf("R1=%d R2=%d R3=%d \n",R1,R2,R3);
  
  printf("entrer 1 si les resistance sont branchées en serie \nentrer 2 si les resistance sont branchées en parallèle\n");
do {  
  scanf("%d",&reponse);
 
 
  if (reponse == 2 || reponse ==1) {
              
               if (reponse == 1){
                    
                       Rser=R1+R2+R3;
                       
                       printf("la resistanse equivalent des resistance en serie Rser=%d\n",Rser); 
                       }
               else {
                      Rpar=(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
                
                    printf("la resistanse equivalent des resistance en parallèle Rpar=%d\n",Rpar);
                    }
                    }    
           
  else printf("ERREUR !! entrer une valeur valide 1 ou 2\n"); }
   while (reponse != 2 && reponse !=1);             
  
  
  
  system("PAUSE");	
  return 0;
}
