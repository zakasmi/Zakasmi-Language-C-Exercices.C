#include <stdio.h>


/*ce programme calcule la somme de 4 nombres entiers 
introduit au clavier */
main()
{
      int NOMBRE,SOMME,COMPTEUR;
      /* initialisation des variables */
      SOMME =0;
      COMPTEUR =0;
      /* lecture des données */
      while (COMPTEUR<4)
      {   /* lire la valeur du nombre suivant */
      printf("entrer un nombre entier");
      scanf("%i",&NOMBRE);
      /* ajouter le nombre au resultat */
      SOMME+=NOMBRE;
      /* incrementer le compteur */
      COMPTEUR++;
      }
      /* imprimer le resultat */
      printf("la somme est : %i \n",SOMME);
      system("pause");
      return 0;
      }
      
      
      
