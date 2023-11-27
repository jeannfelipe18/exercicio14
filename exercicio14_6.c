#include <stdio.h>

// Função para calcular a soma do dobro dos valores e atualizar as variáveis originais
int somaDobro(int *a, int *b) {
    *a = 2 * (*a);  // Armazena o dobro de A em A
    *b = 2 * (*b);  // Armazena o dobro de B em B

    return (*a + *b);  // Retorna a soma do dobro dos valores
}

int main() {
    int A, B;

    // Solicita os valores ao usuário
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chama a função e exibe o resultado
    int resultado = somaDobro(&A, &B);
    printf("A soma do dobro de A e B é: %d\n", resultado);

    // Exibe os novos valores de A e B
    printf("Novo valor de A: %d\n", A);
    printf("Novo valor de B: %d\n", B);

    return 0;
}
