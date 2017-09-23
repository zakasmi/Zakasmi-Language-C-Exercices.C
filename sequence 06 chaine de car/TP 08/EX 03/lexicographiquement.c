#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
int main(int argc, char *argv[])
{
  
  char ch1[20],ch2[20];
  int cmp;
  
  puts("entrer la premier chaine ");
  gets(ch1);
  
  puts("entrer la dauxiem chaine");
  gets(ch2);
  
  cmp=strcmp(ch1,ch2);
  
  if(cmp==1)puts("ch1 suit ch2 .");
  if(cmp==0)puts("ch1 egale a ch2");
  if(cmp<0)puts("ch1 precede ch2 ");
  
  
  
  system("PAUSE");	
  return 0;
}
