 #include <stdio.h>


int main()
{
  int N=10,P=5,Q=10,R,a,b;
  char C='S';
  
// === ==== ===== ===== ==== === ====
  N=5;P=2;
  
  Q=N++> P||P++ !=3;
  
  printf("D : N=%d P=%d Q=%d  \n",N,P,Q);
//=== ==== ==== ===== ==== ==== === 

// la premiere operation et fausse et la deuxiem et vrai . on entre eux || ou donc le resultat va etre Q=1 
// si on a entre les deux && le resultat va etre Q=0 
  N=5; P=2;
  Q=N++ < P || P++ != 3 ;
  printf("D : N=%d P=%d Q=%d  \n",N,P,Q);
  
 // on a un pre incrementation de N et P donc le compilateur va incrementer N avant de le comparer avec 3 .aussi pour P 
 // donc on a u && et entre les deux operation donc la premiere et fausse et la deuxieme et vrai . Q=0 . 
 
  N=5; P=2;
  Q= ++N == 3 && ++P == 3;
  printf("D : N=%d P=%d Q=%d  \n",N,P,Q);
  
  // incrementer N puis comparer avec 3 la meme chose pour P 
  
  N=5; P=2;
  Q = ++N == 6 && ++P == 22566;
  printf("D : N=%d P=%d Q=%d   \n",N,P,Q);
  
  //meme si on affect un char a un int . il va afficher S par ce que quand on affect c a n en effect .on affect un nombre .
  // et le nombre signifie un symbole dans char %c .
  // %x ecrit les  unsigned int en hexa 
  
  N=C;
  
  printf("G : %c %c \n",C,N);
  printf("H : %d %d \n",C,N);
  printf("I : %x %x \n",C,N);
  
  
  
  
  system("PAUSE");	
  return 0;
}
