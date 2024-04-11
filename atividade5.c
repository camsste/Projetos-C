#include <stdio.h>

int main() {
  float idade ;
  char nome[100];
  printf ("insira seu nome: ");
  scanf ("%s",nome);
  printf ("insira sua idade: ");
  scanf ("%f",&idade);

  printf ("seu nome é %s\n", nome);
  printf ("sua idade é %2.f\n", idade);
  return 0;
}
