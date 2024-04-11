#include <stdio.h>
int main (){

int localizaCarro();
int opcao, portaTrancada;

  char resposta[1];
  
  switch (opcao) {
      case 1:
        printf("\nAgora vamos pôr o cinto de segurança.\nDigite 5 para colocar o cinto de segurança: ");
        scanf("%d", &opcao);

      case 2:
        printf("\nCinto colocado com sucesso! \nAgora vamos verificar se o carro está em ponto morto para finalmente \nligar.\n");
 
        printf("\nEle está em porto morto? (S/N): ");
        scanf ("%s[1]", &resposta[0]);
        if (resposta[0] == 'n' || resposta[0] == 'N'){
          printf ("Coloque em porto morto e tente novamente ");
          
        } else printf("Tudo certo! Agora só falta colocar a chave na ingnição");
   }
};
