#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int f=4;
  
  float a=15;
  char b=3; //code ascii de a 97 
  short c=10 ; 
  float k=4;
  
printf("%d",b);
   printf("le resultat c+3 et %f \n ",2*f+(b+10)/k);
   
  printf("le resultat est b+1 %d \n",b+1);
  
  printf("le resultat est b+c %d \n",b+c);
  
  printf("le resultat est  3*c+2*b %d \n",3*c+2*b);
  
  printf("le resultat est 2*b+(a+10)/c %d \n",2*b+(a+10)/c); // on %d type int affiche 0 . doit etre %f pour afficher 8.5
  
  k=2*b+(a+10.0)/c;
  
 printf("le resultat est  2*b+(a+10.0)/c %f \n\n",k);
 
 
 //casting 
 
 
 char n=3;
 int d=4;
 float m;
 
 
 m=(float)f/d;
 printf("le resultat de f/d est %.2f \n  ",m); // si on veut affficher le resultat comme float on doit converter un des operant
 // a float 
 
 
 
 
  
  
  
  system("PAUSE");	
  return 0;
}
