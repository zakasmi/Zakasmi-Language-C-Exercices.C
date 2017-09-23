#include <stdio.h>
#include <stdlib.h>

int main()
{
  
 FILE *client;
 char tel[10];
  char nom[20];
  char nom_fich[20];
  
  
  puts("entrer le nom du fichier ");
  gets(nom_fich);
   client=fopen(nom_fich,"w");
 
  

  
  puts("entrer le nom");
  gets(nom);
  
  
  puts("entrer le n tel");
  gets(tel);
 
  puts(nom);
  puts(tel);
  
  
  fprintf(client,"%20s %10s",nom,tel);
  
  
  
  
  
  
  fclose(client);
  
  
  
  
  
  
  
  
  
  getch();	
  return 0;
}
