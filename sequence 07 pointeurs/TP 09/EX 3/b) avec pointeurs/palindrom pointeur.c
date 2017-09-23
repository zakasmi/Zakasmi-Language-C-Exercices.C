#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char ch1[30],ch2[30];
  int i,j,len1,len2,pal=1;
  char *p1,*p2;
  
  p1=ch1;
  p2=ch2;
  
  puts("entrer une chaine ");
  gets(p1);
  
  len1=strlen(p1);
  
  for(i=0,j=0;i<=len1;i++){
        
        if(*(p1+i)!=' '){ *(p2+j)=*(p1+i);
        j++;
        }
        
        }
        
      puts(p2);  
len2=strlen(p2);
  j=0;
  while (pal==1 && j<=len2-1){
        
        if (*(p2+j)!=*(p2+(len2-1-j)))pal=0;
        
        j++;
        }
  
  if (pal==1)puts("la chaine est une palindrom");
  else puts("la chaine n'est pas une palindrom");
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
