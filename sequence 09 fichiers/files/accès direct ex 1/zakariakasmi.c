#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{


  char autre;
  FILE *repert;
  char fich[30],tel[20],nom[30];
  long numero;
  
 /* puts("entrer le nom de fichier ");
  gets(fich);
  repert = fopen(fich,"r+");
  
  do{
       printf("numero de composant \n");
       scanf("%ld",&numero);
       fseek(repert,50*(numero-1L),0);
       fscanf(repert,"%30s%20s",nom,tel);                   
       printf("NOM :%s TEL:%s\n",nom,tel);                   
         printf("une autre composant o/n O/N !!\n");
          fflush(stdin);
                          
        autre=getchar();                  
                        fflush(stdin);
   }while((autre!='n')&&(autre!='N'));    
                          
  
  
  // taille de fichier 
  long taille;
  
  fseek(repert,0,2);
  taille=ftell(repert);
  printf("la taille est %ld octets\n",taille*51);
  fclose(repert);
  */
  // modifier un composant de fichier 
   int trouve ;
  
  char name[30];
  numero=0;
  
  
  puts("nom de fichier pour repertoir ?");
  gets(fich);
  repert=fopen(fich,"r+");
  
  puts("entrer le nome que vous voulez changer !!");
  scanf("%s",name);
  
  numero=-1L;
  trouve=0;
  
  while((!trouve)&&(!feof(repert))){
        numero++;
        fscanf(repert,"%30s%20s",nom,tel);
        
        if(!strcmp(nom,name)){
                 
                 trouve=1;
                 fseek(repert,50*(numero),0);             
                 printf("ancien numero %20s\n",tel);
                 printf("entrer le nouveau numero");
                 scanf("%20s",tel);
                 fprintf(repert,"%-30s%-20s",nom,tel); 
                 printf("la modification est effectuer");
                          
                 }             
                 }             
   if(!trouve)puts("\nnom non repertorie\n");                           
                              
        
        
        
        
        
        
  

  
  
  
  system("PAUSE");	
  return 0;
}
