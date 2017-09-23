/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i=1,j=0,x=0,n,tab[10][10];
    
    
    printf("entrer N nombre de ligne ");
    scanf("%d",&n);
tab[0][0]= 1;

    for(i=0;i<=(n-(n-1));i++){
                           
                     for (j=1;j<n-1;j++) tab[i][j]= 0;             
                            
  
}
    j=0;
    for(i=0;i<(n-1);i++)tab[i][j]=1;
    tab[1][1]=1;
    i=2;
    while(x<n){
           for(j=1;j<(n-1);j++) {
            tab[i][j]=tab[i-1][j]+tab[i-1][j-1];
        
            
            }
            putchar('\n');
            i++;
            x++;
            }
            
      for(i=0;i<(n-1);i++){
                           
                     for (j=0;j<n-1;j++) printf("%4d  ",tab[i][j]);             
                            
  putchar('\n');
}          
    
    
  
  system("PAUSE");	
  return 0;
}*/
#include <stdio.h>
 
long factorial(int);
 
int main()
{
   int i, n, c;
 
   printf("Enter the number of rows you wish to see in pascal triangle\n");
   scanf("%d",&n);
 
   for (i = 0; i < n; i++)
   {
      
 
      for (c = 0 ; c <= i; c++)
         printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
 
      printf("\n");
   }
 getch();
   return 0;
}
 
long factorial(int n)
{
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;
}
