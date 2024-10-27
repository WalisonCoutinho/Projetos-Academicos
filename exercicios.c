#include <stdio.h>

int main() {
    int quantidadeCarros, quantidadeMotos, quantidadeCaminhoes;
    const int precoCarro = 15;
    const int precoMoto = 5;
    const int precoCaminhao = 30;

  
    printf("Digite a quantidade de carros: ");
    scanf("%d", &quantidadeCarros);
    
    printf("Digite a quantidade de motos: ");
    scanf("%d", &quantidadeMotos);
    
    printf("Digite a quantidade de caminhoes: ");
    scanf("%d", &quantidadeCaminhoes);

    
    int arrecadacaoCarros = quantidadeCarros * precoCarro;
    int arrecadacaoMotos = quantidadeMotos * precoMoto;
    int arrecadacaoCaminhoes = quantidadeCaminhoes * precoCaminhao;
    
    int totalArrecadado = arrecadacaoCarros + arrecadacaoMotos + arrecadacaoCaminhoes;

    printf("\nArrecadacao do pedagio:\n");
    printf("Carros: R$ %d (Quantidade: %d)\n", arrecadacaoCarros, quantidadeCarros);
    printf("Motos: R$ %d (Quantidade: %d)\n", arrecadacaoMotos, quantidadeMotos);
    printf("Caminhoes: R$ %d (Quantidade: %d)\n", arrecadacaoCaminhoes, quantidadeCaminhoes);
    printf("Total arrecadado: R$ %d\n", totalArrecadado);

    return 0;
}
