#include <stdio.h>

//função recursiva para o movimento da Torre
void moverTorre(int casa, int limite) {
    if (casa > limite) return;
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, limite);
}

//função recursiva para o movimento da Rainha
void moverRainha(int casa, int limite) {
    if (casa > limite) return;
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, limite);
}

//função recursiva e com loops aninhados para o Bispo
void moverBispo(int linha, int limite) {
    if (linha > limite) return;

    for (int coluna = linha; coluna <= linha; coluna++) {
        printf("Casa %d: Cima, Direita\n", linha);
    }

    moverBispo(linha + 1, limite);
}

//função com loops aninhados para o Cavalo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {  //movimenta 2 casas para cima
        printf("Passo %d: Cima\n", i);
        if (i == 2) {
            for (int j = 1; j <= 1; j++) { //1 casa para direita
                if (j == 1) {
                    printf("Passo %d: Direita\n", i + j);
                    break;  //como só é uma vez, encerramos
                }
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(1, 8);

    moverCavalo();

    return 0;
}
