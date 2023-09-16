#include <stdio.h>

int main(){

int THM = 220, dep;
float x, ext, inss, irrf, vext, pens, sal, desc, desc2, cont, cont2;

printf("Valor a ser pago por hora trabalhada: ");
scanf("%f", &x);

printf("Total de horas extras realizadas no mes: ");
scanf("%f", &ext);

printf("Numero de dependentes: ");
scanf("%d", &dep);

printf("Valor da pensao alimenticia: ");
scanf("%f", &pens);

vext = ext * (x * 0.5);

printf("Valor da hora extra: %.2f\n", vext);

sal = (THM * x) + vext;

printf("Salario total: %.2f\n\n", sal);

printf("DESCONTO DO INSS: ");
    if(sal <= 1320){

        printf("INSENTO");

        }
        else if(sal <= 2571.29){

            desc = sal * 0.09;
            cont = (sal - desc) + 19.53;
            printf("Desconto de %.2f reais, com um retorno de 19,53 reais, sendo entao o salario atual: %.2f reais\n", desc, cont);

        }
            else if(sal <= 3856.94){

                desc = sal * 0.12;
                cont = (sal - desc) + 96.67;
                printf("Desconto de %.2f reais, com um retorno de 96,67 reais, sendo entao o salario atual: %.2f reais\n", desc, cont);
            }
                else{

                    desc = sal * 0.14;
                    cont = (sal - desc) + 173.81;
                    printf("Desconto de %.2f reais, com um retorno de 173,81 reais, sendo entao o salario atual: %.2f reais\n", desc, cont);
                }


        irrf = sal - desc - (dep * 189.59) - pens;

printf("DESCONTO DO IRFF: ");
    if(sal - irrf <= 1903.98){

        printf("INSENTO\n");

    }
        else if(sal - irrf <= 2826.65){

            desc2 = sal * 0.075;
            cont2 = sal - desc2 + 142.80;
            printf("Desconto de %.2f reais, com um retorno de 142,80 reais, sendo entao o salario atual: %.2f reais\n", desc2, cont2);

        }
            else if(sal - irrf <= 3751.06){

                desc2 = sal * 0.15;
                cont2 = sal - desc2 + 142.80;
                printf("Desconto de %.2f reais, com um retorno de 142,80 reais, sendo entao o salario atual: %.2f reais\n", desc2, cont2);
            }
                else if(sal - irrf <= 4664.68){

                    desc2 = sal * 0.225;
                    cont2 = sal - desc2 + 142.80;
                    printf("Desconto de %.2f reais, com um retorno de 142,80 reais, sendo entao o salario atual: %.2f reais\n", desc2, cont2);
                }
                    else{

                        desc2 = sal * 0.275;
                        cont2 = sal - desc + 142.80;
                        printf("Desconto de %.2f reais, com um retorno de 142,80 reais, sendo entao o salario atual: %.2f reais\n", desc2, cont2);
                    }




printf("TOTAL A RECEBER: %.2f", cont2);

//A partir do IRRF o codigo começou a dar errado, tentei de diversas maneiras mas não consigo encontrar o problema D:

    return 0;
}
