#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Implemente um algoritmo que calcule os impostos a pagar para um valor em
cada faixa. Para cada um, mostre uma mensagem que identifique na tela a que
se refere a cada valor. */

int main(){
    setlocale(LC_ALL, "Portuguese");

float valorBase;

 printf("=========TABELA DE IMPOSTOS=========\n\n");
 printf("ATÉ 1.200,00: ISENTO\n");
 printf("ENTRE 1.200,01 ATÉ 5.000,00: 10%%\n");
 printf("ENTRE 5.000,01 ATÉ 10.000,00: 15%%\n");
 printf("ACIMA DE 10.000,00: 20%%\n\n");



printf("Digite o valor do base: ");
scanf("%f", &valorBase);

     if(valorBase <= 1200){
        printf("INSENTO DE IMPOSTOS \n");
     }else if(valorBase >= 1200.01 && valorBase <= 5000){
        valorBase = (valorBase * 10) /100;
        printf("Valor calculado de impostos: %.2f\n", valorBase);
     }else if(valorBase > 5000){
        valorBase = (valorBase * 15) /100;
        printf("Valor calculado de impostos: %.1f \n", valorBase);
     }

     system("pause");
}
