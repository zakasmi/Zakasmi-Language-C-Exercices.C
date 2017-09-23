#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int A=1;
  int B=2;
  int C=3;
  int *p1,*p2;
  
  printf("    A   B   C   p1                    p2\n\n");
  printf("0 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  
  p1=&A;
  printf("1 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  p2=&C;
  printf("2 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  *p1=(*p2)++;
  printf("3 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  p1=p2;
  printf("4 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  p2=&B;
  printf("5 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  *p1-=*p2;
  printf("6 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  ++*p2;
  printf("7 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  *p1*=*p2;
  printf("8 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  A=++*p2**p1;
  printf("9 ) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  p1=&A;
  printf("10) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  *p2=*p1/=*p2;
  printf("11) %-4d%-4d%-4d%-10p%20p\n",A,B,C,p1,p2);
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
