#include <stdio.h>
#include <stdlib.h>

int main(){

    
    int f,m,n,i,j,ia,ib,k,taillemin;
    
    printf("entrer le nombre de case reserver  pour A ");
    scanf("%d",&m);
    
    printf("entrer le nombre de case resserver pour B ");
  scanf("%d",&n);
 
  
  int  A[m],B[n];
  m--; 
  n--;
  //cpmaraison de case 
  if (m>n){ f=m;
  taillemin=n;}
  else {f=n;
  taillemin=m;}
  
  int F[f];
 //remplir le tableau A 
  for(ia=0;ia<=m;ia++){
                       printf("entrer la valeur de case A[%d]  ",ia);
                       scanf("%d",&A[ia]);
}
  //remplir le tableau  B
  for(ib=0;ib<=n;ib++){
                      printf("entrer la valeur de case B[%d]  ",ib);
                      scanf("%d",&B[ib]);
}
 //affichage de tableau a 
 for(ia=0;ia<=m;ia++){
                      printf("%3d  ",A[ia]);
}
 putchar('\n');
 // affichage de tableau b
 
 for(ib=0;ib<=n;ib++){
                      printf("%3d  ",B[ib]);
}
putchar('\n');

 // fusion de f
 
 for(k=0; k<=taillemin;k++){
      if (A[k]< B[k]) F[k]=A[k];
      else F[k]=B[k];
       
}

 
 if (m>n){
  
   for(j=k;j<=m;j++){
                    F[j]=A[j];    
      }}
      
  else {    
  for(j=k;j<=n;j++){
                    F[j]=B[j];                 
      }
      }
 j--;
  for(i=0;i<=j;i++){
        
        printf("%3d  ",F[i]);
        
        }
  putchar('\n');
  
  
  
  system("PAUSE");	
  return 0;
}
