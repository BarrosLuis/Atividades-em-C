#include <locale.h>

int soma(int a, int b); // prot�tipo da fun��o

int main() {
    int x, y;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro n�mero a ser somado: \n");
    scanf("%d", &x);
    printf("Digite o segundo n�mero a ser somado:\n");
    scanf("%d", &y);

    printf("Total da soma: %d \n", soma(x,y));

}

int soma(int a, int b) {
    int resultado;
    resultado = a + b;
    return resultado;
}
