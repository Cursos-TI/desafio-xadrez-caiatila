#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez - Nível Mestre

    - Torre, Bispo e Rainha: movimentos implementados com recursividade.
    - Bispo: também utiliza loops aninhados para simular movimento diagonal.
    - Cavalo: movimento em "L" (duas casas para cima e uma para a direita) usando loops aninhados e controle de fluxo.
    - Todas as variáveis de movimento são definidas diretamente no código.
*/

// Função recursiva para simular o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para simular o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para simular o movimento do Bispo (diagonal: cima-direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função para simular o movimento do Bispo usando loops aninhados
void moverBispoLoops(int casas_verticais, int casas_horizontais) {
    // Loop externo: movimento vertical (cima)
    for (int v = 1; v <= casas_verticais; v++) {
        // Loop interno: movimento horizontal (direita)
        for (int h = 1; h <= casas_horizontais; h++) {
            printf("Cima Direita\n");
        }
    }
}

// Função para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    // Cada movimento do cavalo é um "L": 2 para cima, 1 para a direita
    int movimentos_realizados = 0;
    for (int i = 1; i <= movimentos; i++) {
        // Duas casas para cima
        for (int j = 1; j <= 2; j++) {
            printf("Cima\n");
            // Se já fez todos os movimentos, interrompe
            if (++movimentos_realizados >= movimentos) break;
        }
        if (movimentos_realizados >= movimentos) break;
        // Uma casa para a direita
        printf("Direita\n");
        movimentos_realizados++;
        if (movimentos_realizados >= movimentos) break;
    }
}

int main() {
    // Número de casas para cada peça (definidos diretamente)
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int movimentos_cavalo = 3; // Quantos movimentos "L" do cavalo serão simulados

    printf("Movimento da Torre (recursivo):\n");
    moverTorre(casas_torre);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casas_bispo);

    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoLoops(2, 2); // Exemplo: 2 verticais, 2 horizontais (total 4 movimentos diagonais)

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(casas_rainha);

    printf("\nMovimento do Cavalo (loops aninhados e controle de fluxo):\n");
    moverCavalo(movimentos_cavalo);

    return 0;
}

/*
    Comentários detalhados:
    - moverTorre: função recursiva que imprime "Direita" e chama a si mesma até casas == 0.
    - moverRainha: função recursiva que imprime "Esquerda" e chama a si mesma até casas == 0.
    - moverBispoRecursivo: função recursiva que imprime "Cima Direita" e chama a si mesma até casas == 0.
    - moverBispoLoops: loops aninhados, externo para vertical, interno para horizontal, ambos imprimindo "Cima Direita".
    - moverCavalo: loops aninhados, cada iteração faz duas "Cima" e uma "Direita", usando variáveis de controle e break para limitar o número de movimentos.
*/