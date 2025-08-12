#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

        if (N < 0) {
        printf("O número deve ser positivo.\n");
        return 1; 

    }
    printf("Números de 0 até %d:\n", N);
    for (i = 0; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}