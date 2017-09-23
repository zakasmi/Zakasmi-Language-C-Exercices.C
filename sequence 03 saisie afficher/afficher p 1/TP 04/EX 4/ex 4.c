#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char A=255;
    char B='\a';
    int C ='\a';
    
    //N.B la macro putchar ne retoure pas a la ligne 
    
    putchar('x'); // afficher la lettre x
    printf("\n");
    putchar('?'); //afficher le symbole ?
    
    putchar('\n'); //retour a la ligne 
    
    putchar(65); // afficher le sumbole avec le code asci 65
    
    putchar('\n');
    
    putchar(A); // afficher la lettre aveec le code ascii 255 
    
    putchar(B); // beep sonore 
    
    putchar(C); // beep sonore 
    
    putchar(EOF); // marquer la fin de file */
     
    
    getchar();
    return 0;
}
