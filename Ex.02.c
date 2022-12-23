#include <stdio.h>
struct dados{
    char nome [50];
    int idade;
    char endereco [100];
};

int main()
{
    struct  dados D;
    printf("Escreva o nome: ");
    fgets(D.nome, 50, stdin);
    printf("Escreva a idade: ");
    scanf(" %c", D.idade);
    printf("Escreva o endereco: ");
    fgets(D.endereco, 50, stdin);
    return 0;
}