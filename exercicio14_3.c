#include <stdio.h>

int main() {
    // Declaração de duas variáveis inteiras
    int numero1, numero2;

    // Leitura de duas variáveis inteiras do teclado
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    // Comparação de endereços
    int *endereco_numero1 = &numero1;
    int *endereco_numero2 = &numero2;

    // Exibição do conteúdo da variável com maior endereço
    if (endereco_numero1 > endereco_numero2) {
        printf("Conteúdo do maior endereço: %d\n", numero1);
    } else {
        printf("Conteúdo do maior endereço: %d\n", numero2);
    }

    return 0;
}
