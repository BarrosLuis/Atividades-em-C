#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Problema: Crie um programa que pe�a ao usu�rio para entrar com 4 notas
    de um aluno, calcule sua m�dia aritm�tica, e retorne o valor dessa m�dia
    calculada */

int main()
{

setlocale(LC_ALL, "Portuguese");

int contador;
float nota, media, total;
total=0;
contador=1;
while (contador<=4) {
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    total += nota;
    contador++;
}
media = total/4;
printf("A m�dia do aluno �: %.2f", media);
return 0;
}


