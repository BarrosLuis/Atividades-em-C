#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {

//quantidade de ind�ces e tamanho de cada string

char alunos[5][15];
int count;

setlocale(LC_ALL, "Portuguese");

for (count=0; count<5;count++){

    printf("Digite um nome: ");
    scanf ("%s", &alunos[count]);
}

printf ("\n\nOs nomes que voc� digitou foram:\n");
for (count=0;count<5;count++){
    printf ("%s\n", alunos[count]);
}
return(0);
}
