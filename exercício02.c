#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
// EXERCÍCIO 2

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nVendedor[50];
    float salFixo, totVendas, comissao, salFinal;

    printf("Nome do Vendedor: ");
    scanf("%s", &nVendedor);

    printf("Salário Fixo: ");
    scanf("%f", &salFixo);

    printf("Total de Vendas: ");
    scanf("%f", &totVendas);

    comissao = (totVendas * 15)/100;
    salFinal = salFixo + comissao;

    printf("O vendedor %s terá o salário final de R$%.2f", nVendedor, salFinal);

    return 0;
}
