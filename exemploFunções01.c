#include <locale.h>

int soma(int a, int b); // protótipo da função

int main() {
    int x, y;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o primeiro número a ser somado: \n");
    scanf("%d", &x);
    printf("Digite o segundo número a ser somado:\n");
    scanf("%d", &y);

    printf("Total da soma: %d \n", soma(x,y));

}

int soma(int a, int b) {
    int resultado;
    resultado = a + b;
    return resultado;
}
