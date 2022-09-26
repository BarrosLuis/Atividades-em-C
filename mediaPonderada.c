#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    float n1, p1, n2, p2, n3, p3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);
    n1 = n1 * p1;

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);
    n2 = n2 * p2;

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &p3);
    n3 = n3 * p3;

    media = (n1 + n2 + n3)/ (p1+p2+p3);

    printf("A média ponderada das notas é: %.1f", media);
    return 0;
}
