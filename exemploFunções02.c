#include<stdio.h>
#include<locale.h>

int valor(int a, int b) {
    a = a+1; // modificando valor a
    b = b+1; // modificando valor b

    printf("Valores as vari�veis dentro da fun��o: \n");
    printf("1� valor: %d \n", a);
    printf("2� valor: %d \n", b);
}

int main() {
    int x = 1, y = 2;
    setlocale(LC_ALL, "Portuguese");
    printf("Valores iniciais de x: %d e y: %d\n", x,y);
    printf("Chamando a fun��o:\n");
    valor(x,y);
    printf("Valores depois da fun��o de x: %d e y %d\n", x,y);
}

/* Chamada de fun��o por valor, os valores dos argumentos passados n�o s�o modificados
    pois � fornecida uma c�pia dos valores para a fun��o*/
