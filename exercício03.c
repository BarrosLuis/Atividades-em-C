// EXERCÍCIO 3
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

/* Verônica distribui sua renda mensal da seguinte forma: 10% saúde, 25%
educação, 30% alimentação, 10% vestuário, 5% lazer, 20% outros. Faça um
algoritmo que leia a renda mensal líquida de Verônica, calcule e escreva o
valor aplicado em cada item acima citado. */

    float renda, saude, educacao, alimentacao, vestuario, lazer, outros;


    printf ("Olá verônica, diga-me sua renda mensal: ");
    scanf("%f", &renda );

    saude =  (renda * 10) / 100;
    educacao = (renda * 25) /100;
    alimentacao = (renda * 30)/100;
    vestuario = (renda * 10) /100;
    lazer = (renda * 5) /100;
    outros = (renda * 20) /100;

    printf ("\nO valor destinado a saúde é : %.2f\n", saude);
    printf ("O valor destinado a educação é: %.2f\n", educacao);
    printf ("O valor destinado a alimentação é: %.2f\n", alimentacao);
    printf ("O valor destinado a vestuário é: %.2f\n", vestuario);
    printf ("O valor destinado a lazer é: %.2f\n", lazer);
    printf ("O valor destinado a outros é: %.2f\n", outros);

    return 0;
}
