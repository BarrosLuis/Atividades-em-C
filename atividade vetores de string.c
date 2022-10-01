#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {

//quantidade de indíces e tamanho de cada string

char alunos[5][15];
int count;

setlocale(LC_ALL, "Portuguese");

for (count=0; count<5;count++){

    printf("Digite um nome: ");
    scanf ("%s", &alunos[count]);
}

printf ("\n\nOs nomes que você digitou foram:\n");
for (count=0;count<5;count++){
    printf ("%s\n", alunos[count]);
}
return(0);
}
