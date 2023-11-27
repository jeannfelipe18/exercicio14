#include <stdio.h>

// Função que calcula a soma de A e B e armazena o resultado em A
void calcularSoma(int *A, int B) {
    *A = *A + B;
}

int main() {
    // Definindo dois números inteiros
    int numeroA = 5;
    int numeroB = 7;

    // Imprimindo os valores iniciais de A e B
    printf("Valores iniciais: A = %d, B = %d\n", numeroA, numeroB);

    // Chamando a função para calcular a soma e modificar o valor de A
    calcularSoma(&numeroA, numeroB);

    // Imprimindo os valores atualizados de A e B
    printf("Valores atualizados: A = %d, B = %d\n", numeroA, numeroB);

    return 0;
}
