#include <stdio.h>

int main() {
    // Definindo a matriz de 3x3
    int matriz[3][3];

    // Preenchendo a matriz com alguns valores (opcional)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j + 1;
        }
    }

    // Imprimindo o endereço de cada posição da matriz
    printf("Endereços da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d] = %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}
