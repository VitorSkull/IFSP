#include <stdio.h>

#define PI 3.1415
int main(){

char g;
int idade;

    printf("Digite seu genero = ");
    scanf("%c", &g);

    printf("Digite sua idade = ");
    scanf("%d", &idade);
        if(toupper(g)=='M' && idade >= 18){

            printf("Seu genero e masculino e voce e maior de idade\n");
        }
           else if(toupper(g)!='M' && idade >= 18){

                printf("seu genero e diferente de masculino e voce e maior de idade\n");
            }

             else if(idade > 0 && idade < 18 && (toupper(g)!='M')){
                    printf("Seu genero e outro e voce e menor de idade\n");
            }

               else if(idade > 0 && idade < 18){
                    printf("Seu genero e masculino e voce e menor de idade\n");
            }

            else{

                printf("INVALIDO");
            }





    return 0;
    }