#include <stdio.h>
int main() {
    int pontuação = 85;
    char conceito;
    if (pontuação >= 90) { // Primeira condição
        conceito = 'A';
    } else if (pontuação >= 80) { // Segunda condição, só avaliada se a primeira for falsa
        conceito = 'B';
    } else if (pontuação >= 70) { // Terceira condição, só avaliada se as duas primeiras forem falsas
        conceito = 'C';
    } else if (pontuação >= 60) { // Quarta condição
        conceito = 'D';
    } else { // SE nenhuma das condições acima for verdadeira
        conceito = 'F';
    }        
    printf("Pontuação: %d -> Conceito: %c\n", pontuação, conceito);
     
        
    return 0;
}