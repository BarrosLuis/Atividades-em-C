/* Crie um programa para um caixa eletrônico, utilizando menus
(switch) e outros recursos, que realize operações financeiras
(depósito, saldo, saque). Esse programa deve rodar até que o
usuário decida encerrar as operações. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float vsaldo=0;

int saque(float vsaque){
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &vsaque);
    vsaldo -= vsaque;
    printf("O valor sacado foi de: %.2f \n\n", vsaque);
    return(saque);
}

int deposito(float vdeposito){
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &vdeposito);
    vsaldo += vdeposito;
    printf("O valor depositado foi de: %.2f \n\n", vdeposito);
    return(deposito);
}

int main(){

setlocale(LC_ALL, "Portuguese");

int resposta, escolha;

do{
    system("cls");
    printf("\t\t MENU BANCÁRIO \t\t\n");
    printf("[1] DEPÓSITO\n[2] SAQUE\n[3] EXIBIR SALDO\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch(escolha){

    case 1 :
        deposito(0);
    break;

    case 2 :
        saque(0);
    break;

    case 3 :
        printf("O saldo é igual a %.2f \n\n", vsaldo);
    break;
}
    printf("DESEJA CONTINUAR? [1 - sim /0 - não]: ");
    scanf("%d", &resposta);

} while (resposta == 1);

system("pause");

}
