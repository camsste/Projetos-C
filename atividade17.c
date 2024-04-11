#include <stdio.h>

int main(void) {
  float n1, n2;
  int cont;
  do {
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);

    printf("Com as notas %.2f e %.2f sua média é: %.2f\n\n",
 n1, n2, ((n1+n2)/2));

    printf("Deseja continuar?\n[0] - Sim\n[1] - Não\n->");
    scanf("%d", &cont);
    
  } while (cont == 0);
  return 0;
}
