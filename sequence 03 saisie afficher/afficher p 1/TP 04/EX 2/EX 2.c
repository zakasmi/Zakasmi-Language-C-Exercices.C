#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char *argv[])
{
  
  float N=12.1234;
  double M=12.123456789;
  long double P= 15.5;
  
  
  printf("N = %G \n",N );
  printf("M = %f \n",M );
  printf("N = %e \n",N );
  printf("M = %e \n",M );
  // long double besoin 16 octets = 128 bits .donc il peut pas travaille dans ce systeme
  printf("P = %Le\n",P);
  
  
  
  system("PAUSE");	
  return 0;
}
