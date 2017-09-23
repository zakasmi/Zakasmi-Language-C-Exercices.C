#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    
    char ch1[30],chabc[26];
    int nbr[26];
    int i=0,j=0,k=0,lench1;
    
    
    
    puts("entrer une chaine");
    gets(ch1);
    lench1=strlen(ch1);
    
    
    
    if(lench1!=0){
                  
                  while(i<=lench1-1){
                          
                          if(isalpha(ch1[i])){
                          chabc[k]=ch1[i];
                          nbr[k]=1;
                          for(j=i+1;j<=lench1-1;j++){
                                                  
                                if(ch1[i]==ch1[j]){
                                nbr[k]++;
                                ch1[j]='0';
                                }
                                
                                
                                } // for j=i
                                k++;  
                                }   // if isalpha
                          
                          i++;
                          }  //while i
                  
                     }//if lench
    else puts("vide !!!");
    
    
    
    for(i=0;i<=k-1;i++){
                        printf("%d fois la lettre %c",nbr[i],chabc[i]);
                        
                        putchar('\n');
                        }
    
    putchar('\n');
  
  system("PAUSE");	
  return 0;
}
