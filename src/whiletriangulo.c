#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
   
    int linha = 20;
    int coluna = 1;
    while (linha >= 1) 
    {
        while (coluna <= linha)
        {
            printf("@  ");
            coluna++;
        }
        coluna = 1; // Resetar a variável coluna
        printf("\n");
        linha--; // Decrementar a linha para inverter o triângulo
    }
    return 0;
}