#include<stdio.h>
int main (void) {

char alunos[3][15];
int notasAlunos[3][4], i, j;
float media=0;
for (i=0; i<3; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i]);
    for ( j=0; j<4; j++ ){
        printf ("\n Notas referentes ao %d Bim = ", j+1);
        scanf ("%d", &notasAlunos[ i ] [ j ]);
    }
}

printf("\n\n ================= Saída de Dados =================\n\n");

for( i=0; i<3; i++){
    printf("Media do aluno %s \n", alunos[i]);

for (j=0;j<4;j++){
    printf("\n %dº BIM: %d \n", j+1, notasAlunos[ i ] [ j ]);
    media += notasAlunos[ i ] [ j ];
}

media = media /4;
printf("Final: %.2f \n================= \n", media);
media = 0;

 }

 return(0);

}

