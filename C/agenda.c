#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxContatos 50
#define maxNomes 100
#define maxEmail 100
#define maxTelefone 12

typedef struct {
    int id;
    char nome[maxNomes];
    char email[maxEmail];
    char telefone[maxTelefone];
} Contato;

Contato agenda[maxContatos];
int numContatos = 0;

int gerarId() {
    static int id = 1;
    return id++;
}

int validarEmail(char *email) {
    int tam = strlen(email);
    if (tam < 6)
        return 0;

    int i = 0;
    while (email[i] != '@' && i < tam)
        i++;
    
    if (i == 0 || i == tam - 1)
        return 0;

    i++;
    while (email[i] != '.' && i < tam)
        i++;

    if (i == tam - 1 || i == 0)
        return 0;

    return 1;
}

int validarTelefone(char *telefone) {
    int tam = strlen(telefone);
    if (tam != 11)
        return 0;

    for (int i = 0; i < tam; i++) {
        if (telefone[i] < '0' || telefone[i] > '9')
            return 0;
    }

    return 1;
}

void cadastrarContato() {
    if (numContatos == maxContatos) {
        printf("A agenda está cheia.\n");
        return;
    }

    Contato novoContato;

    printf("Digite o nome do contato: ");
    fgets(novoContato.nome, sizeof(novoContato.nome), stdin);
    novoContato.nome[strcspn(novoContato.nome, "\n")] = '\0';

    printf("Digite o email do contato: ");
    fgets(novoContato.email, sizeof(novoContato.email), stdin);
    novoContato.email[strcspn(novoContato.email, "\n")] = '\0';

    printf("Digite o telefone do contato: ");
    fgets(novoContato.telefone, sizeof(novoContato.telefone), stdin);
    novoContato.telefone[strcspn(novoContato.telefone, "\n")] = '\0';

    if (strlen(novoContato.nome) == 0) {
        printf("O nome do contato não pode ser vazio.\n");
        return;
    }

    if (!validarEmail(novoContato.email)) {
        printf("O email do contato não é válido.\n");
        return;
    }

    if (!validarTelefone(novoContato.telefone)) {
        printf("O telefone do contato não é válido.\n");
        return;
    }

    novoContato.id = gerarId();
    agenda[numContatos++] = novoContato;

    printf("Contato cadastrado com sucesso.\n");
}

void listarContatos() {
    if (numContatos == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    printf("Lista de contatos:\n");
    for (int i = 0; i < numContatos; i++) {
        printf("ID: %d\n", agenda[i].id);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Email: %s\n", agenda[i].email);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("-------------------\n");
    }
}

void mostrarQuantidadeContatos() {
    printf("Quantidade de contatos cadastrados: %d\n", numContatos);
}

void buscarPorNome() {
    char nomeBusca[maxNomes];
    printf("Digite o nome a ser buscado: ");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    int encontrou = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(nomeBusca, agenda[i].nome) == 0) {
            printf("Contato encontrado:\n");
            printf("ID: %d\n", agenda[i].id);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("-------------------\n");
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum contato encontrado com o nome especificado.\n");
}

void buscarPorEmail() {
    char emailBusca[maxEmail];
    printf("Digite o email a ser buscado: ");
    fgets(emailBusca, sizeof(emailBusca), stdin);
    emailBusca[strcspn(emailBusca, "\n")] = '\0';

    int encontrou = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(emailBusca, agenda[i].email) == 0) {
            printf("Contato encontrado:\n");
            printf("ID: %d\n", agenda[i].id);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("-------------------\n");
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum contato encontrado com o email especificado.\n");
}

void buscarPorInicial() {
    char inicialBusca;
    printf("Digite a inicial do nome a ser buscado: ");
    scanf(" %c", &inicialBusca);

    int encontrou = 0;
    for (int i = 0; i < numContatos; i++) {
        if (agenda[i].nome[0] == inicialBusca) {
            printf("Contato encontrado:\n");
            printf("ID: %d\n", agenda[i].id);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("-------------------\n");
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum contato encontrado com a inicial especificada.\n");
}

void listarContatosDDD() {
    char dddBusca[3];
    printf("Digite o DDD a ser buscado: ");
    fgets(dddBusca, sizeof(dddBusca), stdin);
    dddBusca[strcspn(dddBusca, "\n")] = '\0';

    int encontrou = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strncmp(dddBusca, agenda[i].telefone, 2) == 0) {
            printf("Contato encontrado:\n");
            printf("ID: %d\n", agenda[i].id);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("-------------------\n");
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum contato encontrado com o DDD especificado.\n");
}

int main() {
    int opcao;

    do {
        printf("\n===== Agenda de Contatos =====\n");
        printf("1. Cadastrar um novo contato\n");
        printf("2. Listar todos os contatos cadastrados\n");
        printf("3. Apresentar a quantidade de contatos cadastrados\n");
        printf("4. Buscar um contato por nome\n");
        printf("5. Buscar um contato por email\n");
        printf("6. Buscar contatos por inicial\n");
        printf("7. Listar todos os contatos de um mesmo DDD\n");
        printf("8. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarContato();
                break;
            case 2:
                listarContatos();
                break;
            case 3:
                mostrarQuantidadeContatos();
                break;
            case 4:
                buscarPorNome();
                break;
            case 5:
                buscarPorEmail();
                break;
            case 6:
                buscarPorInicial();
                break;
            case 7:
                listarContatosDDD();
                break;
            case 8:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 8);

    return 0;
}
