#include <stdio.h>

struct funcionario {
    char Nome [50], Sexo, CPF[15], Nascimento[11], Cargo[30];
    int Idade, Setor;
    float Salario;
};


int main()
{   
    struct funcionario funci;
    int i;
    printf("-----Tabela Funcionario----\n");
    printf("Nome: ");
    fgets(funci.Nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &funci.Idade);
    do{
        printf("Sexo (M ou F): ");
        scanf(" %c", &funci.Sexo);
        if  (funci.Sexo != 'M' && funci.Sexo != 'm' && funci.Sexo != 'F' && funci.Sexo != 'f'){
            printf("Opcao Invalida\n");
        }
    }while(funci.Sexo != 'M' && funci.Sexo != 'm' && funci.Sexo != 'F' && funci.Sexo != 'f');
    getchar();
    printf("Cpf(999.999.999-99): ");
    fgets(funci.CPF, 15, stdin);
    printf("Data de Nascimento(DD/MM/AAAA): ");
    fgets(funci.Nascimento, 11, stdin);
    fflush(stdin);
    printf("Cargo: ");
    fgets(funci.Cargo, 30, stdin);
    do{
        printf("Setor: ");
        scanf(" %d", &funci.Setor);
        fflush(stdin);
        if (funci.Setor < 0 || funci.Setor > 99){
            printf("Opcao Invalida\n");
        }
    }while(funci.Setor < 0 || funci.Setor > 99);
    getchar();
    
    printf("-----Tabela Funcionario----\n");
    printf("Nome: %s", funci.Nome);
    printf("Idade: %d\n", funci.Idade);
    printf("Sexo: %c\n", funci.Sexo);
    printf("CPF: %s", funci.CPF);
    printf("Data de Nascimento: %s", funci.Nascimento);
    printf("Setor: %d\n", funci.Setor);
    printf("Cargo : %s", funci.Cargo);
    getchar();
    return 0;
}