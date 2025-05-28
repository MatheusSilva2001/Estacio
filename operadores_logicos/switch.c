#include <stdio.h>

int main (){
    int variavel;

    printf("Digite um valor inteiro: ");
    scanf("%d", &variavel);


switch (variavel) {
  case 1:
    // Código a ser executado se variavel == valor1
    printf("Você digitou 1.\n");
    break;
  case 2:
    // Código a ser executado se variavel == valor2
    printf("Você digitou 2.\n");
    break;
  // Você pode adicionar quantos casos forem necessários
  default:
    // Código a ser executado se nenhum dos casos acima for verdadeiro
    printf("Você digitou um valor diferente de 1 ou 2.\n");
}
}
