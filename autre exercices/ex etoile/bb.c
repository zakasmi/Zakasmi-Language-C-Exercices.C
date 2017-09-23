#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	//zakaria kasmi
	

	int ligne,etoile,vide,i,j,k,L,N;
	
	printf("\n\n                       zakaria kasmi\n\n\n");
	
	
	printf("entrer le nombre de ligne :\n");
	
	scanf("%d",&ligne);
	
    printf("le nombre de ligne = %d \n",ligne);
    
    vide=(ligne-1);
    
    N=0;
    
	etoile=1;
	
	if(ligne>0){
	
    for(i=1;i<=ligne;i++){
    	
    	
    	for(j=1;j<=vide;j++){
    		printf(" ");
    
		}
    	for(k=1;k<=etoile;k++){
		
    	printf("*");
    	N+=1;
		}
    	for(L=1;L<=vide;L++){
    		
    		printf(" ");
		}
		printf("\n");
		
    	vide=(vide-1);
    	
    	etoile=(etoile+2);
    	
    
	}
	
	
	printf("le nombre d'etoile afficher pour %d ligne est %d\n",ligne,N);}
	
    else printf("aucun afficher");
    getch();

}
	


