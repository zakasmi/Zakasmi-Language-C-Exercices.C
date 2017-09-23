#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int k,j,i,N;
    
    do {
printf("entrer un nombre pair \n");
scanf("%d",&N);

if (N%2!=0)printf("donner un nombre pair\n");

    }while(N%2!=0);
    
    
    for (i=0;i<N;i++)printf("-");
   putchar('\n');
   
    for(k=1;k<=N/2;k++){
                    
               for(i=1;i<=k-1;i++)printf(" ");
               printf("\\");     
               for(i=1;i<=N-(2*k);i++)printf(" ");   
               printf("/");
               putchar('\n');
                         
                    }
    for(k=N/2;k>=1;k--){ 
        for(i=k;i>1;i--)printf(" ");
        printf("/");
        for (i=0;i<N-2*k;i++)printf(" ");
        printf("\\");
        putchar('\n');
}
  
      for (i=0;i<N;i++)printf("-");
      putchar('\n');
      
      
  system("PAUSE");	
  return 0;
}
