/*1 - Desenvolva um programa em Linguagem C para ler do usuário dois valores reais.
Apresente na tela o maior valor lido.*/

#include <stdio.h>
#include <math.h>

/*int main(){

    float n1;
    float n2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

        if(n1 > n2){

            printf("O maior valor digitado foi %.1f", n1);
        }
            else if(n2 > n1){

                printf("O maior valor digitado foi %.1f", n2);

            }



    return 0;
}*/

/*2. Desenvolva um programa em Linguagem C para ler do usuário um valor real. Se o
valor for positivo, apresente o valor da raiz quadrada. Caso o valor seja negativo,
apresente o valor ao quadrado*/

int main(){

    int valor;
    int raiz;
    int quadrado;

    printf("Digite um valor real: ");
    scanf("%d", &valor);

        if(valor > 0){

            raiz = sqrt(valor);

            printf("A raiz quadrada do valor inserido e: %d", raiz);

        }
            else if(valor < 0){

                quadrado = valor*valor;

                printf("O valor inserido ao quadrado e: %d", quadrado);


            }

    return 0;
}