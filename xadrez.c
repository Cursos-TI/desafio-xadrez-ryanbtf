#include <stdio.h>

int main() {

    //movimento da torre: 5 casas para direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    //movimento do bispo: 5 casas na diagonal para cima e direita
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    //movimento da rainha: 8 casas para esquerda
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    //movimento do cavalo: 2 casas para baixo e 1 para esquerda
    printf("\nMovimento do Cavalo:\n");
    i = 1;
    while (i < 2){
        for (int j = 1; j <= 2; j++) {
            printf("Casa %d: Baixo\n", j);
        }
        
        printf("Casa 3: Esquerda\n");
        i++;
    }

    return 0;
}
