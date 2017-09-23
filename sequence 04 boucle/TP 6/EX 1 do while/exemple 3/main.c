#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    
    int N;
    
    
    do {
        
        printf("entrer un nombre N>= 0\n");
        scanf("%f",&N);
        
    
        }while(N<0);
        
        printf("le racin carre de %.2f est %.2f\n",N,sqrt(N));
    
  
  system("PAUSE");	
  return 0;
}
