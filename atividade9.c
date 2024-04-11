#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4, media;

  printf("Digite a 1ª nota: ");
  scanf("%f", &n1);
  printf("Digite a 2ª nota: ");
  scanf("%f", &n2);
  printf("Digite a 3ª nota: ");
  scanf("%f", &n3);
  printf("Digite a 4ª nota: ");
  scanf("%f", &n4);

  media = (n1+n2+n3+n4)/4;

  printf("Sua média é %.2f, ", media);
  if (media <= 3) {
    printf("e a situação é reprovado!");
  } else if (media > 3 && media < 7) {
    printf("e a situação é reculperação!");
  } else {
    printf("e a situação é aprovado!");
  };

  return 0;
}
