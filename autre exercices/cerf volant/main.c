#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i,j,k,N;
  
 do {
     
       printf("donner la taille pair  \n");
        scanf("%d",&N);
 
        if ((N % 2)!=0) printf("la taille doit Etre pair\n");
  
 }while((N % 2)!=0);
 
 
 
        
        
        
        
  
  
       for (k=1;k<=(N/2);k++){
      
             for(j=1;j<=(N/2)-k;j++)printf(" ");
            
             printf("/"); 
          
             for(i=0;i<k-1;i++)printf(" ");
            
             printf("|");
      
             for(i=0;i<k-1;i++) printf(" "); 
              
            
     printf("\\\n");
     }
      
      
      // ecrire un ligne 
      for(i=1; i<=N/2;i++) printf("-");
      printf(" ");
      for(i=1; i<=N/2;i++) printf("-");
      
      //_______________________________________
      
      putchar('\n');
      
      for (k=N/2;k>=1;k--){
      
          for(j=N/2-k;j>=1;j--)printf(" ");
            
          printf("\\"); 
           
          for(i=k;i>1;i--)printf(" ");
            
          printf("|");  
            
          for(i=0;i<k-1;i++)printf(" ");
            
     printf("/\n");
     }
      
      
      
      
      
      
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
