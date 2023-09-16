#include <stdio.h>
#include <stdlib.h>

int main() {

  int pos = 0, x;
  int venda[100];
  float valorTotal[100];
  float lucroTotal = 0, box, box1, box2;
  char categoria[100], tPagamento[100], categoriaDesejada, tPagamentoDesejado;
  do {
    printf("\n1 - Cadastrar nova venda\n");
    printf("2 - Mostrar vendas realizadas\n");
    printf("3 - Vendas por categoria\n");
    printf(
        "4 - Apresentar o total de vendas realizadas pelo tipo de pagamento\n");
    printf("5 - Lucro total das vendas\n");
    printf("6 - Exibir dados da maior venda\n");
    printf("7 - Exibir dados da menor venda em Pix\n");
    printf("8 - Sair\n\n");
    scanf("%d", &x);

    switch (x) {

    case 1:
      
      printf("Valor total da venda: ");
      scanf("%f", &valorTotal[pos]);

      printf("\nCategoria do produto: ");
      scanf(" %c", &categoria[pos]);

      printf("\nTipo de pagamento: ");
      scanf(" %c", &tPagamento[pos]);
      
        venda[pos]++;
        pos++;
      break;

    case 2:

      for (int i = 0; i < pos; i++) {

        printf("\nVenda %d: \n", i+1);
        printf("Valor total da venda: %.2f\n", valorTotal[i]);
        printf("Categoria do produto: %c\n", categoria[i]);
        printf("Tipo de pagamento: %c\n", tPagamento[i]);
      }
      break;

      case 3:
      
        printf("Qual a categoria desejada?: ");
        scanf(" %c", &categoriaDesejada);

        printf("\nVendas da categoria selecionada: %c\n", categoriaDesejada);
          for(int i = 0; i < pos; i++){
              if(categoria[i] == categoriaDesejada){

              printf("\nVenda %d: \n", i+1);
              printf("Valor total da venda: %.2f\n", valorTotal[i]);
              printf("Categoria do produto: %c\n", categoria[i]);
              printf("Tipo de pagamento: %c\n", tPagamento[i]);
              }
            
          }
      break;

      case 4:

        printf("Qual o tipo de pagamento desejado?: ");
        scanf(" %c", &tPagamentoDesejado);

        printf("\nVendas do tipo de pagamento selecionado: %c", tPagamentoDesejado);
          for(int i = 0; i < pos; i++){
            if(tPagamento[i] == tPagamentoDesejado){

              printf("\nVenda %d: \n", i+1);
              printf("Valor total da venda: %.2f\n", valorTotal[i]);
              printf("Categoria do produto: %c\n", categoria[i]);
              printf("Tipo de pagamento: %c\n", tPagamento[i]);
            }
        }
      break;

      case 5:

      for(int i = 0; i < pos; i++){
        box = valorTotal[i];
        lucroTotal = lucroTotal + box;
      }
        printf("Lucro total atual: %.2f\n", lucroTotal);
      break;

      case 6:
        for(int i = 0; i < pos; i++){
          if(valorTotal[i] > box1){
            box1 = valorTotal[i];
          }
        }
        printf("Maior valor de venda: %.2f\n", box1);
      break;

      case 7:
        box2 = valorTotal[0];
        for(int i = 0; i < pos; i++){
          if(tPagamento[i] == 'P'){
            if(valorTotal[i] < box2){
            box2 = valorTotal[i];
          }
        }
      }
        printf("Menor valor de venda: %.2f\n", box2);
    }

  } while (x != 8);
  return 0;
}