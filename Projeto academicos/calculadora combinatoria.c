#include <stdio.h>
#include <math.h>  // Para usar a função pow() para calcular N^k

// Função para calcular o fatorial
long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular A(n, k)
long long arranjo(int n, int k) {
    if (k > n) return 0;
    return fatorial(n) / fatorial(n - k);
}

// Função para calcular C(n, k)
long long combinacao(int n, int k) {
    if (k > n) return 0;
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

// Função para calcular PR(n, k) (Permutação com repetição)
long long permutacao_repeticao(int n, int k) {
    return (long long)pow(n, k);  // Usa a função pow() para calcular N^k
}

// Função para calcular CR(n, k) (Combinação com repetição)
long long combinacao_repeticao(int n, int k) {
    if (k == 0) return 1;
    return combinacao(n + k - 1, k);
}

int main() {
    int opcao;
    int n, k;

    do {
        printf("MENU COMBINATORIA:\n");
        printf("1. P(n)\n");
        printf("2. A(n, k)\n");
        printf("3. C(n, k)\n");
        printf("4. PR(n, k)\n");
        printf("5. AR(n, k)\n");
        printf("6. CR(n, k)\n");
        printf("7. SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce escolheu P(n)\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("P(%d) = %lld\n", n, fatorial(n));
                break;

            case 2:
                printf("Voce escolheu A(n, k)\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("Digite K: ");
                scanf("%d", &k);
                printf("A(%d, %d) = %lld\n", n, k, arranjo(n, k));
                break;

            case 3:
                printf("Voce escolheu C(n, k)\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("Digite K: ");
                scanf("%d", &k);
                printf("C(%d, %d) = %lld\n", n, k, combinacao(n, k));
                break;

            case 4:
                printf("Voce escolheu PR(n, k) - Permutacao com repeticao\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("Digite K: ");
                scanf("%d", &k);
                printf("PR(%d, %d) = %lld\n", n, k, permutacao_repeticao(n, k));  // Chama a função de permutação com repetição
                break;

            case 5:
                printf("Voce escolheu AR(n, k)\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("Digite K: ");
                scanf("%d", &k);
                printf("AR(%d, %d) = %lld\n", n, k, arranjo(n, k)); 
                break;

            case 6:
                printf("Voce escolheu CR(n, k)\n");
                printf("Digite N: ");
                scanf("%d", &n);
                printf("Digite K: ");
                scanf("%d", &k);
                printf("CR(%d, %d) = %lld\n", n, k, combinacao_repeticao(n, k));
                break;

            case 7:
                printf("Saindo em 3 2 1...\n");
                break;

            default:
                printf("Opcao inválida! Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 7);

    return 0;
}
