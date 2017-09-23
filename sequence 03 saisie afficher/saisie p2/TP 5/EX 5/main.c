#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int R,Q,A,B;
  
  
  printf("entrer A\n");
  scanf("%d",&A);
  printf("entrer B\n");
  scanf("%d",&B);
  
  R=A%B;
  Q=A/B;
  printf("Le quotient Q=%d et Le rsst est R=%d\n",Q,R);
  
  system("PAUSE");	
  return 0;
}
