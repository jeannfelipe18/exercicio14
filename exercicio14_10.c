#include <stdio.h>

int main() {
    // Declare um array de inteiros com 5 elementos
    int array[5];
    
    // Ponteiro para percorrer o array
    int *ptr = array;

    // Leia os valores do teclado e armazene no array usando aritmética de ponteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // Imprima o dobro de cada valor usando aritmética de ponteiros
    printf("O dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i) * 2);
    }

    return 0;
}
