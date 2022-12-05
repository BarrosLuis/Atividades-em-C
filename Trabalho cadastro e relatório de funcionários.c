#include <locale.h>
#include <string.h>
#include <stdio.h>


struct funcionario {
    // Estrutura com os dados que ser�o pedidos para cadastrar o funcion�rio
    int matricula;
    char nome[30];
    char cargo[15];
};

typedef struct funcionario FUNC;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        // Menu inicial com as instru��es para o usu�rio

        puts("\t\t\t\tREGISTRO DE FUNCION�RIOS\n");
        puts("[1] Cadastrar funcion�rio\n");
        puts("[2] Exibir funcion�rios cadastrados\n");
        puts("[3] Sair\n");
        printf("Digite uma op��o: ");
        scanf("%d", &opcao);
        puts("\t\t\t\t\n");



        switch (opcao){

        // Switch para o usu�rio selecionar as op��es oferecidas

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
void cadastro() {

// Fun��o de cadastrar funcion�rios
int resp;

do{

    FUNC funcionario;

    system("cls");

    printf("Digite o n� da matr�cula: ");
    scanf("%d", &funcionario.matricula);

    getchar();

    printf("Digite o nome do funcion�rio: ");
    scanf("%[^\n]s", &funcionario.nome);
    getchar();

    printf("Digite o cargo do funcion�rio: ");
    scanf("%[^\n]s", &funcionario.cargo);
    getchar();

    salvar_cadastro(funcionario);

    printf("DESEJA CONTINUAR? [1] - SIM [2] - N�O: ");
    scanf("%d", &resp);



}while(resp == 1);

}

void salvar_cadastro(FUNC funcionario){
    // Fun��o sem retorno que salva os funcion�rios cadastrados

    FILE *registro;
    registro = fopen("registro.txt", "a");
    fprintf(registro, "%d, ", funcionario.matricula);
    fprintf(registro, "%s, ", funcionario.nome);
    fprintf(registro, "%s\n", funcionario.cargo);
    fclose(registro);
}

void exibir_func(){

    // Fun��o sem retorno que exibe os funcion�rios cadastrados

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
