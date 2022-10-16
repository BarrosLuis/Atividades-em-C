/* Escreva um programa que calcule a área de um círculo a
partir de uma função, essa função recebe o valor do raio e
retorna a área do círculo. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float area (float raio) {
    float calcarea;
    raio = raio * raio;
    calcarea = raio * 3.14;
    printf("A area do circulo é igual a: %f", calcarea);
    return(calcarea);
}

int main() {

setlocale(LC_ALL, "Portuguese");

float raio;

printf("Digite o raio do círculo: ");
scanf("%f", &raio);

area(raio);

}
