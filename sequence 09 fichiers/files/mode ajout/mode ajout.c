#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *client;
  
  char nom[20];
  char tel[10];
  
  char nom_fichier[20];
  char c;
  
 
 
  
  
  puts("entrer le nom de fichier ");
  gets(nom_fichier);
  
  client=fopen(nom_fichier,"w"); // a pour ajouter w pour creer et ajouter
  
  do{
  
  puts("entrer le nom");
  gets(nom);
  
  
  puts("entrer le n tel");
  gets(tel);
  
  fprintf(client,"%30s%20s",nom,tel);
  
  puts("une autre enregistrement o/n"); 
  scanf("%c",&c);
  fflush(stdin);
  
   }while(c!='n'&& c!='N');
  
  
  
  fclose(client);
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
