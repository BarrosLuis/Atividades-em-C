#include <stdio.h>
#include <locale.h>
#define NUMAX 12
int main(){

int i;
int taxa[NUMAX];
int total=0;
float media;

setlocale(LC_ALL,"Portuguese");

for(i=0; i<NUMAX; i++) {
    printf("Digite a taxa do m�s %d: ", i+1);
    scanf("%d", &taxa[i]);
    total += taxa[i];

}

media=total/NUMAX;
printf("M�dia da taxa anual: %.2f\n", media);
return(0);

}
