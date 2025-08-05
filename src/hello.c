/*Primeiro arquivo em linguagem c.
Para chamar iremos importar a biblioteca
stdio (std-standard(padrão) oi-input output
(entrada e saída)). Esta biblioteca possui
os comandos para interação com o teclado e
monitor*/
#include <stdio.h>
 
/*Iniciar a estrutura do codigo para a
mensagem hello world, usando a função
main(principal), pois o comando C irá
procurar esta funçãoe para dar execulção no
nosso caidigo.*/
int main(){
    printf("Hello World!\n");
    return 0;
}
/*A função printf imprime na tela a mensagem
"Hello World!" e o \n pula uma linha. O return
0 indica que o programa terminou com sucesso.*/
/*Para compilar o código, use o comando:
gcc hello.c -o hello
E para executar, use:
./hello
*/
/*Este é um exemplo simples de um programa
em C que imprime "Hello World!" na tela.