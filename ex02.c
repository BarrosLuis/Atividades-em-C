#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"Portuguese");

float ndependentes, nsalario, fgts, inss, sfamilia, sliquido, salario;
char nome[15];

printf ("Digite seu nome: ");
scanf("%s", &nome );


printf("Digite a quantidade de salários: ");
scanf("%f", &nsalario);


printf("Digite a quantidade de dependentes: ");
scanf("%f", &ndependentes);

salario = nsalario * 1212;


if(nsalario <=3){

    fgts = (salario*8) /100;
    inss = (salario*5) /100;


}else if (nsalario <=6){

    fgts = (salario*8.5) /100;
    inss = (salario*6) /100;

}else {

    fgts = (salario*9) / 100;
    inss = (salario*7) / 100;
}

sfamilia = (ndependentes*5) * salario / 100;
sliquido = (salario + sfamilia) - (fgts + inss);

printf ("------Dados de: %s------\n", nome);
printf ("FGTS = R$%.2f\n", fgts);
printf ("INSS = R$%.2f\n", inss);
printf ("Salário família = R$%.2f\n", sfamilia);
printf ("Salário líquido = R$%.2f\n", sliquido);
printf ("------Dados de: %s------", nome);


}
