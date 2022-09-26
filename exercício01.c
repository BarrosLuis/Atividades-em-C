#include<stdio.h>
#include<locale.h>
// EXERCÍCIO 1

int main() {
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf ("Insira o valor da base do triângulo: ");
    scanf ("%f", &base);

    printf ("Insira o valor da  altura do triângulo: ");
    scanf ("%f", &altura);

    area = (base*altura)/2;

    printf("O valor da área do triângulo é igual a %.2f", area);

    return 0;
}


