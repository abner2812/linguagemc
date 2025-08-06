#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha = 1;
    int coluna;
    while (linha <= 10) {
        coluna = 1;
        while (coluna <= 10) {
            printf("%4d", linha * coluna);
            coluna++;
        }
        printf("\n");
        linha++;
    }
    return 0;
}