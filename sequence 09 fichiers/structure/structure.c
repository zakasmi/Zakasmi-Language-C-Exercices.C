#include <stdio.h>
#include <stdlib.h>
typedef struct{
        
        char Nom[30];
        char Prenom[30];
        char Adresse[50];
        char Age[3]; 
        
        }stagiaire;
int main(int argc, char *argv[])
{
    FILE* fich;
    char ligne[117];
    stagiaire stg1;
    char nom_fich[20];
    
    printf("entrer le nom de fichier");
    gets(nom_fich);
    
    fich = fopen(nom_fich,"w+");
    
    strcpy(stg1.Nom,"kasmi");
    strcpy(stg1.Prenom,"zakaria");
    strcpy(stg1.Adresse,"nador");
    strcpy(stg1.Age,"20");
    
    strcpy(ligne,stg1.Nom);
    strcat(ligne,";");
    strcat(ligne,stg1.Prenom);
    strcat(ligne,";");
    strcat(ligne,stg1.Adresse);
    strcat(ligne,";");
    strcat(ligne,stg1.Age);  
    strcat(ligne,"\n");
  
  fputs(ligne,fich);
  strcpy(stg1.Nom,"kasmi");
    strcpy(stg1.Prenom,"zakaria");
    strcpy(stg1.Adresse,"nador");
    strcpy(stg1.Age,"50");
    
    strcpy(ligne,stg1.Nom);
    strcat(ligne,";");
    strcat(ligne,stg1.Prenom);
    strcat(ligne,";");
    strcat(ligne,stg1.Adresse);
    strcat(ligne,";");
    strcat(ligne,stg1.Age);  
  // strcat(ligne,"\n");
  
  fputs(ligne,fich);
  
  fclose(fich);
  
  fich=fopen(nom_fich,"r");
  fseek(fich,0L,0);
  while(!feof(fich)){
                    
              fgets(ligne,117,fich);      
                    
                   puts(ligne);
                    
                    }
  
  printf("\nheloooo \n");
  
  
  system("PAUSE");	
  return 0;
}
