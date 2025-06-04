#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Simula o movimento de Torre, Bispo, Rainha e Cavalo usando estruturas de repetição.
    Cada peça utiliza uma estrutura diferente: for, while, do-while e loops aninhados.
*/

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    int casas_bispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    int casas_rainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando loops aninhados)
    int casas_baixo = 2;
    int casas_esquerda = 1;
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for): move para baixo
    for (int k = 1; k <= casas_baixo; k++) {
        printf("Baixo\n");
    }

    // Loop interno (while): move para a esquerda
    int l = 1;
    while (l <= casas_esquerda) {
        printf("Esquerda\n");
        l++;
    }



    return 0;
}