/* . Escreva um programa que implemente uma fun��o que
retorne a diferen�a entre dois n�meros inteiros digitados pelo
usu�rio.*/

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
    printf("Insira o primeiro valor a ser subtra�do: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor a ser subtra�do: ");
    scanf("%d", &valor2);

    resultado = subtracao(valor1,valor2);

    printf("\nO resultado da subtra��o entre %d e %d � igual �: %d\n", valor1, valor2, resultado);
}
