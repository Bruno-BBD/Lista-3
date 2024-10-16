#include <stdio.h>

int gnome_sort(int array[], int tamanho) {
    int i = 0;

    while (i < tamanho) {
        // Se estiver na ordem correta
        if (i == 0 || array[i] >= array[i - 1]) {
            i++; // Avança para o próximo elemento
        } else {
            // Se estiver na ordem incorreta, troca os elementos
            int temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            i--; // Retrocede para verificar o elemento anterior
            // Garantir que não retroceda além do índice 0
            if (i < 0) {
                i = 0;
            }
        }
    }

    return 0; // Código de sucesso
}

int main() {
    int meu_array[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(meu_array) / sizeof(meu_array[0]);

    gnome_sort(meu_array, tamanho);

    printf("Array ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meu_array[i]);
    }
    printf("\n");

    return 0;
}


