#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char ch1[20],ch2[20],ch3[40];
  int len1,len2;
  
  puts("entrer la chaine 1");
  gets(ch1);
  len1=strlen(ch1);
  puts("entrer la chaine 2");
  gets(ch2);
  len2=strlen(ch2);
  
  
  
  strncpy(ch3,ch1,len1/2);
  strncat(ch3,ch2,len2/2);
  
  puts(ch3);
  
  system("PAUSE");	
  return 0;
}
