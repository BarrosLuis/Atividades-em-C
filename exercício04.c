#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/* O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de
Sa�de para dar uma indica��o sobre a condi��o de peso de uma pessoa
adulta. A f�rmula � IMC = peso / (altura)�. Elabore um algoritmo que leia o peso
e a altura de um adulto e mostre sua condi��o de acordo com a tabela abaixo:

abaixo de 18.5 > abaixo do peso
entre 18.5 e 25 > peso normal
entre 15.01 e 30 > acima do peso
acima de 30 > obeso


 */

int main(){
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Seu peso: (KG) ");
    scanf("%f", &peso);

    printf("Sua altura: (M) ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5){
        printf("ABAIXO DO PESO");
    }else if ((imc >= 18.5) && (imc <= 25)){
        printf("PESO NORMAL");
    }else if ((imc >= 25.01) && (imc <= 30)){
        printf("ACIMA DO PESO");
    }else{
        printf("OBESO");
    }

    return 0;
}
