#include <stdio.h>
#include <stdlib.h>

int main()
{
    
  int A,B,C;
  float S,P;
  
  printf("entrer les longueur en ordre suivant A B C\n");
  scanf("%d%d%d",&A,&B,&C);
  
 
  
  printf("A=%d B=%d C=%d\n",A,B,C);
  // il faut converter quelque variable pour etre dstocker comme double en P
 P=  (((float) A)+B+C )/2;
 
 printf("p=%f\n",P);
 
 
  S= P*(P-A)*(P-B)*(P-C);
  printf("l'aire du triangle est S = %f \n",S);
  
  
  
  system("PAUSE");	
  return 0;
}

 
