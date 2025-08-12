#include <stdio.h> 
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int maior;
    int linhaMaior = 0, colunaMaior = 0;

        printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    maior = matriz[0][0];

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

   
    printf("O maior valor da matriz é: %d\n", maior);
    printf("Localizado na linha %d e coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}