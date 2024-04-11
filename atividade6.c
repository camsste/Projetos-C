#include <stdio.h>

int main() {
  float n1, n2, soma, sub, multi, div;
  printf("Insira o primeiro número: ");
  scanf ("%f", &n1);
  printf("Insira o segundo número:");
  scanf ("%f", &n2);
  soma = n1 + n2;
  sub = n1 - n2;
  multi = n1 * n2;
  div = n1 / n2;

  printf ("A soma dos dois números é igual a: %2.f\n", soma);
  printf ("A subtração dos dois números é igual a: %2.f\n", sub);
  printf ("A multiplicação dos dois números é igual a: %2.f\n", multi);
  printf ("A divisão dos dois números é igual a: %2.f\n", div);
  return 0;
}
