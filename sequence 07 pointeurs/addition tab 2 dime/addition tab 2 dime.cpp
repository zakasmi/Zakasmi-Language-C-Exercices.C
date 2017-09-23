#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addition(int A[3][4],int B[3][4]);

int main(int argc, char *argv[])
{
    
    int mat1[3][4]={{1,3,2,1},{3,6,8,1},{12,5,1,14}};
    int mat2[3][4]={{1,2,3,4},{3,9,8,3},{12,5,3,14}};
    int i,j;
   addition(mat1,mat2);
    
    
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
                          
                          printf("%3d ",mat1[i][j]);
                          }
                          putchar('\n');
                          }
      /**/
      
      /*char tab[]="bonjour";
      int i;
      i=strlen(tab+2);
      printf("%d",i);*/
      
      
  system("PAUSE");	
  return 0;
}
  

void addition(int A[3][4],int B[3][4]){
     
     int i,j;
     
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
        
                  A[i][j]=A[i][j]+B[i][j];        
                          
                          }
                          }
     }




