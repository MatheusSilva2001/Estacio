#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20] = "Matheus";

    // printf("Sua altura é: %e\n ", altura);
    // printf("Sua opção é: %c\n", opcao);
    // printf("Nome: %s Idade: %d", nome, idade);

    printf("Entre com sua idade\n");
    scanf("%d %f", &idade, &altura);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Entre com sua opção\n");
    scanf(" %c", &opcao);
    printf("Sua opção é %c", opcao);


    /*
    printf("formatacao1 formatacao2", variavel1 , variavel2);
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrao.
    %e: Imprime um numero de ponto flutuante na notaçao cientifica.
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */
}