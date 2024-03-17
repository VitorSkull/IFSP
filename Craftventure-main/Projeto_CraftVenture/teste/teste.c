#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  teste_arquivos();
  return 0;
}

struct ItemEstoque
{
  char nome[50];
  int quant;
  float preco;
};

void adicionarItem()
{

  FILE *arquivo = fopen("Estoque.txt", "a");
  if (arquivo == NULL)
  {

    printf("Erro ao abrir o arquivo\n");
    return;
  }

  struct ItemEstoque item;

  printf("Nome do produto: ");
  fgets(item.nome, sizeof(item.nome), stdin);
  item.nome[strcspn(item.nome, "\n")] = '\0';

  printf("Quantidade: ");
  scanf("%d", &item.quant);
  getchar();

  printf("Preco: ");
  scanf("%f", &item.preco);
  getchar();

  fprintf(arquivo, "%s;%d;%.2f\n", item.nome, item.quant, item.preco);

  fclose(arquivo);
}

int estoque()
{

  int modo;

  printf("\n>");
  scanf("%i", &modo);
  return 0;
}

void teste_arquivos()
{
  int quant;
  float valor;
  char nome[50];

  FILE *estoque_input = fopen("Estoque.txt", "r");

  if (estoque_input == NULL)
  {
    printf("Erro ao abrir o arquivo\n");
    return;
  }

  fscanf(estoque_input, "%50[^;];%i;%f", nome, &quant, &valor);

  printf("NOME: %s\nQUANTIDADE: %i\nVALOR: %.2f", nome, quant, valor);

  /*FILE *nomes_input = fopen("nomes.txt", "r");
  FILE *nomes_output = fopen("nomes.txt", "w");

  FILE *valores_input = fopen("valores.txt", "r");
  FILE *valores_output = fopen("valores.txt", "w");

  FILE *quantidades_input = fopen("quantidades.txt", "r");
  FILE *quantidades_output = fopen("quantidades.txt", "w");

  int valor = 10, quantidade = 1;
  char nome[50];

  if (nomes_output == NULL || valores_output == NULL || quantidades_output == NULL)
  {
    printf("Erro, arquivo não pode ser lido!");
    exit(1);
  }

  printf("\nQuantidade: %d\nValor: R$ %d\n", quantidade, valor);

  printf("Digite o nome: ");
  scanf("%s", nome);

  printf("Digite a quantidade: ");
  scanf("%d", &quantidade);

  printf("Digite o valor: ");
  scanf("%d", &valor);

  printf("\n%s\nQuantidade: %d\nValor: R$ %d\n\n>SALVO!", nome, quantidade, valor);

  fprintf(nomes_output, "%s", nome);
  fclose(nomes_output);

  fprintf(valores_output, "%i", valor);
  fclose(valores_output);

  fprintf(quantidades_output, "%i", quantidade);
  fclose(quantidades_output);

  valor = 0;
  quantidade = 0;

  fscanf(nomes_input, "%s", nome);
  fclose(nomes_input);

  fscanf(quantidades_input, "%i", &quantidade);
  fclose(quantidades_input);

  fscanf(valores_input, "%i", &valor);
  fclose(valores_input);

  printf("\nNome: %s\nQuantidade: %d\nValor: %d", nome, quantidade, valor);
  */
}

/*void teste_nomes()
{

  FILE *file;

  char Linha[200];
  char *result;
  int i;
  char nome[50];

  file = fopen("nomes.txt", "r+w");

  if (file == NULL)
  {
    printf("Problemas na abertura do arquivo\n");
  }

  i = 1;
  while (!feof(file))
  {

    result = fgets(Linha, 200, file);
    if (result)
      printf(" %s", Linha);
    i++;
  }

  if ((file = fopen("nomes.txt", "w")) != NULL)
  {
    for (int i = 0; i < 10; i++)
    {

      printf("Escreva um nome: ");
      gets(nome);
      fprintf(file, "Nome %d: %s\n", i + 1, nome);
    }
  }

  fclose(file);
}*/
