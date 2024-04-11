#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, teste;

  printf("DESAFIANTE:\n\tInforme um número entre 0 e 9: ");
  scanf("%d", &num);
  system("clear");

  do {
    printf("\nDESAFIADO:\n\tTente adivinhar um númro entre 0 e 9: ");
    scanf("%d", &teste);

    if (teste == num){
      printf("\nVocê acertou!");
    } else {
      printf("\nVocê errou!");
    };
  } while (teste != num);
    
  return 0;
}
