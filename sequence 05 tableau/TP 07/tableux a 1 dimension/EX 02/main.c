#include <stdio.h>
#include <stdlib.h>

void occurence(int TAB[50],int y);


int main(int argc, char *argv[])
{
    int x=-1,j,som=0;
    
    
  int T[50];
  char reponse;
  printf("entrer une valeur");
  putchar('\n');
  do {
      x++;
      scanf("%d",&T[x]);
      fflush(stdin);
      
      printf("encore un autre nombre o/n ");
      scanf("%c",&reponse);
      
      }while((reponse=='o')&&(reponse!= 'n')&& (x<=48));
  
  for(j=0;j<=x;j++){
                   printf("%d ",T[j]); 
                    }
                    putchar('\n');
                   
                    
printf("le nombre de case rempli est %d",x+1);

putchar('\n');

    
 occurence(T,x);
             
    putchar('\n');
  system("PAUSE");	
  return 0;
  
  
  
}
void occurence(int TAB[50],int y){
     int t2[50],i=0,k=0,n=0,z,f;
         
     while(i<=y){
                             
         if (TAB[i]!=0){    t2[k]=TAB[i];
         k++;
         i++;
         }else {
               i++;
               n++;
               
               }
     
             }
            
     for(i=0;i<=k;i++){
                 TAB[i]=t2[i];      
                       }
                       
       
          
                 i=k; 
    for(z=0,f=i;z<=n;z++,f++){
     TAB[f]= 0 ;
     }
        for(i=0;i<=y;i++){                           
                   printf("%d  ",TAB[i]); 
                    }
     
     }
