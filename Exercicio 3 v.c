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

            // Previne retroceder além do índice 0
            if (i < 0) {
                i = 0;
            }
        }
    }
}

int main() {
    int meu_array[100]; // Supondo que o tamanho máximo do array é 100
    int tamanho;

    printf("Digite o número de elementos: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &meu_array[i]);
    }

    gnome_sort(meu_array, tamanho);

    printf("Array ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", meu_array[i]);
    }
    printf("\n");

    return 0;
}

