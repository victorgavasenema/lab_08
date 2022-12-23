#include <stdio.h>

struct aluno{
    char nome [50];
    char matricula [10];
    char curso [30];
};

int main()
{
    struct  aluno alu[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Escreva o nome: ");
        fgets(alu[i].nome, 50, stdin);
        printf("Escreva a matricula do aluno: ");
        fgets(alu[i].matricula, 10, stdin);
        printf("Escreva o curso do aluno: ");
        fgets(alu[i].curso, 30, stdin);
    }
    
    return 0;
}