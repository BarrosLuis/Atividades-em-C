#include<stdio.h>
#include<locale.h>

int valor(int *a, int *b) {
    *a = *a+1; //modificando valor a
    *b = *b+1; //modificando valor b

    printf("Valores as vari�veis dentro da fun��o: \n");
    printf("1� valor: %d \n", *a);
    printf("2� valor: %d \n", *b);
}

int main(){

    int x = 1, y = 2;
    setlocale(LC_ALL, "Portuguese");
    printf("Valores iniciais de x: %d e y: %d\n", x,y);
    printf("Chamando a fun��o:\n");
    valor(&x, &y);
    printf("Valores depois da fun��o de x: %d e y: %d", x,y);
}

/* S�o passados os endere�os de mem�ria dos argumentos, podendo alterar os valores. */
