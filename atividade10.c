#include <stdio.h>

int main(void) {
  int idade;
  printf("Informe sua idade: ");
  scanf("%d", &idade);

  if (idade < 18) {
    printf("Você é menor de idade!");
    if (idade >= 16) {
      printf("\nO seu voto é facultativo!");
    };
  } else {
    printf("Você é maior de idade!");
  };
  
  return 0;
}
