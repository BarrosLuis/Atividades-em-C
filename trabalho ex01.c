#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"Portuguese");

int idade;
float vpassagem, desconto, vtotal;

printf("Digite a idade do passageiro: ");
scanf("%d", &idade);

printf("Digite o valor da passagem: ");
scanf("%f", &vpassagem);

if(idade <=11){
    desconto = (vpassagem*25) /100;
} else if (idade >11 && idade <=16) {
    desconto = (vpassagem*10) /100;

}else if (idade >16 && idade <=22) {
    desconto = (vpassagem*7) /100;

}else if(idade >22 && idade <=37) {
    desconto = (vpassagem*2) /100;

}else if(idade >37 && idade >=45) {
    desconto = (vpassagem*1) /100;

}else if(idade >45 && idade >=58) {
    desconto = (vpassagem*5) /100;
}else {
    desconto = (vpassagem*9) /100;
}

vtotal = vpassagem - desconto;

printf ("O valor da passagem é de R$%.2f", vtotal);

}





