// EXERC�CIO 3
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

/* Ver�nica distribui sua renda mensal da seguinte forma: 10% sa�de, 25%
educa��o, 30% alimenta��o, 10% vestu�rio, 5% lazer, 20% outros. Fa�a um
algoritmo que leia a renda mensal l�quida de Ver�nica, calcule e escreva o
valor aplicado em cada item acima citado. */

    float renda, saude, educacao, alimentacao, vestuario, lazer, outros;


    printf ("Ol� ver�nica, diga-me sua renda mensal: ");
    scanf("%f", &renda );

    saude =  (renda * 10) / 100;
    educacao = (renda * 25) /100;
    alimentacao = (renda * 30)/100;
    vestuario = (renda * 10) /100;
    lazer = (renda * 5) /100;
    outros = (renda * 20) /100;

    printf ("\nO valor destinado a sa�de � : %.2f\n", saude);
    printf ("O valor destinado a educa��o �: %.2f\n", educacao);
    printf ("O valor destinado a alimenta��o �: %.2f\n", alimentacao);
    printf ("O valor destinado a vestu�rio �: %.2f\n", vestuario);
    printf ("O valor destinado a lazer �: %.2f\n", lazer);
    printf ("O valor destinado a outros �: %.2f\n", outros);

    return 0;
}
