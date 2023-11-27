#include <stdio.h>

// Função para trocar o conteúdo de duas variáveis
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Declaração de duas variáveis inteiras
    int valor1, valor2;

    // Leitura de dois valores inteiros do teclado
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    // Chama a função para trocar os valores
    trocarValores(&valor1, &valor2);

    // Exibição dos valores trocados
    printf("Valores trocados: %d e %d\n", valor1, valor2);

    return 0;
}
