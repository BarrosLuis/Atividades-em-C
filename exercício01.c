#include<stdio.h>
#include<locale.h>
// EXERC�CIO 1

int main() {
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf ("Insira o valor da base do tri�ngulo: ");
    scanf ("%f", &base);

    printf ("Insira o valor da  altura do tri�ngulo: ");
    scanf ("%f", &altura);

    area = (base*altura)/2;

    printf("O valor da �rea do tri�ngulo � igual a %.2f", area);

    return 0;
}


