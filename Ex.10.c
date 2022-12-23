#include <stdio.h>
#include <string.h>

struct dados_livros{
    char Livro [30], Autor [15];
    int Ano;
};

int main()
{
    struct dados_livros Livros [5];
    char pesquisa [30];
    int i;
    for (i = 0; i < 5; i++){
        printf("(%d) - Titulo: ", i);
        fgets(Livros[i].Livro, 30, stdin);
        fflush(stdin);
        printf("(%d) - Autor: ", i);
        fgets(Livros[i].Autor, 15, stdin);
        printf("(%d) - Ano: ", i);
        scanf(" %d", &Livros[i].Ano);
        getchar();
    }
    printf("Pesquise o Livro: ");
    fgets(pesquisa, 30, stdin);
    fflush(stdin);
    for(i = 0; i < 5; i++){
        if(strcmp (pesquisa, Livros[i].Livro) >= 0){
            printf("Titulo: %s", Livros[i].Livro);
            printf("Autor: %s", Livros[i].Autor);
            printf("-------------------\n");
        }
    }
    return 0;
}