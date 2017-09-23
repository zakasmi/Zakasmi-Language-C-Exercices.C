#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
// largeur minimale pour les entier (les nombre sont justifie a droite )
// pour les entier meme si tu declare largeur 4 et tu ecrit un nombre de 5 . ils sont ecrit 
// si tu declare largeur 4 et tu ecrit un nombre de 3 . le compilateur va remplir le reest par le vide  
  
printf("%d\n",123);
printf("%4d\n",123);
printf("%4d\n",1234);
printf("%4d\n",12345);  
printf("%4u\n",0);
printf("%4X\n",123);
printf("%4x\n",123);


printf("\n\n\n");
printf("les nombre reel\n\n");
// la precision par defaut et fixée a six decimales les position decimales sont arrondies a  la valeur la plus proches 

printf("%f \n\n",100.123);

//12 le nombre total des nombres . si on veut la precision on ecrit .n 
printf("%12f\n\n",100.123);

// ecrit 2 nombre apres virgule 
printf("%.2f\n\n",100.123);

//5 le nombre total des nobre .et 0 le nombre des numero apres virgule 
printf("%5.0f\n\n",100.123);

//  nombre total des numero et 10 le nombre de numero apres virgule et 3 .ajouter des espace si le nombre de nbr!= 10
printf("%10.3f\n\n",100.123);

//4 le nombre de chiffre apres virgule 
printf("%.4f\n\n",1.23456);

  
  
  system("PAUSE");	
  return 0;
}
