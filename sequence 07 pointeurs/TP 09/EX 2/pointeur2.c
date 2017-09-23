#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int A[]={12,23,34,45,56,67,78,89,90};
  
  int *p;
  p=A;
  
  printf("a)%-20d\n",*p+2);  //12+2
  printf("b)%-20d\n",*(p+2)); // 34 => A[2]
  printf("c)%-20d\n",&p+1);  //adresse de p +1 # !different de A[1] <= fausse 
  printf("d)%-20d\n",&A[4]-3); // adress de A[1]
  printf("e)%-20d\n",A+3);
  printf("f)%-20d\n",&A[7]-p); //difference entre A[0] et A[7] . nombre de case
  printf("g)%-20d\n",p+(*p-10));// adress de A[2] dont la valeur =34 . *(p+(*p-10)) entrer pour confirmer
  printf("h)%-20d\n",*(p+*(p+8)-A[7])); // p+90-89 =p+1 donc *(p+1)
  
  
  
  system("PAUSE");	
  return 0;
}
