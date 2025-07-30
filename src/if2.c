#include <stdio.h>

int main()
{
    int opção;
    printf("Selecione uma opção:\n");
    printf("1. Ver Saldo\n");
    printf("2. Fazer Saque\n");
    printf("3. Fazer Depósito\n");
    printf("4. Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opção); // Lê a opção do usuário
    if (opção == 1)
    {
        printf("Voce escolheu 'Ver Saldo'.\n");
        // Lógica para ver o saldo
    }
    else if (opção == 2)
    {
        printf("Voce escolheu 'Fazer Saque'.\n); ");
        // Lógica para fazer o saque
    }
    else if (opção == 3)    {   
        printf("Voce escolheu 'Fazer o Depósito'.\n");
        // Lógica para fazer o depósito
    }
    else if (opção == 4){
        printf("Saindo do programa. Até mais!\n");
    }
    else
    {
    printf("Opção inválida. Por favor, escolha um numero entre 1 e 4.\n");
    }
    return 0;
}
