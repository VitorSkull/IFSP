#include <stdio.h>

int main(){

int n, j;
system("Color c3");
printf("Digite o numero de linhas");
scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){

            printf("*");
        }

        printf("\n");

    }




    return 0;
}