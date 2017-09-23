#include <stdio.h>

main(){
       
       int i=1,somme=0;
       int j=1,som=0;
       
       for(i=10;i<15;++i){
                          printf("velue of i is : %d \n",i);
                          }
       
       
       
       do {
       somme += i;
       ++i;
       
       }while(i<=3);
       
       printf("somme i++ =%d\n ",somme);
       do {
           som +=j;
           ++j;
           
           }while(j<=3);
           printf("som ++j = %d\n ",som);
       
       
      
       
       getchar();
       return 0;
       }
