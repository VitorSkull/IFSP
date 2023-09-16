#include <stdio.h>

int dentroTabuleiro(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

int possiveisMovimentos(int x, int y) {
    int movX[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int movY[] = {1, 2, 2, 1, -1, -2, -2, -1};

    int count = 0;

    for (int i = 0; i < 8; i++) {
        int novoX = x + movX[i];
        int novoY = y + movY[i];

        if (dentroTabuleiro(novoX, novoY)) {
            count++;
        }
    }

    return count;
}

int main() {
    int pos_x, pos_y;
    printf("Digite a posicao do cavalo (linha coluna): ");
    scanf("%d %d", &pos_x, &pos_y);

    int possibilidades = possiveisMovimentos(pos_x, pos_y);

    printf("Quantidade de possiveis movimentos: %d\n", possibilidades);

    return 0;
}
