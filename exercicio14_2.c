#include <stdio.h>

int main() {
    // Declare duas variáveis inteiras
    int numero1, numero2;

    // Atribua valores às variáveis
    printf("Digite o valor para o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o valor para o segundo numero: ");
    scanf("%d", &numero2);

    // Exiba os endereços das variáveis
    printf("Endereco do primeiro numero: %p\n", (void*)&numero1);
    printf("Endereco do segundo numero: %p\n", (void*)&numero2);

    // Compare os endereços e exiba o maior
    if (&numero1 > &numero2) {
        printf("O endereco do primeiro numero e maior.\n");
    } else if (&numero1 < &numero2) {
        printf("O endereco do segundo numero e maior.\n");
    } else {
        printf("Os enderecos sao iguais.\n");
    }

    return 0;
}
