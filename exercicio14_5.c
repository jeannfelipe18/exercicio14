#include <stdio.h>

// Função para encontrar o maior e o menor valor entre dois inteiros
void encontraMaiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    // Declaração das variáveis
    int num1, num2, maior, menor;

    // Solicita que o usuário insira dois valores inteiros
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    // Chamada da função para encontrar o maior e o menor valor
    encontraMaiorMenor(num1, num2, &maior, &menor);

    // Exibe os resultados na tela
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
