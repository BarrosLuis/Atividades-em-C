/* Escreva um programa que calcule a �rea de um c�rculo a
partir de uma fun��o, essa fun��o recebe o valor do raio e
retorna a �rea do c�rculo. */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float area (float raio) {
    float calcarea;
    raio = raio * raio;
    calcarea = raio * 3.14;
    printf("A area do circulo � igual a: %f", calcarea);
    return(calcarea);
}

int main() {

setlocale(LC_ALL, "Portuguese");

float raio;

printf("Digite o raio do c�rculo: ");
scanf("%f", &raio);

area(raio);

}
