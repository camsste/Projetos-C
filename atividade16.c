#include <stdio.h>

int main(void) {
  int num, cont=0;
  printf("Digite um número inteiro maior que 0: ");
  scanf("%d", &num);

  while (cont <= 10){
    printf("%d X %d = %d\n", num, cont, (num*cont));
    cont++;
  }
  return 0;
}
