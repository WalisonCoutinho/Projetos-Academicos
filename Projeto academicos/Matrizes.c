#include <stdio.h>

void exibe_matriz(int matriz[][10], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Declaração de variáveis
    int A[10][10], B[10][10], R[10][10];      // Matrizes A, B e Resultado R
    int lA, cA, lB, cB;                        // Linhas e colunas das matrizes A e B
    int opcao;                                 // Opção escolhida no menu

    // Loop do menu de operações
    do {
        // Exibe o menu
        printf("MENU\n");
        printf("1- A+B\n");
        printf("2- A-B\n");
        printf("3- A*B\n");
        printf("4- Sair\n");
        scanf("%d", &opcao);

        if (opcao == 4) break;

        // Entrada das dimensões das matrizes
        printf("Digite as dimensoes de A (linhas e colunas: Ex 0 0 ): ");
        scanf("%d %d", &lA, &cA);
        printf("Digite as dimensoes de B (linhas e colunas: Ex 0 0 ): ");
        scanf("%d %d", &lB, &cB);

        // Leitura das matrizes A e B
        printf("Matriz A:\n");
        for (int i = 0; i < lA; i++)
            for (int j = 0; j < cA; j++)
                scanf("%d", &A[i][j]);

        printf("Matriz B:\n");
        for (int i = 0; i < lB; i++)
            for (int j = 0; j < cB; j++)
                scanf("%d", &B[i][j]);

        // Soma A + B
        if (opcao == 1 && lA == lB && cA == cB) {
            for (int i = 0; i < lA; i++)
                for (int j = 0; j < cA; j++)
                    R[i][j] = A[i][j] + B[i][j];
            printf("Resultado A+B:\n");
            exibe_matriz(R, lA, cA);
        }

        // Subtração A - B
        if (opcao == 2 && lA == lB && cA == cB) {
            for (int i = 0; i < lA; i++)
                for (int j = 0; j < cA; j++)
                    R[i][j] = A[i][j] - B[i][j];
            printf("Resultado A-B:\n");
            exibe_matriz(R, lA, cA);
        }

        // Multiplicação A * B
        if (opcao == 3 && cA == lB) {
            for (int i = 0; i < lA; i++)
                for (int j = 0; j < cB; j++) {
                    R[i][j] = 0;
                    for (int k = 0; k < cA; k++)
                        R[i][j] += A[i][k] * B[k][j];
                }
            printf("Resultado A*B:\n");
            exibe_matriz(R, lA, cB);
        }

        // Caso operação inválida
        if ((opcao == 1 || opcao == 2) && (lA != lB || cA != cB)) {
            printf("OPERACAO INVALIDA PARA A ORDEM INSERIDA\n");
        }
        if (opcao == 3 && cA != lB) {
            printf("OPERACAO INVALIDA PARA A ORDEM INSERIDA\n");
        }

    } while (opcao != 4);

    printf("Programa finalizado.\n");
    return 0;
}
