#include <stdio.h>

int main() { 
  float n1, n2, n3, n4, media, total ;
  printf(" Insira sua primeira nota: ") ;
scanf("%f", &n1) ;
  printf(" Insira sua segunda nota: ") ;
scanf("%f", &n2) ;
 printf(" Insira sua terceira nota: ") ;
scanf("%f", &n3) ; 
  printf(" Insira sua quarta nota: ") ; 
  scanf("%f", &n4) ;

  total = n1 + n2 + n3 + n4 ; 
  media = total/4 ;

    printf(" A sua media das 4 notas é: %2.f", media) ;
  
}
