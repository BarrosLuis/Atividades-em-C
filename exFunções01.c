/* . Escreva um programa que implemente uma função que
retorne a diferença entre dois números inteiros digitados pelo
usuário.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int subtracao (int n1, int n2){
    int resultado;
    resultado = n1 - n2;
    return(resultado);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2, resultado;
    printf("Insira o primeiro valor a ser subtraído: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor a ser subtraído: ");
    scanf("%d", &valor2);

    resultado = subtracao(valor1,valor2);

    printf("\nO resultado da subtração entre %d e %d é igual à: %d\n", valor1, valor2, resultado);
}
