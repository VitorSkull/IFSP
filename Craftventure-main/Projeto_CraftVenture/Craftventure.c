#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>

#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AMARELO "\x1b[33m"
#define AZUL "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CIANO "\x1b[36m"
#define AZUL_CLARO "\x1b[38;5;152m"
#define LARANJA "\x1b[38;5;178m"
#define RESET "\x1b[0m"

int quant[100], i = 0, q = 0, quantidadeItens = 0, quantidadeUsuarios = 0;
float valor[100];
char nome[100][100], usuario[100][100], senha[100][100];

struct Usuario
{
    char nomeUsuario[100], senha[20];
};

void inicializarEstoque()
{

    FILE *estoque_input = fopen("Estoque.txt", "r");

    i = 0;

    if (estoque_input == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    while (fscanf(estoque_input, "%50[^;];%i;%f\n", nome[i], &quant[i], &valor[i]) != EOF)
    {
        i++;
    }
    rewind(estoque_input);
    fclose(estoque_input);

    quantidadeItens = i;
}

void inicializarUsuario()
{

    FILE *usuario_input = fopen("Usuario.txt", "r");

    if (usuario_input == NULL)
    {
        printf("Erro ao abrir o arquivo, Usuario.txt\n");
        exit(0);
    }

    while (fscanf(usuario_input, "%50[^;];%20[^\n]\n", usuario[q], senha[q]) != EOF)
    {
        q++;
    }
    rewind(usuario_input);
    fclose(usuario_input);

    quantidadeUsuarios = q;
}

void economia()
{
    printf("\nDigite enter para continuar\n");
    system("pause");
    system("cls");
}

void menu()
{

    // setlocale(LC_ALL, "Portuguese");

    printf(" %s___   ___    ____   ____   _____   _   _   _____   _   _   _____   _   _   ___    _____%s", VERMELHO, RESET);
    printf("\n%s|  _| |    \\ |    | |  __| |_   _| | | | | |  ___| | \\ | | |_   _| | | | | |    \\ |  ___|%s", AMARELO, RESET);
    printf("\n%s| |   | |  | | |  | | |_     | |   | | | | | |_    |  \\| |   | |   | | | | | |  | | |_%s", VERDE, RESET);
    printf("\n%s| |   |    / |    | |  _|    | |   | | | | |  _|   |     |   | |   | | | | |    / |  _|%s", AZUL_CLARO, RESET);
    printf("\n%s| |_  |   \\  |  _ | | |      | |   | |_| | | |___  | |\\  |   | |   | |_| | |   \\  | |___%s", AZUL, RESET);
    printf("\n%s|___| |_|\\_\\ |_||_| |_|      |_|    \\___/  |_____| |_| \\_|   |_|   |_____| |_|\\_\\ |_____|%s", MAGENTA, RESET);

    // sla se o tamanho do prompt � padr�o
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDesenvolvido por: Murillo R., Eduarda M., Luan H., Joao M., Vinicius T. e Vitor G.\n");

    system("pause");
    system("cls");
}

int menuFuncoes()
{
    int escolha = 0;

    printf("\n|========FUNCAO===========|");
    printf("\n|--    [1] %sVendas%s    [1]--|", VERDE, RESET);
    printf("\n|--    [2] %sEstoque%s   [2]--|", AZUL, RESET);
    printf("\n|--    [3] %sUsuario%s   [3]--|", MAGENTA, RESET);
    printf("\n|--    [4] %sSair%s      [4]--|", VERMELHO, RESET);
    printf("\n|-------------------------|\n>");
    scanf("%i", &escolha);

    system("cls");

    return escolha;
}

void menuEstoque()
{

    printf("\n|========================================|");
    printf("\n|--    [1] Adicionar item           [1]--|");
    printf("\n|--    [2] Apresentar estoque       [2]--|");
    printf("\n|--    [3] %sExcluir item%s             [3]--|", LARANJA, RESET);
    printf("\n|--    [4] Buscar item por nome     [4]--|");
    printf("\n|--    [5] Atualizar item           [5]--|");
    printf("\n|--    [6] %sSair%s                     [6]--|", VERMELHO, RESET);
    printf("\n|----------------------------------------|\n>");
}

void menuUsuario()
{
    printf("\n|================ENTRAR================|");
    printf("\n|--    [1] %sCriar novo usuario%s     [1]--|", VERDE, RESET);
    printf("\n|--    [2] %sApagar usuario%s         [2]--|", LARANJA, RESET);
    printf("\n|--    [3] %sSair%s                   [3]--|", VERMELHO, RESET);
    printf("\n|--------------------------------------|\n>");
}

void adicionarItem()
{

    char nomeAdicionar[100];
    int quantidadeAdicionar = 0;
    float valorAdicionar;

    FILE *estoque_append = fopen("Estoque.txt", "a");
    if (estoque_append == NULL)
    {

        printf("Erro ao abrir o arquivo!\n");
        exit(0);
    }

    printf("Nome do produto: ");
    scanf(" %50[^\n]", nomeAdicionar);

    printf("Quantidade: ");
    scanf("%i", &quantidadeAdicionar);

    printf("Preco: ");
    fflush(stdin);
    scanf("%f", &valorAdicionar);

    fprintf(estoque_append, "%s;%i;%f\n", nomeAdicionar, quantidadeAdicionar, valorAdicionar);
    fclose(estoque_append);

    strcpy(nome[quantidadeItens], nomeAdicionar);
    quant[quantidadeItens] = quantidadeAdicionar;
    valor[quantidadeItens] = valorAdicionar;
    quantidadeItens++;

    printf("Item salvo!");
    sleep(1);
    system("cls");
}

void criarUsuario()
{

    FILE *usuario_append = fopen("Usuario.txt", "a");
    if (usuario_append == NULL)
    {

        printf("Erro ao abrir o arquivo!\n");
        exit(0);
    }

    struct Usuario usuario;

    printf("Nome do usuario: ");
    scanf(" %99[^\n]", usuario.nomeUsuario);

    printf("Senha: ");
    scanf(" %19[^\n]", usuario.senha);

    fprintf(usuario_append, "%s;%s\n", usuario.nomeUsuario, usuario.senha);
    rewind(usuario_append);
    fclose(usuario_append);

    inicializarUsuario();

    printf("Usuario salvo!");
    sleep(1);
    system("cls");
}

void apresentarEstoque()
{
    printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
    for (i = 0; i < quantidadeItens; i++)
    {
        printf("%s|%s%15s  %s|%s", AMARELO, RESET, nome[i], AMARELO, RESET);

        printf("%8.1f  %s|%s", valor[i], AMARELO, RESET);

        printf("%12i  %s|%s\n", quant[i], AMARELO, RESET);

        printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
    }
    economia();
}

void aplicarAtualizacoes()
{
    FILE *estoque_append = fopen("Estoque.txt", "a");

    if (fopen("Estoque.txt", "w") == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    rewind(estoque_append);

    for (int i = 0; i < quantidadeItens; i++)
    {
        fprintf(estoque_append, "%s;%d;%f\n", nome[i], quant[i], valor[i]);
    }
    fflush(estoque_append);
    fclose(estoque_append);

    printf("Arquivo salvo!");
    economia();
}

int buscarItemPorNome()
{

    char busca[100], temp[100];
    int encontrado = 0;

    printf("Digite o nome do item que deseja procurar\n>");
    scanf(" %100[^\n]", busca);

    if (busca[0] == '0')
        return -2;

    for (int i = 0; i < quantidadeItens; i++)
    {
        strcpy(temp, nome[i]);
        if (strcmpi(temp, busca) == 0)
        {
            encontrado = 1;
            printf("Produto encontrado!");
            sleep(1);
            system("cls");

            printf("%s|-------------------------------------------|%s\n", AMARELO, RESET);
            printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
            printf("%s|%s%15s  %s|%s", AMARELO, RESET, nome[i], AMARELO, RESET);
            printf("%8.1f  %s|%s", valor[i], AMARELO, RESET);
            printf("%12i  %s|%s\n", quant[i], AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
            economia();
            return i;
        }
        else
        {
            printf("Buscando");
            system("cls");
        }
    }
    if (encontrado != 1)
    {
        printf("O produto de nome %s nao foi encontrado", busca);
        economia();
        return -1;
    }
    return 0;
}

void atualizarItem()
{

    int escolha, posicao, novaQuantidade, antigaQuantidade;
    char novoNome[100], antigoNome[100];
    float novoValor, antigoValor;

    posicao = buscarItemPorNome();

    if (posicao != -1)
    {

        antigaQuantidade = quant[posicao];
        antigoValor = valor[posicao];
        strcpy(antigoNome, nome[posicao]);

        do
        {

            printf("%s|-------------------------------------------|%s\n", AMARELO, RESET);
            printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
            printf("%s|%s%15s  %s|%s", AMARELO, RESET, nome[posicao], AMARELO, RESET);
            printf("%8.1f  %s|%s", valor[posicao], AMARELO, RESET);
            printf("%12i  %s|%s\n", quant[posicao], AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);

            printf("\n|==========O QUE GOSTARIA DE MUDAR===========|");
            printf("\n|--    [1] NOME                         [1]--|");
            printf("\n|--    [2] QUANTIDADE                   [2]--|");
            printf("\n|--    [3] VALOR                        [3]--|");
            printf("\n|--    [4] %sAPLICAR MUDANCAS%s             [4]--|", VERDE, RESET);
            printf("\n|--    [5] %sCANCELAR%s                     [5]--|", VERMELHO, RESET);
            printf("\n|--------------------------------------------|\n>");
            scanf("%i", &escolha);

            switch (escolha)
            {
            case 1:

                printf("Digite o novo nome\n>");
                scanf(" %100[^\n]", novoNome);

                strcpy(nome[posicao], novoNome);
                printf("%sNome modificado com sucesso!%s", VERDE, RESET);
                economia();

                break;

            case 2:

                printf("Digite a nova quantidade\n>");
                scanf("%i", &novaQuantidade);

                quant[posicao] = novaQuantidade;
                printf("%sQuantidade modificada com sucesso!%s", VERDE, RESET);
                economia();

                break;

            case 3:
                printf("Digite o novo valor\n>");
                scanf("%f", &novoValor);

                valor[posicao] = novoValor;
                printf("%sValor modificada com sucesso!%s", VERDE, RESET);
                economia();

                break;
            case 4:
                aplicarAtualizacoes();
                break;

            case 5:

                strcpy(nome[posicao], antigoNome);
                valor[posicao] = antigoValor;
                quant[posicao] = antigaQuantidade;

                printf("%s|-------------------------------------------|%s\n", AMARELO, RESET);
                printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
                printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
                printf("%s|%s%15s  %s|%s", AMARELO, RESET, nome[posicao], AMARELO, RESET);
                printf("%8.1f  %s|%s", valor[posicao], AMARELO, RESET);
                printf("%12i  %s|%s\n", quant[posicao], AMARELO, RESET);
                printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);

                printf("%sAs mudancas foram descartadas%s", AZUL, RESET);
                economia();

                break;

            default:
                printf("%sO valor digitado não corresponde com nenhuma opcao!%s", VERMELHO, RESET);
                economia();
            }

        } while (escolha < 4);
    }
}

void excluirItem()
{

    int escolha, posicao = 0;

    posicao = buscarItemPorNome();

    if (posicao != -1)
    {

        printf("%s|-------------------------------------------|%s\n", AMARELO, RESET);
        printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
        printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
        printf("%s|%s%15s  %s|%s", AMARELO, RESET, nome[posicao], AMARELO, RESET);
        printf("%8.1f  %s|%s", valor[posicao], AMARELO, RESET);
        printf("%12i  %s|%s\n", quant[posicao], AMARELO, RESET);
        printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);

        printf("\n|==========%sDELETAR%s===========|", VERMELHO, RESET);
        printf("\n|--    [1] %sAPAGAR%s       [1]--|", VERMELHO, RESET);
        printf("\n|--    [2] CANCELAR     [2]--|");
        printf("\n|----------------------------|\n>");
        scanf("%i", &escolha);

        switch (escolha)
        {
        case 1:
            for (int i = posicao; i < quantidadeItens; i++)
            {
                strcpy(nome[i], nome[i + 1]);
                quant[i] = quant[i + 1];
                valor[i] = valor[i + 1];
            }
            quantidadeItens--;

            aplicarAtualizacoes();
            printf("%s|-------------------------------------------|%s\n", AMARELO, RESET);
            printf("%s|%s    %7s      %s|%s%8s  %s|%s%12s  %s|%s\n", AMARELO, RESET, "NOME", AMARELO, RESET, "VALOR", AMARELO, RESET, "QUANTIDADE", AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);
            printf("%s|%s%15s  %s|%s", AMARELO, RESET, "-----------", AMARELO, RESET);
            printf("%8s  %s|%s", "-------", AMARELO, RESET);
            printf("%12s  %s|%s\n", "--------", AMARELO, RESET);
            printf("%s|-----------------|----------|--------------|%s\n", AMARELO, RESET);

            printf("%sItem apagado com sucesso, esta acao nao pode ser desfeita%s", AZUL, RESET);
            economia();

            break;

        case 2:
            printf("%sAcao cancelada com sucesso!%s", VERDE, RESET);
            sleep(1);
            system("cls");
            break;

        default:
            printf("%sOpção não existe tente novamente%s", VERMELHO, RESET);
            economia();
        }
    }
}

void estoque()
{
    int escolha = 0;

    system("cls");

    do
    {

        menuEstoque();
        scanf("%i", &escolha);

        switch (escolha)
        {
        case 1:
            adicionarItem();
            break;

        case 2:
            apresentarEstoque();
            break;

        case 3:
            excluirItem();
            break;

        case 4:
            buscarItemPorNome();
            break;

        case 5:
            atualizarItem();
            break;

        case 6:
            printf("%sObrigado por utilizar o estoque, volte sempre!!%s\n", AZUL, RESET);
            sleep(1);
            break;

        default:
            printf("%sEscolha nao existe tente novamente!!%s\n", VERMELHO, RESET);
            economia();
        }
    } while (escolha != 6);
}

int entrar()
{

    char nomeUsuario[100], senhaDada[20], ch;
    int logado = 0, i = 0;

    inicializarUsuario();

    system("cls");
    do
    {
        printf("- - - Logar no Sistema - - - \n");

        printf("Nome: ");
        scanf(" %99[^\n]", nomeUsuario);

        printf("Digite a senha: ");

        while ((ch = getch()) != '\r')
        {
            if (ch == '\b')
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if (i < 19)
            {
                senhaDada[i] = ch;
                i++;
                printf("*");
            }
        }

        senhaDada[i] = '\0';

        system("cls");

        // alterar no final
        for (int i = 0; i < quantidadeUsuarios; i++)
        {
            if ((strcmp(nomeUsuario, usuario[i]) == 0) && (strcmp(senhaDada, senha[i])) == 0)
            {
                return 1;
            }
        }
        printf("%sUsuario ou senha incorretos tente novamente!!%s\n", VERMELHO, RESET);
    } while (logado == 0);

    return 0;
}

void aplicarAtualizacoesUsuario()
{

    FILE *usuario_append = fopen("Usuario.txt", "a");

    if (fopen("Usuario.txt", "w") == NULL)
    {
        printf("%sErro ao abrir o arquivo%s\n", VERMELHO, RESET);
        return;
    }

    rewind(usuario_append);

    for (int i = 0; i < quantidadeUsuarios; i++)
    {
        fprintf(usuario_append, "%s;%s\n", usuario[i], senha[i]);
    }
    fflush(usuario_append);
    fclose(usuario_append);

    printf("%sArquivo salvo!%s", VERDE, RESET);
    economia();
}

int buscarUsuarioPorNome()
{
    char busca[100], temp[100];
    int encontrado = 0;

    printf("Digite o nome e usuario que deseja procurar\n>");
    scanf(" %100[^\n]", busca);

    if (busca[0] == '0')
        return -2;

    for (int i = 0; i < quantidadeUsuarios; i++)
    {
        strcpy(temp, usuario[i]);
        if (strcmpi(temp, busca) == 0)
        {
            encontrado = 1;
            printf("Usuario encontrado!");
            sleep(1);
            system("cls");
            return i;
        }
        else
        {
            printf("Buscando");
            system("cls");
        }
    }
    if (encontrado != 1)
    {
        printf("O usuario de nome %s nao foi encontrado", busca);
        economia();
        return -1;
    }
    return 0;
}

void apagarUsuario()
{

    int escolha, posicao = 0;

    posicao = buscarUsuarioPorNome();

    printf("\n|==========%sAPAGAR USUARIO%s===========|", VERMELHO, RESET);
    printf("\n|--    [1] %sAPAGAR%s              [1]--|", VERMELHO, RESET);
    printf("\n|--    [2] CANCELAR            [2]--|");
    printf("\n|-----------------------------------|\n>");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case 1:
        for (int i = posicao; i < quantidadeUsuarios; i++)
        {
            strcpy(usuario[i], usuario[i + 1]);
            strcpy(senha[i], senha[i + 1]);
        }
        quantidadeUsuarios--;

        aplicarAtualizacoesUsuario();
        printf("%sUsuario apagado com sucesso, esta acao nao pode ser desfeita%s", AZUL, RESET);
        economia();
        break;

    case 2:
        printf("%sAcao cancelada com sucesso!%s", VERDE, RESET);
        sleep(1);
        break;

    default:
        printf("%sOpção não existe tente novamente%s", VERMELHO, RESET);
        economia();
    }
}

void Usuario()
{

    int escolha;

    /*
    Entrar
    Criar novo usuario
    Apagar usuario
    Sair
    */

    do
    {

        inicializarUsuario();
        menuUsuario();

        fflush(stdin);

        scanf("%i", &escolha);

        switch (escolha)
        {
        case 1:

            criarUsuario();
            break;

        case 2:

            apagarUsuario();
            break;

        case 3:

            printf("%sAte mais space cowboy%s", AZUL, RESET);
            break;

        default:

            printf("%sEscolha não existe tente novamente!!%s\n", VERMELHO, RESET);
            economia();
        }

    } while (escolha != 3);
}

void venda()
{

    char NomeCliente[100];
    int ContinuarCompra = 1, posicao, qnt_venda = 0, erro = 0;
    float total = 0;

    FILE *recibo = fopen("recibo.txt", "a");

    printf("Nome do(a) cliente: ");
    scanf(" %100[^\n]", NomeCliente);

    fopen("recibo.txt", "w");

    fprintf(recibo, "--------------------RECIBO--------------------\n");
    fprintf(recibo, "Nome Cliente: %s\n", NomeCliente);

    do
    {

        posicao = buscarItemPorNome();
        if (posicao == -2)
            ContinuarCompra = 0;

        else if (posicao == -1)
        {
            printf("Produto nao encontrado!Tente novamente ou se quiser sair digite [0]");
        }
        else
        {
            do
            {
                erro = 0;
                printf("Quantidade de itens vendida: ");
                scanf("%i", &qnt_venda);

                if (qnt_venda > quant[posicao])
                {
                    printf("A quantidade de compra excede a quantidade de itens no estoque!! \nO total de itens no estoque são de %s%i%s itens", AZUL, quant[posicao], RESET);
                    economia();
                    erro = 1;
                }
            } while (erro != 0);

            fprintf(recibo, "Produto: %s\n", nome[posicao]);
            fprintf(recibo, "Preço da unidade: R$ %.2f\n", valor[posicao]);
            fprintf(recibo, "Quantidade sendo comprada: %d\n", qnt_venda);
            fprintf(recibo, "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            fprintf(recibo, "Valor a pagar R$ %.2f\n", qnt_venda * valor[posicao]);
            fprintf(recibo, "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

            total += qnt_venda * valor[posicao];

            quant[posicao] -= qnt_venda;

            printf("Continuar compra?\n1 - SIM ou 2 - NAO\n");
            printf(">");
            scanf("%d", &ContinuarCompra);
            printf("\n");
        }

    } while (ContinuarCompra == 1);

    if (posicao != -2)
    {

        aplicarAtualizacoes();

        fprintf(recibo, "Valor Total a ser pago: %.2f", total);

        printf("Recibo gerado!");

        fclose(recibo);
    }
    else
        fclose(recibo);
}

int main()
{

    SetConsoleTitle("CRAFTVENTURE");

    int rodando = 1;

    // system("color E4");

    menu();

    if (entrar() == 0)
        return 0;

    do
    {
        int escolha;

        inicializarEstoque();

        escolha = menuFuncoes();

        switch (escolha)
        {

        case 1:
            venda();

            break;

        case 2:
            estoque();

            break;

        case 3:
            Usuario();
            break;

        case 4:
            rodando = 0;
            break;

        default:
            printf("%sApenas numeros de 1 a 4!%s", VERMELHO, RESET);
        }
        system("cls");

    } while (rodando == 1);

    printf("Em memoria de Joao M.");

    return 0;
}