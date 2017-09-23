/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{  char buffer [80],*msg="votre reponce";

int num;
    do{
        printf("numero ?");
        gets(buffer);
        sscanf(buffer,"%d",&num) != 1;
}while( num!=5 );

   sprintf(buffer,"%s = num %d \n",msg,num);
  puts(buffer);
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MENU (void);
void ajouter_stg(char *nom_groupe);
void afficher_info();
void affichier_stg(void);
void pomper_stg(void);
int chercher_stg(char *str1,char *str2,char *str3,char *str4,int nbr);
int type_recherche();
void MENU_modifier();
//void modifier_stg(char nom_groupe[20]);
FILE *groupe;
char test[20];
int new=1;
char cin[11];
	char nom[40];
	char prenom[21];
	char tel[11];
    	char age[3];
	char adresse[21];
	char typebac[21];
	int len;
	char ligne[102];
	int i;
	
	main(){
	
	scanf("%10[0-9a-zA-Z ]",nom);
	//strcpy(tel,nom);
	sscanf(nom,"%10s",tel);
//	sprintf(tel,"%-11s",nom);
	len=strlen(tel)-1;
	//tel[len]= 'n';
//	strcmp(nom,)
	
	
	
	printf(":%s:%d",tel,len);
	
	getchar();
	
	getchar();
	getchar();
	
}

