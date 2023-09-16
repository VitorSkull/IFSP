#include <stdio.h>
#include <math.h>

int main(){

float sal, enc, fgts, desp;


printf("Insira o salario dos funcionarios: ", sal);
scanf("%f", &sal);


printf("\nO salario de cada funcionario sera: %.2f\n", sal);


enc = sal * 0.2 ;
fgts = sal * 0.08;
desp = enc + fgts;

printf("Encargo patronal: %.2f\n", enc);
printf("FGTS: %.2f\n", fgts);

printf("Despensas totais: %.2f", desp);
    return 0;
}
