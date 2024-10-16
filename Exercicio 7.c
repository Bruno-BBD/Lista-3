#include <stdio.h>

int remover_repetidos(int array[], int tamanho) {
    if (tamanho == 0) return 0;

    int novo_tamanho = 1;

    for (int i = 1; i < tamanho; i++) {
        int j;

        for (j = 0; j < novo_tamanho; j++) {
            if (array[i] == array[j]) {
                break;
            }
        }

        if (j == novo_tamanho) {
            array[novo_tamanho] = array[i];
            novo_tamanho++;
        }
    }

    return novo_tamanho;
}

int main() {
    int meu_array[100];
    int tamanho;

    printf("Digite o número de elementos: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &meu_array[i]);
    }

    tamanho = remover_repetidos(meu_array, tamanho);

    printf("Array sem elementos repetidos: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meu_array[i]);
    }
    printf("\n");

    return 0;
}


