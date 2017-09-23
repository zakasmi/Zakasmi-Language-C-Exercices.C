#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  int n,i,j;
  double x,resultat;
  double A[20];
  
  
  
  printf("entrer x ");
  scanf("%lf",&x);
  
  printf("entrer la puissance n ");
  scanf("%d",&n);
  
  for(i=0;i<=n;i++){
                    printf("entrer une valeur ");
                   scanf("%lf", &A[i]);
       
                    }
                    resultat=0;
  for(j=0;j<=n;j++){
                    
               resultat=resultat+(A[j]*pow(x,j)); 
               printf("A[%d] =%lf  pow (%.2lf %d )  %.2lf \n",j,A[j],x,j,pow(x,j));    
                    
                    }
  printf("le resultat est %.2lf \n",resultat);
  
  
  system("PAUSE");	
  return 0;
}
