#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, num;

    printf("Deseja ver a tabuada de qual número: ");
    scanf("%d", &n1);

    for(num = 1; num <= 10; num++){
        printf("%d X %d = %d\n", n1, num, n1 * num);
    }
    system("pause");

    return 0;
}
