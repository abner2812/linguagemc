#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int linha = 20;
    int coluna = 1;
    // Invertendo o triângulo
    while (linha >= 1) {
        while (coluna <= linha){
            printf("@  ");
            coluna++;
        }
        coluna = 1; // Resetar a variável coluna
        printf("\n");
        linha--;
    }
    return 0;
}