#include <stdio.h>

int main() {
    // a) Declarar e inicializar o array
    int A[6] = {1, 0, 5, -2, -5, 7};

    // b) Calcular e mostrar a soma de A[0], A[1] e A[5]
    int soma = A[0] + A[1] + A[5];
    printf("Soma de A[0] + A[1] + A[5] = %d\n", soma);

    // c) Modificar o valor da posição 4 para 100
    A[4] = 100;

    // d) Mostrar todos os valores do array A (um por linha)
    printf("Valores do array A:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}