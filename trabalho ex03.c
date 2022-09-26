#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cor_carro;
    float total_vendas=0, quantidade, pct_prata, pct_preto, pct_branco, pct_vermelho;

    while(total_vendas < 1000){
        printf("\t\t LEVANTAMENTO DE VENDAS\n\n");
        printf("Veículos vendidos = %.0f\n\n", total_vendas);
        printf("[1] PRATA\n");
        printf("[2] PRETO\n");
        printf("[3] BRANCO\n");
        printf("[4] VERMELHO\n\n");

        printf("Cor do carro: ");
        scanf("%d", &cor_carro);

        printf("Quantidades de carros vendidos: ");
        scanf("%f", &quantidade);

        switch(cor_carro){
            case 1:
                pct_prata = (quantidade/1000)*100;
                break;
            case 2:
                pct_preto = (quantidade/1000)*100;
                break;
            case 3:
                pct_branco = (quantidade/1000)*100;
                break;
            case 4:
                pct_vermelho = (quantidade/1000)*100;
                break;
            default:
                printf("ERROR: Insira um valor entre 1 e 4!");
                Sleep(2500);
                break;
        }

        total_vendas = total_vendas + quantidade;
        system("cls");
    }
    system("pause");

    printf("\t\tPORCENTAGEM DE CARROS VENDIDOS\n\n");
    printf("Veículos vendidos = %.0f\n\n", total_vendas);
    printf("PRATA = %.0f%%\n", pct_prata);
    printf("PRETO = %.0f%%\n", pct_preto);
    printf("BRANCO = %.0f%%\n", pct_branco);
    printf("VERMELHO = %.0f%%\n\n", pct_vermelho);

    return 0;
}
