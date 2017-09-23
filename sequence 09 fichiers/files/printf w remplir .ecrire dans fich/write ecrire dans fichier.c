#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *client;
    char nom[20];
    char tel[10];
  char nom_fich[15];
  puts("entrer le nom de fichier");
  gets(nom_fich);
  
  
  client=fopen(nom_fich,"r");
  
  fscanf(client,"%20s %10s",nom,tel);
  
  puts(nom);
  puts(tel);
  // le fichier doit etre dans le meme dossier de .exe
  
  
  system("PAUSE");	
  return 0;
}
