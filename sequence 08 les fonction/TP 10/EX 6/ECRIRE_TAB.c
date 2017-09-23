#include <stdio.h>
#include <stdlib.h>
void ECRIRE_TAB(int *A,int C);
int main(int argc, char *argv[])
{
  
  int tab[10]={5,3,6,8,12,19,23};
  int x;
  printf("entrer le nombre de case a afficher");
  scanf("%d",&x);
  
  
  ECRIRE_TAB(tab,x);
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}



void ECRIRE_TAB(int *A,int C){
     int i;
     for(i=0;i<=C-1;i++)printf("%3d ",A[i]);
     
     
     }

