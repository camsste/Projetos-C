#include <stdio.h>

int main() {
  float n1, n2, n3, soma, r1;

  printf("Insira o primeiro valor :");
  scanf ("%f", &n1);
  printf("Insira o segundo valor :");
  scanf ("%f", &n2);
  soma = n1 +n2;
  printf("\nSua soma é: %2.f", soma);
  printf("\nInsira seu terceiro valor :");
  scanf ("%f", &n3);
  r1 = n3 * soma;
  printf("Seu resultado após a multiplicação é: %2.f",r1);
  return 0;
}
