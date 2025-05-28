#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("Bem-vindo ao Jogo de Jokenpo!\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolhaJogador);

    // Gera a escolha do computador
    escolhaComputador = rand() % 3 + 1;
    printf("Você escolheu: %d\n", escolhaJogador);
    printf("Computador escolheu: %d\n", escolhaComputador);

    // Lógica do jogo

    if (escolhaJogador == escolhaComputador)
    {
        printf("### Jogo empatou! ###\n");
    }
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)){
        printf("### Parabéns, você ganhou! ###\n");

    }
    else {
        printf("### Você perdeu! ###\n");
    }
    
}