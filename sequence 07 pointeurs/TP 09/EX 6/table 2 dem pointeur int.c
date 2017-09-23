#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  
  int A[3][2];//={{4,5},{6,9},{12,3}};
 int i=0,j,k,*p;
  char reponse;
  p=(int *)A;
  
  // remplir le tableau avec pointeur
  do {
      puts("entrer un nombre");
  scanf("%d",p+i);
  
  puts("une autre nombre o/n");
  fflush(stdin);
  reponse=getchar();
  fflush(stdin);
  i++;
  }while(reponse!='n'&& reponse=='o'&& i<=5);
  
  // affichage du tableau avec pointeur . tab unidimensionnel
 // for(j=0;j<i;j++)printf("%d ",*(p+j));
  
  
  //affichage normal  par A
  for(j=0;j<3;j++){
  for(i=0;i<2;i++){
                   printf("%d ",A[j][i]);
                   
} 
putchar('\n');
}
  
  
  
  
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
