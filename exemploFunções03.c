#include<stdio.h>
#include<locale.h>

int valor(int *a, int *b) {
    *a = *a+1; //modificando valor a
    *b = *b+1; //modificando valor b

    printf("Valores as variáveis dentro da função: \n");
    printf("1º valor: %d \n", *a);
    printf("2º valor: %d \n", *b);
}

int main(){

    int x = 1, y = 2;
    setlocale(LC_ALL, "Portuguese");
    printf("Valores iniciais de x: %d e y: %d\n", x,y);
    printf("Chamando a função:\n");
    valor(&x, &y);
    printf("Valores depois da função de x: %d e y: %d", x,y);
}

/* São passados os endereços de memória dos argumentos, podendo alterar os valores. */
