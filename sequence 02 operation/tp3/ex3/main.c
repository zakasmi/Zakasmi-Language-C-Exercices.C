#include <stdio.h>
#include <math.h>

int main()
{
  
  double a,res;
  double b,hyp;
  
  
  // saisie de a et b 
  printf("introduire la valeur pour a :\n");
  scanf("%lf",&a);
  
  printf("introduire la valeur pour b :\n");
 
   scanf("%lf",&b); 
 //calcul 
   res = (a*a)+(b*b);
 //affichage de resultat 
 //printf("le carre de a est %f \n",res);
 //Calcul
    
    hyp= sqrt(res);
    printf(" l'hypotenus est %f \n",hyp);
    printf("la tengente de a est %f\n",sin(a)/cos(a));
    
    
  res = floor(a/b);
  /* Affichage du résultat */
 printf("La valeur arrondie en moins de A/B est %f \n", res);
 /* Calcul */
 res = floor(1000*(a/b))/1000;
  /* Affichage du résultat */
 printf("La valeur A/B arrondie à trois décimales: %f \n", res);
 
 
 
 /* 22222
 
 
  */
  system("PAUSE");	
  return 0;
}
