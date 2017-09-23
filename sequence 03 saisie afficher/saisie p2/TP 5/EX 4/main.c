#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int tmp,A,B,C;
    
    
    printf("entrer A\n");
    scanf("%d",&A);
    printf("entrer B\n");
    scanf("%d",&B);
    printf("entrer C\n");
    scanf("%d",&C);
    
    tmp=A;
    A=C;
    C=B;
    B=tmp;
    
    printf("les valeur apres permutation A=%d B=%d C=%d \n",A,B,C);
    
    
  
  system("PAUSE");	
  return 0;
}
