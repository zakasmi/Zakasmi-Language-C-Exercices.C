#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char ch1[30],ch2[30];
  int i,j,len1,len2,pal=1;
  
  
  puts("entrer une chaine");
  gets(ch1);
  len1=strlen(ch1);
  
  
  //supprimer les espaces
  for(i=0,j=0;i<=len1;i++){
        
        if(ch1[i]!=' '){
        ch2[j]=ch1[i];
        j++;
        }
}
  //ch2[j]='\0'; deja remplie 
 len2 = strlen(ch2); 
 
  puts(ch2);
  //printf("%d ",len2);
  putchar('\n');
  j=0;
  while((pal==1) && (j<=len2-1)){
            
            if(ch2[j]!=ch2[len2-1-j])pal=0;
            
            j++;
            }
  
  if (pal==1)printf("%s est une palindrom",ch2);
  else printf("%s n'est pas une palindrom",ch1);
  
  putchar('\n');
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
