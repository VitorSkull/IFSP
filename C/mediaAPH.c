#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;
    double mediaAritmetica, mediaPonderada, mediaHarmonica;
    
    printf("Digite as 4 notas:");
    scanf("%lf, %lf, %lf, %lf", &nota1, &nota2, &nota3, &nota4);

    if(nota1 > 10 || nota1 < 0 ||nota2 > 10 || nota2 < 0 ||nota3 > 10 || nota3 < 0 || nota4 > 10 || nota4 < 0 ){
        printf("Algumas notas estao fora do intervalo (0, 10)\n");
        return 0;
    }
    
    printf ("Nota 1: %.1lf \nNota2: %.1lf \nNota:3 %.1lf \nNota4: %.1lf\n", nota1, nota2, nota3, nota4);
    if (nota1 >= 0 && nota1 <= 10 && 
        nota2 >= 0 && nota2 <= 10 && 
        nota3 >= 0 && nota3 <= 10 && 
        nota4 >= 0 && nota4 <= 10) {
        
        mediaAritmetica = (nota1 + nota2 + nota3 + nota4) / 4;
        mediaPonderada = (nota1*2 + nota2*2 + nota3*3 + nota4*5) / 12;
        }
        if (nota1 != 0 && nota2 != 0 && nota3 != 0 && nota4 != 0) {
            mediaHarmonica = 4 / ((1/nota1) + (1/nota2) + (1/nota3) + (1/nota4));
        }
            else{
                mediaHarmonica = -1;
            }
        printf("Media Aritmetica: %.1lf\n", mediaAritmetica);
        printf("Media Ponderada: %.1lf\n", mediaPonderada);

         if (mediaHarmonica != -1) {
            printf("Media Harmonica: %.1lf\n", mediaHarmonica);
        } 
        
        else {
            printf("Uma das notas e zero, não e possível calcular a media harmonica\n");
        }

        return 0;
}