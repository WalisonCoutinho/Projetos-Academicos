#include <stdio.h>


int main() {
    int n;
    long double somatorio = 0.0;  

    // Solicita o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula o somatório de 1/k! de k=0 até k=n
    long double fatorial = 1.0;
    for (int k = 0; k <= n; k++) {
        if (k > 0) {
            fatorial *= k;  
        }
        somatorio += 1.0 / fatorial;  
    }

    // Exibe o resultado
    printf("O somatorio de k=0 ate k=%d e: %.15Lf\n", n, somatorio);
    
    return 0;
}
