#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/* Problema: Escreva um programa que pe�a ao usu�rio para entrar
    com um n�mero indeterminado de valores, e retorne a m�dia aritimet�ca
    desses valores no final.

    Para que o programa saiba quando deve parar de requisitar a entrada de dados,
    o usu�rio deve digitar o n�mero -1*/


int main(){

int contador=0;
float valor, media, total;
total=0;
printf("Digite um valor (-1 para encerrar): ");
scanf("%f", &valor);
while (valor != -1) {
    total += valor;
    contador++;
    printf("Digite um valor (-1 para encerrar): ");
    scanf("%f", &valor);
}
media = total / contador;
printf("Valor media: %.2f\n", media);
return 0;


}
