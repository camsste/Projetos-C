#include <stdio.h>

int main(void) {
  int numero;
  
  printf("Escolha uma opção de 1 à 5 de acordo com o ídioma que você deseja aprender.\n \n");
  printf(" Opção 1: Inglês \n Opção 2: Espanhol \n Opção 3: Italiano \n Opção 4: Francês \n Opção 5: Alemão\n \n--> ");
scanf("%d", &numero);
printf("\n");
  switch (numero)
    {
      case 1 :
      printf ("Você escolheu o idioma 'inglês' :)");
      break;

      case 2 :
      printf ("Você escolheu o idioma 'espanhol' :)");
      break;

      case 3 :
      printf ("Você escolheu o idioma 'italiano' :)");
      break;

      case 4 :
      printf ("Você escolheu o idioma 'francês' :)");
      break;
      
      case 5 :
      printf ("Você escolheu o idioma 'alemão' :)");
      break;

      default:
      printf ("Escreva um número de uma das opções disponíveis!\n");
        break;
    }
  
  
  return 0;
}
