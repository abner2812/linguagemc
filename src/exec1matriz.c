#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3];
    int menor;
    
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

        menor = matriz[0][0];

        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor valor da matriz é: %d\n", menor);

    return 0;
}