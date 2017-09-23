#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     int  i = 12;
  // char  x='c';   // ascii value is 99 
  
   double sum;
/* 
   sum = i + x;
   printf("Value of sum : %f \n", sum);*/ // sum = 111.000
   
  int x=34;
  printf("x= %f\n",x);
     
     
     
     // implicite et explicite 
  /*   
     
    char f,a=49;
    int b=4;
    float d,e,k,c=2;
    d=a/c;
    printf("%f\n",d);
    
    
    // conversion explicite (casting
    e=a/(float)b;
    printf("%f \n",e);
    
    
    
    f=a*c;
    printf("%c\n",f);
    
    
    
    
    */
    
     short k=5;
    float b=11.3;
    
    printf(" value of somme %f \n",k+b);
    printf("%d  %d\n",sizeof(b),sizeof(k));
    
   
  
  system("PAUSE");	
  return 0;
}
