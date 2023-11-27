#include <stdio.h>

int main() {
    // Declaração de variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração de ponteiros
    int *ptrInteiro;
    float *ptrReal;
    char *ptrChar;

    // Associação dos ponteiros às variáveis
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrChar = &caractere;

    // Imprime os valores iniciais
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n\n", caractere);

    // Modifica os valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 4.56;
    *ptrChar = 'B';

    // Imprime os valores após a modificação
    printf("Valores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
