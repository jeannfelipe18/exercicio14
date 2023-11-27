#include <stdio.h>

int main() {
    // Array de float com 10 elementos
    float meuArray[10];

    // Preenche o array com alguns valores (opcional)
    for (int i = 0; i < 10; i++) {
        meuArray[i] = i * 1.5; // Exemplo de valores
    }

    // Imprime o endereço de cada posição do array
    printf("Endereços do Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: %p\n", i, (void*)&meuArray[i]);
    }

    return 0;
}
