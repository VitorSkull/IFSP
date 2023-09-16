#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    int guess;

    number = 1 + ( rand() % 10 );
    printf("Jogo divertido!! Descubra o numero correto de 1 a 10\n");
    printf("Numero: ");
    scanf("%d", &guess);

    if(guess == number){
        printf("Parabens voce acertou");
    }
        else{
            printf("Exclui a pasta system32\n");
        }

    printf("%d", number);
    return 0;
}