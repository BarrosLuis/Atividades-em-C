#include <locale.h>
#include <string.h>
#include <stdio.h>


struct funcionario{
    int matricula;
    char nome[30];
    char cargo[15];
};

typedef struct funcionario FUNC;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        puts("\t\t\t\tREGISTRO DE FUNCIONÁRIOS\n");
        puts("[1] Cadastrar funcionário\n");
        puts("[2] Exibir funcionários cadastrados\n");
        puts("[3] Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);
        puts("\t\t\t\t\n");


        switch (opcao){

            case 1:
                cadastro();
                break;
            case 2:
                exibir_func();
                break;
            case 3:
                printf("SAINDO DO PROGRAMA....");
                Sleep(2000);
                break;
            }
            system("cls");
    }while(opcao != 3);
}
void cadastro(){

int resp;

do{

    FUNC funcionario;

    system("cls");

    printf("Digite o nº da matrícula: ");
    scanf("%d", &funcionario.matricula);

    getchar();

    printf("Digite o nome do funcionário: ");
    scanf("%[^\n]s", &funcionario.nome);
    getchar();

    printf("Digite o cargo do funcionário: ");
    scanf("%[^\n]s", &funcionario.cargo);
    getchar();

    salvar_cadastro(funcionario);

    printf("DESEJA CONTINUAR? [1] - SIM [2] - NÃO: ");
    scanf("%d", &resp);



}while(resp == 1);

}

void salvar_cadastro(FUNC funcionario){

    FILE *registro;
    registro = fopen("registro.txt", "a");
    fprintf(registro, "%d, ", funcionario.matricula);
    fprintf(registro, "%s, ", funcionario.nome);
    fprintf(registro, "%s\n", funcionario.cargo);
    fclose(registro);
}

void exibir_func(){

    system("cls");

    FILE *registro;
    registro = fopen("registro.txt", "r");

    char linha[100];
    while (fgets(linha, 100, registro) != NULL){
        printf("%s", linha);
    }
    getchar();
    getchar();
}
