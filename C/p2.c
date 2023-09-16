#include <stdio.h>

int main(){

float dias, sal, aux, pass = 35.4, desc;

printf("Insira o numero de dias que o funcionario ira trabalhar: ");
scanf("%f", &dias);

printf("Insira o salario do funcionario: ");
scanf("%f", &sal);

printf("O funcionario trabalha %.f dias e recebe um salario de %.2f reais\n", dias, sal);

aux = dias * pass;

printf("O auxilio ira oferecer: %.2f\n", aux);

desc = sal * 0.06;

printf("O desconto do salario sera de: %.2f\n", desc);

    if(aux < desc){

        printf("Nao compensa");
    }
        else{

            printf("Compensa aderir ao auxilio");
        }

    return 0;
}
