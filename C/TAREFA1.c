#include <stdio.h>
#include <stdbool.h>

int main(){

    int idade = 17;
    int meses = 3;
    char nome[] = "vitor";
    char nome2[] = "VitorIsCOOL";
    float pp = 11.533;
    float top_play = 676.287;
    bool verdade = true;
    bool mentira = false;
    char letra = 'v';
    char letra2 = 'r';
       
       
       
       
       
       
        printf("Oi, meu nome e %s, tenho %d anos e faltam %d meses para eu fazer 18 anos\n", nome, idade, meses);
            printf("Sou chamado de diversos modos, como por exemplo %s\n", nome2);
                printf("atualmente tenho uma top play de %.3f e %.3f pps na minha conta do osu!\n", top_play, pp);
                    printf("eu nao gosto de cafe: %d\neu sou preguicoso: %d\n", mentira, verdade);
        printf("meu nome comeca com %c e termina com %c ", letra, letra2);

    return 0;
}