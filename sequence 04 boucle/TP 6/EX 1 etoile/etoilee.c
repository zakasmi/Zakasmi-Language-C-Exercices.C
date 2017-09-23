#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,k,ligne,espace;
  printf("entrer le nombre de ligne ");
  scanf("%d",&ligne);
  
  espace=ligne;
  
  for(i=1;i<=ligne;i++){
        
        for(j=1;j<=(espace-1);j++){
              printf(" ");
              
              }
              
        for(k=1;k<=(i+i-1);k++){
                    printf("*");
                    
                    
                    }
                    
        espace -=1;      
        printf("\n");      
              
              
              
        
        
        
        
        
        
        }
  
  
  
  
  system("PAUSE");	
  return 0;
}
